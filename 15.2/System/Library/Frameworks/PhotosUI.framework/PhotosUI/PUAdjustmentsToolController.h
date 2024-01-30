@class UIView, NSString, CEKBadgeTextView, PUAdjustmentsViewController, PUAdjustmentsDataSource, PUAdjustmentsToolControllerSpec, PUAutoAdjustmentController, _UIBackdropView, PXUISnappingController;

@interface PUAdjustmentsToolController : PUPhotoEditToolController <UIGestureRecognizerDelegate, PUAdjustmentsDataSourceDelegate, PUAdjustmentViewControllerDelegate, PUAdjustmentsToolControllerPPT> {
    PUAdjustmentsViewController *_adjustmentsViewController;
    UIView *_adjustmentPickerView;
    _UIBackdropView *_backdropBackgroundView;
    UIView *_solidBackgroundView;
    BOOL _useTranslucentBackground;
    BOOL _ppt_EverAdjusted;
    double _ppt_scrollDelta;
    long long _viewLoadingStartTime;
}

@property (retain, nonatomic, setter=_setSnappingController:) PXUISnappingController *_snappingController;
@property (retain, nonatomic) PUAdjustmentsDataSource *dataSource;
@property (retain, nonatomic) CEKBadgeTextView *badgeView;
@property (retain, nonatomic) PUAutoAdjustmentController *autoAdjustmentController;
@property (readonly, nonatomic) PUAdjustmentsToolControllerSpec *toolControllerSpec;
@property (nonatomic) long long initialAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)validateCommand:(id)a0;
- (id)localizedName;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)ppt_selectLightSlider:(id /* block */)a0;
- (void)ppt_selectColorSlider:(id /* block */)a0;
- (void)ppt_selectBWSlider:(id /* block */)a0;
- (void)ppt_scrollSelectedSliderByDelta;
- (void)ppt_setSteps:(long long)a0;
- (void)adjustmentsViewControllerDidAppear:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)adjustmentsViewControllerDidUpdateSelectedControl:(id)a0;
- (void)setupWithAsset:(id)a0 compositionController:(id)a1 editSource:(id)a2 overcaptureEditSource:(id)a3 valuesCalculator:(id)a4;
- (void)mediaViewIsReady;
- (void)updateAdjustmentControls;
- (void)_updateBackgroundAnimated:(BOOL)a0;
- (void)setUseGradientBackground:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateBadgeTextWithInfo:(id)a0;
- (id)toolbarIcon;
- (id)centerToolbarView;
- (BOOL)canResetToDefaultValue;
- (id)localizedResetToolActionTitle;
- (void)resetToDefaultValueAnimated:(BOOL)a0;
- (void)specDidChange;
- (void)autoEnhanceActionStateChanged;
- (void).cxx_destruct;
- (BOOL)wantsZoomAndPanEnabled;
- (BOOL)wantsSliderKeyControl;
- (void)increaseSliderValue:(BOOL)a0;
- (void)decreaseSliderValue:(BOOL)a0;
- (BOOL)installTogglePreviewGestureRecognizer:(id)a0;
- (BOOL)installLivePhotoPlaybackGestureRecognizer:(id)a0;
- (void)willBecomeActiveTool;
- (void)_performInitialAction;
- (void)didBecomeActiveTool;
- (long long)toolControllerTag;
- (void)setLayoutOrientation:(long long)a0 withTransitionCoordinator:(id)a1;
- (void)compositionControllerDidChangeForAdjustments:(id)a0;
- (double)_sliderLength;
- (void)autoEnhanceAssets:(id)a0;
- (void)_ppt_scrollAfterDelay:(id /* block */)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)adjustmentsDataChanged:(id)a0;
- (id)adjustmentsRenderer:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)setBackdropViewGroupName:(id)a0;

@end
