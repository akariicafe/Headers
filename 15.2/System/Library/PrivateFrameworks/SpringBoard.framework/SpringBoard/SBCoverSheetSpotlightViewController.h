@class SBFFluidBehaviorSettings, _SBCoverSheetSpotlightViewController, NSString, UIView, UIViewFloatAnimatableProperty, MTMaterialView;
@protocol SBCoverSheetSpotlightViewControllerDelegate, SPUIRemoteSearchViewDelegate;

@interface SBCoverSheetSpotlightViewController : CSCoverSheetViewControllerBase <CSDismissableModalViewControllerDelegate> {
    UIView *_scaleView;
    UIViewFloatAnimatableProperty *_scaleProperty;
    SBFFluidBehaviorSettings *_scaleSettings;
    MTMaterialView *_searchLumSatBackdropView;
    MTMaterialView *_searchBlurBackdropView;
}

@property (weak, nonatomic) id<SPUIRemoteSearchViewDelegate> spotlightDelegate;
@property (weak, nonatomic) id<SBCoverSheetSpotlightViewControllerDelegate> delegate;
@property (retain, nonatomic) _SBCoverSheetSpotlightViewController *spotlightViewController;
@property (nonatomic) BOOL shouldModifyProudLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (BOOL)handleEvent:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_createProperties;
- (void)invalidate;
- (id)displayLayoutElementIdentifier;
- (void)aggregateBehavior:(id)a0;
- (void)aggregateAppearance:(id)a0;
- (void)_setCornerRounded:(BOOL)a0;
- (void)_updateForPropertyChanged;
- (void)addGrabberView:(id)a0;
- (void)updatePresentationProgressWithOffset:(double)a0 blurProgress:(double)a1 searchState:(long long)a2;
- (double)_scaleGivenTranslation:(double)a0;
- (void)_updateSpotlightScale:(double)a0 interactive:(BOOL)a1;
- (void)dismissForHomeButton;
- (void)handleBottomEdgeGestureBegan:(id)a0;
- (void)handleBottomEdgeGestureChanged:(id)a0;
- (void)handleBottomEdgeGestureEnded:(id)a0;
- (BOOL)presentationCancelsTouches;

@end
