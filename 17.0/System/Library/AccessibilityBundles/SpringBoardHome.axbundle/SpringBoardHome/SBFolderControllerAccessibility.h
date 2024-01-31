@interface SBFolderControllerAccessibility : __SBFolderControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_setCloseFolderTimerIfNecessary;
- (void)_cancelCloseFolderTimer;
- (void)_closeFolderTimerFired;
- (void)folderViewDidEndScrolling:(id)a0;
- (void)scrollUsingDecelerationAnimationToDefaultPageWithCompletionHandler:(id /* block */)a0;
- (void)_accessibilityCancelSBAXClosingFolderTimer;
- (void)_accessibilitySBAXClosingFolderTimerFired:(id)a0;
- (void)_accessibilityScheduleSBAXClosingFolderTimer;

@end
