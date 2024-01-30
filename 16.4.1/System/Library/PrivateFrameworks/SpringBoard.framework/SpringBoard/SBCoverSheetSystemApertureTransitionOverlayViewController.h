@class UIView, SBSystemApertureMeshAnimatedWrapperViewController, SBSystemApertureSettings;
@protocol SBCoverSheetSystemApertureTransitionOverlayViewControllerDelegate;

@interface SBCoverSheetSystemApertureTransitionOverlayViewController : UIViewController {
    SBSystemApertureSettings *_settings;
    SBSystemApertureMeshAnimatedWrapperViewController *_meshWarpViewController;
    unsigned long long _state;
    UIView *_clippingView;
    unsigned long long _meshWarpTransitionsInProgress;
    BOOL _coverSheetTransitioning;
}

@property (weak, nonatomic) id<SBCoverSheetSystemApertureTransitionOverlayViewControllerDelegate> delegate;

- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_evaluateState;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_systemApertureDefaultFrame;
- (void)coverSheetTransitionDidEnd;
- (void)coverSheetTransitionUpdatedWithProgress:(double)a0 velocity:(double)a1;
- (void)coverSheetTransitionWillBeginForPresentation:(BOOL)a0;

@end
