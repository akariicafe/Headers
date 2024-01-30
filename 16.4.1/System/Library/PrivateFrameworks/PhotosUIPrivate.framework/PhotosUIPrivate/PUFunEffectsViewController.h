@class PUMediaProvider, PUReviewScreenBarsModel, NSString, CFXReviewViewController, PUReviewAdjustmentOutput, PUReviewScreenControlBar, PUProgressIndicatorView, PUReviewAsset, PUObserverRegistry, PUReviewScreenTopBar;

@interface PUFunEffectsViewController : UIViewController <PXChangeObserver, CFXReviewViewControllerDelegate, PUOneUpAssetTransitionViewController>

@property (readonly, nonatomic) PUObserverRegistry *observerRegistry;
@property (readonly, nonatomic) CFXReviewViewController *effectsViewController;
@property (readonly, nonatomic) PUReviewScreenTopBar *topBar;
@property (readonly, nonatomic) PUReviewScreenControlBar *controlBar;
@property (readonly, nonatomic) BOOL inputHasKnownAdjustments;
@property (readonly, nonatomic) long long inputAdjustmentBaseVersion;
@property (retain, nonatomic) PUReviewAdjustmentOutput *exportAdjustmentOutput;
@property (nonatomic) unsigned long long exportCompletion;
@property (retain, nonatomic, setter=_setProgressIndicatorView:) PUProgressIndicatorView *progressIndicatorView;
@property (nonatomic, setter=_setShouldHideBars:) BOOL shouldHideBars;
@property (readonly, nonatomic) PUReviewAsset *reviewAsset;
@property (readonly, nonatomic) PUMediaProvider *mediaProvider;
@property (retain, nonatomic) PUReviewScreenBarsModel *reviewBarsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateBars;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)_updateLayout;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)registerObserver:(id)a0;
- (void)viewDidLoad;
- (void)unregisterObserver:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)_handleCompletion:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)_barControlsForModelControls:(id)a0 transitioning:(BOOL)a1;
- (void)_dismissProgressIndicator;
- (void)_exportWithCompletion:(unsigned long long)a0;
- (void)_finishExportingWithMediaItem:(id)a0;
- (void)_handleDidTapDoneButton:(id)a0;
- (void)_handleDidTapEditButton:(id)a0;
- (void)_handleDidTapFunEffectsButton:(id)a0;
- (void)_handleDidTapMarkupButton:(id)a0;
- (void)_handleDidTapRetakeButton:(id)a0;
- (void)_handleDidTapSendButton:(id)a0;
- (void)_handleDismissCompletion;
- (void)_handleExportFailureWithError:(id)a0;
- (void)_handleExportWithCompletion:(unsigned long long)a0;
- (void)_setShouldHideBars:(BOOL)a0 animated:(BOOL)a1;
- (void)_showProgressIndicator;
- (void)_signalCompletion:(unsigned long long)a0 withSavedAsset:(id)a1;
- (void)_updateProgressIndicatorWithProgress:(double)a0;
- (id)initWithReviewAsset:(id)a0 mediaProvider:(id)a1;
- (void)oneUpAssetTransition:(id)a0 animateTransitionWithContext:(id)a1 duration:(double)a2 completion:(id /* block */)a3;
- (void)oneUpAssetTransition:(id)a0 requestTransitionContextWithCompletion:(id /* block */)a1;
- (void)oneUpAssetTransitionDidEnd:(id)a0;
- (void)oneUpAssetTransitionWillBegin:(id)a0;
- (void)reviewViewController:(id)a0 didFinishExportingMediaItem:(id)a1 withError:(id)a2;
- (void)reviewViewController:(id)a0 didProgress:(double)a1 exportingMediaItem:(id)a2;
- (void)reviewViewController:(id)a0 didStartExportingMediaItem:(id)a1;
- (void)reviewViewControllerDidHideUserInterface:(id)a0;
- (void)reviewViewControllerDidShowUserInterface:(id)a0;
- (void)reviewViewControllerEffectsButtonWasTapped:(id)a0;

@end
