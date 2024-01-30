@class NSString, CEKBadgeTextView, PURedeyeToolControllerSpec, NSArray, NSMutableArray, UITapGestureRecognizer;

@interface PURedeyeToolController : PUPhotoEditToolController <UIGestureRecognizerDelegate> {
    CEKBadgeTextView *_instructionLabel;
    NSArray *_instructionLabelConstraints;
    CEKBadgeTextView *_failureLabel;
    NSArray *_failureLabelConstraints;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableArray *_knownCorrections;
    BOOL _failureAnimationIsInProgress;
    BOOL _isModelChangeLocal;
}

@property (readonly, nonatomic) PURedeyeToolControllerSpec *toolControllerSpec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)localizedName;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)updateViewConstraints;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)wantsSecondaryToolbarVisible;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_handleTapGesture:(id)a0;
- (void)_animateFailureAppearance;
- (void)_animateInstructionAppearance;
- (void)_correctRedEyeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_extractRedEyePointFromCorrectionDictionary:(id)a0;
- (void)_handleRedeyeButton:(id)a0;
- (void)_loadCorrectionsFromModelAnimated:(BOOL)a0;
- (BOOL)_removeCorrectionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_showChangeIndicatorAtPoint:(struct CGPoint { double x0; double x1; })a0 isFailure:(BOOL)a1;
- (id)centerToolbarView;
- (void)compositionControllerDidChangeForAdjustments:(id)a0;
- (void)didBecomeActiveTool;
- (void)didResignActiveTool;
- (void)flashAutoRedEyeCorrections;
- (id)selectedToolbarIcon;
- (void)setLayoutOrientation:(long long)a0 withTransitionCoordinator:(id)a1;
- (long long)toolControllerTag;
- (id)toolbarIcon;
- (BOOL)wantsZoomAndPanEnabled;

@end
