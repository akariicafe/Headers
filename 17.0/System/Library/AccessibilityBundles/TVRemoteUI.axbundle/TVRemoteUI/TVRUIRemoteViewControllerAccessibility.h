@interface TVRUIRemoteViewControllerAccessibility : __TVRUIRemoteViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewWillLayoutSubviews;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)clearMessageContent;
- (void)showLoadingSpinner;
- (void)showSearchingSpinner;
- (id)_axButtonHintText;
- (id)_axHintsViewController;
- (BOOL)_axSiriHintEnabled;
- (BOOL)_axVolumeHintEnabled;

@end
