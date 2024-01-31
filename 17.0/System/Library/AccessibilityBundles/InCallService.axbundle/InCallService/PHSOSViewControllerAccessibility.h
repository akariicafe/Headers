@interface PHSOSViewControllerAccessibility : __PHSOSViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityPerformMagicTap;
- (void)presentMedicalID;
- (void)showSOSNotified;
- (void)_axMoveToCancelButton;
- (void)_axSpeakInfo;
- (void)showSOSDialCanceled;
- (void)showSOSDialCountdown;
- (void)showSOSNotificationCanceled;
- (void)showSOSNotificationCountdown;
- (void)showSOSNumbersList;

@end
