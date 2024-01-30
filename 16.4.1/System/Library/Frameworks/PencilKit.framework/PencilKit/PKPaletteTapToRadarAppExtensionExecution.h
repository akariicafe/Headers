@class NSString, UIViewController, NSLayoutConstraint;

@interface PKPaletteTapToRadarAppExtensionExecution : PKPaletteTapToRadarCommandExecution <PKTextInputDebugRadarViewControllerDelegate> {
    UIViewController *_contentViewController;
    NSLayoutConstraint *_contentViewWidthConstraint;
    NSLayoutConstraint *_contentViewHeightConstraint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void)_dismiss;
- (void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateUI;
- (void)debugRadarViewControllerDidDismiss:(id)a0;

@end
