@class CSPolicy;

@interface CSSelfTriggerDetectorEnabledPolicyGibraltar : CSPolicy

@property (retain, nonatomic) CSPolicy *voiceTriggerEnabledPolicy;

- (id)init;
- (void).cxx_destruct;
- (void)_subscribeEventMonitors;
- (void)_addSelfTriggerDetectorEnabledConditions;

@end
