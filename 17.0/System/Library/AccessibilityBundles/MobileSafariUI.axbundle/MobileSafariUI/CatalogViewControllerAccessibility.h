@interface CatalogViewControllerAccessibility : __CatalogViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_setShowingCompletions:(BOOL)a0 popoverDismissalReason:(long long)a1 completionHandler:(id /* block */)a2;
- (void)completionList:(id)a0 topHitDidBecomeReadyForString:(id)a1;
- (void)showUniversalSearchFirstTimeExperienceIfNotShowing;
- (void)viewDidAppear:(BOOL)a0;
- (void)unifiedField:(id)a0 moveCompletionSelectionByRowOffset:(long long)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityAnnounceNewKeyboardCompletionWithPreviousIndexPath:(id)a0;
- (id)_axAnnounceTimer;
- (void)_axSetAnnounceTimer:(id)a0;
- (void)_axUpdateAccessibilityElements;

@end
