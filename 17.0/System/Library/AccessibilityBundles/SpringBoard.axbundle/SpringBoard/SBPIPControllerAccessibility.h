@interface SBPIPControllerAccessibility : __SBPIPControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)setPictureInPictureWindowsHidden:(BOOL)a0 forReason:(id)a1;
- (BOOL)shouldStartPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)a0 scenePersistenceIdentifier:(id)a1;
- (void)_axDidDismissPIP;
- (id)_axPegasusController;
- (void)_destroyWindowAndRootViewControllerIfPossible;

@end
