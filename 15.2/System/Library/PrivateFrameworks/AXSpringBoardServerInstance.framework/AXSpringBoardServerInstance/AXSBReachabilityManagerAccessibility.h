@interface AXSBReachabilityManagerAccessibility : __AXSBReachabilityManagerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_setKeepAliveTimer;
- (void)_notifyObserversReachabilityModeActive:(BOOL)a0;
- (BOOL)_axReachabilityEnabled;
- (id)_axDictionaryOfAnimationProperties;
- (id)_axReachabilitySettings;
- (void)_axSendReachabilityToggledActionWithPayload:(id)a0;
- (void)_axAddReachabilityProperty:(id)a0 toDictionary:(id)a1;

@end
