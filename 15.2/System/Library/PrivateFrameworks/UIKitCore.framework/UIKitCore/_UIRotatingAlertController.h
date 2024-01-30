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

- (void)didRotate:(id)a0;
- (BOOL)_shouldAbortAdaptationFromTraitCollection:(id)a0 toTraitCollection:(id)a1 withTransitionCoordinator:(id)a2;
- (BOOL)presentSheetFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_didRotateAndLayout;
- (void)_updateSheetPositionAfterRotation;
- (BOOL)_canShowWhileLocked;
- (void)willRotate:(id)a0;
- (BOOL)presentSheet;
- (void).cxx_destruct;
- (id)init;
- (void)_presentingViewControllerDidChange:(id)a0;
- (void)_presentingViewControllerWillChange:(id)a0;
- (void)dealloc;
- (void)doneWithSheet;

@end
