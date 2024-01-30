@class _UIKeyboardFeedbackGeneratorConfiguration, NSString;

@interface _UIKeyboardFeedbackGenerator : UIFeedbackGenerator <_UIKBFeedbackGenerating>

@property (readonly, nonatomic, getter=_keyboardConfiguration) _UIKeyboardFeedbackGeneratorConfiguration *keyboardConfiguration;
@property (nonatomic, getter=_lastTypedKeyTimestamp, setter=_setLastTypedKeyTimestamp:) double lastTypedKeyTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_configurationClass;

- (id)_stats_key;
- (void)actionOccurred:(long long)a0;
- (void)actionOccurred:(long long)a0 atLocation:(struct CGPoint { double x0; double x1; })a1;
- (double)_autoDeactivationTimeout;
- (id)_feedbackWithUpdatedVolume:(id)a0;
- (void)_playFeedbackForActionType:(long long)a0 withCustomization:(id /* block */)a1;
- (float)scaleVolumeSlow:(float)a0 fast:(float)a1 timeSpan:(double)a2;

@end
