@interface MessagesViewControllerAccessibility : __MessagesViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)shouldPerformSegueWithIdentifier:(id)a0 sender:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)willTransitionToPresentationStyle:(unsigned long long)a0;
- (void)_setAXLiveCell:(id)a0;
- (void)_accessibilityUpdateRecordButtonLabel;
- (void)_accessibilityUpdateCollectionViewAccessibilityForPresentationStyle:(unsigned long long)a0;
- (id)_axAvatarCarousel;
- (id)_axLastUserInfoString;
- (id)_axLiveCell;
- (void)_setAXAvatarCarousel:(id)a0;
- (void)_setAXLastUserInfoString:(id)a0;
- (void)dismissLaunchScreenIfNecessaryForPresentationStyle:(unsigned long long)a0 controller:(id)a1;
- (void)handleRecordTap:(id)a0;
- (void)hideUserInfoLabelWithDuration:(double)a0;
- (void)recordingDidFinish:(BOOL)a0;
- (void)showUserInfoLabelWithText:(id)a0;
- (void)updateEditButtonVisibilityForceHide:(BOOL)a0;

@end
