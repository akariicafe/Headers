@class CSPolicy;

@interface CSSelfTriggerDetectorEnabledPolicyIOS : CSPolicy

@property (retain, nonatomic) CSPolicy *voiceTriggerEnabledPolicy;

- (void).cxx_destruct;
- (id)init;
- (void)_subscribeEventMonitors;
- (void)_addSelfTriggerDetectorEnabledConditions;

@end
