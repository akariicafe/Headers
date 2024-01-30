@class PUMediaProvider, PUReviewScreenBarsModel, NSString, CFXReviewViewController, PUReviewAdjustmentOutput, PUReviewScreenControlBar, PUProgressIndicatorView, PUReviewAsset, PUObserverRegistry, PUReviewScreenTopBar;

@interface PUFunEffectsViewController : UIViewController <PXChangeObserver, CFXReviewViewControllerDelegate, PUOneUpAssetTransitionViewController>

@property (readonly, nonatomic) PUObserverRegistry *_observerRegistry;
@property (readonly, nonatomic) CFXReviewViewController *_effectsViewController;
@property (readonly, nonatomic) PUReviewScreenTopBar *_topBar;
@property (readonly, nonatomic) PUReviewScreenControlBar *_controlBar;
@property (readonly, nonatomic) BOOL _inputHasKnownAdjustments;
@property (readonly, nonatomic) long long _inputAdjustmentBaseVersion;
@property (retain, nonatomic) PUReviewAdjustmentOutput *_exportAdjustmentOutput;
@property (nonatomic) unsigned long long _exportCompletion;
@property (retain, nonatomic, setter=_setProgressIndicatorView:) PUProgressIndicatorView *_progressIndicatorView;
@property (nonatomic, setter=_setShouldHideBars:) BOOL _shouldHideBars;
@property (readonly, nonatomic) PUReviewAsset *reviewAsset;
@property (readonly, nonatomic) PUMediaProvider *mediaProvider;
@property (retain, nonatomic) PUReviewScreenBarsModel *reviewBarsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)_updateLayout;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewWillLayoutSubviews;
- (void)registerObserver:(id)a0;
- (void)_handleCompletion:(unsigned long long)a0;
- (void)oneUpAssetTransitionWillBegin:(id)a0;
- (void)oneUpAssetTransition:(id)a0 requestTransitionContextWithCompletion:(id /* block */)a1;
- (void)oneUpAssetTransition:(id)a0 animateTransitionWithContext:(id)a1 duration:(double)a2 completion:(id /* block */)a3;
- (void)oneUpAssetTransitionDidEnd:(id)a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)unregisterObserver:(id)a0;
- (void)_updateBars;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithReviewAsset:(id)a0 mediaProvider:(id)a1;
- (void)reviewViewController:(id)a0 didFinishExportingMediaItem:(id)a1 withError:(id)a2;
- (void)reviewViewController:(id)a0 didProgress:(double)a1 exportingMediaItem:(id)a2;
- (void)reviewViewController:(id)a0 didStartExportingMediaItem:(id)a1;
- (void)reviewViewControllerDidHideUserInterface:(id)a0;
- (void)reviewViewControllerDidShowUserInterface:(id)a0;
- (id)_barControlsForModelControls:(id)a0 transitioning:(BOOL)a1;
- (void)_setShouldHideBars:(BOOL)a0 animated:(BOOL)a1;
- (void)_handleDidTapRetakeButton:(id)a0;
- (void)_handleDidTapDoneButton:(id)a0;
- (void)_handleDidTapFunEffectsButton:(id)a0;
- (void)_handleDidTapMarkupButton:(id)a0;
- (void)_handleDidTapEditButton:(id)a0;
- (void)_handleDidTapSendButton:(id)a0;
- (void)reviewViewControllerEffectsButtonWasTapped:(id)a0;
- (void)_handleDismissCompletion;
- (void)_handleExportWithCompletion:(unsigned long long)a0;
- (void)_exportWithCompletion:(unsigned long long)a0;
- (void)_handleExportFailureWithError:(id)a0;
- (void)_finishExportingWithMediaItem:(id)a0;
- (void)_showProgressIndicator;
- (void)_dismissProgressIndicator;
- (void)_updateProgressIndicatorWithProgress:(double)a0;
- (void)_signalCompletion:(unsigned long long)a0 withSavedAsset:(id)a1;

@end
