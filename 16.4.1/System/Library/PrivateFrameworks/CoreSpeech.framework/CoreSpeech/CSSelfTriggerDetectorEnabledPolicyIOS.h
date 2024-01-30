@class CSPolicy;

@interface CSSelfTriggerDetectorEnabledPolicyIOS : CSPolicy

@property (retain, nonatomic) CSPolicy *voiceTriggerEnabledPolicy;

- (void)_subscribeEventMonitors;
- (id)init;
- (void).cxx_destruct;
- (void)_addSelfTriggerDetectorEnabledConditions;
- (BOOL)_deviceSupportMyriadFriendlySelfTrigger;
- (BOOL)_shouldEnableMyriadFriendlySelfTrigger;

@end
