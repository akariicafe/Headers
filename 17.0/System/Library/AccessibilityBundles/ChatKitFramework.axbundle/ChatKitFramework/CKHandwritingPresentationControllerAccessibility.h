@interface CKHandwritingPresentationControllerAccessibility : __CKHandwritingPresentationControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)init;
- (void)dealloc;
- (void)_updateVisibilityState;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_axIsHandwritingEnabled;
- (BOOL)_axIsObservingVoiceOverNotifications;
- (void)_axSetIsHandwritingEnabled:(BOOL)a0;
- (void)_axSetIsObservingVoiceOverNotifications:(BOOL)a0;
- (void)_axSubscribeToVoiceOverNotifications;
- (void)_axUnsubscribeFromVoiceOverNotifications;

@end
