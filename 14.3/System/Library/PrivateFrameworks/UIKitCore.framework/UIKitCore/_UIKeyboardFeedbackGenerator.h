@class _UIKeyboardFeedbackGeneratorConfiguration;

@interface _UIKeyboardFeedbackGenerator : UIFeedbackGenerator

@property (readonly, nonatomic, getter=_keyboardConfiguration) _UIKeyboardFeedbackGeneratorConfiguration *keyboardConfiguration;
@property (nonatomic, getter=_lastTypedKeyTimestamp, setter=_setLastTypedKeyTimestamp:) double lastTypedKeyTimestamp;
@property (nonatomic) double lastNonReleaseActionTimestamp;

+ (Class)_configurationClass;

- (id)_stats_key;
- (id)initWithCoordinateSpace:(id)a0 visceral:(long long)a1;
- (double)_autoDeactivationTimeout;
- (void)actionOccurred:(long long)a0;
- (float)scaleVolumeSlow:(float)a0 fast:(float)a1 timeSpan:(double)a2;
- (id)_feedbackWithUpdatedVolume:(id)a0;
- (void)_playFeedbackForActionType:(long long)a0 withCustomization:(id /* block */)a1;
- (void)cycleActivation;

@end
