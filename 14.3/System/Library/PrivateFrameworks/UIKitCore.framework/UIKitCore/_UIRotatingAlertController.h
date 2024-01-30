@class UIViewController;
@protocol _UIRotatingAlertControllerDelegate, UIPopoverPresentationControllerDelegate;

@interface _UIRotatingAlertController : UIAlertController {
    BOOL _isRotating;
    BOOL _readyToPresentAfterRotation;
    UIViewController *_presentedViewControllerWhileRotating;
    id<UIPopoverPresentationControllerDelegate> _popoverPresentationControllerDelegateWhileRotating;
}

@property (weak, nonatomic) id<_UIRotatingAlertControllerDelegate> rotatingSheetDelegate;
@property (nonatomic) unsigned long long arrowDirections;

- (BOOL)_shouldAbortAdaptationFromTraitCollection:(id)a0 toTraitCollection:(id)a1 withTransitionCoordinator:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)presentSheetFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_didRotateAndLayout;
- (void)doneWithSheet;
- (void)_updateSheetPositionAfterRotation;
- (void)willRotate:(id)a0;
- (void)didRotate:(id)a0;
- (BOOL)presentSheet;
- (void)_presentingViewControllerDidChange:(id)a0;
- (void)_presentingViewControllerWillChange:(id)a0;
- (BOOL)_canShowWhileLocked;

@end
