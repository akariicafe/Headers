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

- (void).cxx_destruct;
- (BOOL)wantsSecondaryToolbarVisible;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didResignActiveTool;
- (id)localizedName;
- (void)updateViewConstraints;
- (id)toolbarIcon;
- (id)centerToolbarView;
- (BOOL)wantsZoomAndPanEnabled;
- (long long)toolControllerTag;
- (void)didBecomeActiveTool;
- (void)setLayoutOrientation:(long long)a0 withTransitionCoordinator:(id)a1;
- (void)compositionControllerDidChangeForAdjustments:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_handleTapGesture:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)selectedToolbarIcon;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (struct CGPoint { double x0; double x1; })_extractRedEyePointFromCorrectionDictionary:(id)a0;
- (void)flashAutoRedEyeCorrections;
- (void)_loadCorrectionsFromModelAnimated:(BOOL)a0;
- (void)_showChangeIndicatorAtPoint:(struct CGPoint { double x0; double x1; })a0 isFailure:(BOOL)a1;
- (void)_animateFailureAppearance;
- (void)_animateInstructionAppearance;
- (void)_handleRedeyeButton:(id)a0;
- (BOOL)_removeCorrectionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_correctRedEyeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)viewDidLoad;

@end
