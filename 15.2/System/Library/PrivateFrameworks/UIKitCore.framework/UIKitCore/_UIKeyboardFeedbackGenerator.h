@class _UIKeyboardFeedbackGeneratorConfiguration;

@interface _UIKeyboardFeedbackGenerator : UIFeedbackGenerator

@property (nonatomic) BOOL usesKeyHaptics;
@property (readonly, nonatomic, getter=_keyboardConfiguration) _UIKeyboardFeedbackGeneratorConfiguration *keyboardConfiguration;
@property (nonatomic, getter=_lastTypedKeyTimestamp, setter=_setLastTypedKeyTimestamp:) double lastTypedKeyTimestamp;
@property (nonatomic) double lastNonReleaseActionTimestamp;

+ (id)configurationForVisceral:(long long)a0;
+ (BOOL)areKeyHapticsEnabled;
+ (Class)_configurationClass;

- (id)_stats_key;
- (void)setUsesKeyHapticsFromVisceral:(long long)a0;
- (float)scaleVolumeSlow:(float)a0 fast:(float)a1 timeSpan:(double)a2;
- (id)_feedbackWithUpdatedVolume:(id)a0;
- (id)initWithCoordinateSpace:(id)a0 visceral:(long long)a1;
- (void)processDidChangeLowPowerMode:(id)a0;
- (id)initWithCoordinateSpace:(id)a0;
- (id)init;
- (void)_playFeedbackForActionType:(long long)a0 withCustomization:(id /* block */)a1;
- (void)actionOccurred:(long long)a0;
- (double)_autoDeactivationTimeout;
- (void)commonInitWithVisceral:(long long)a0;
- (void)dealloc;

@end
