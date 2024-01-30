@class NSString, CEKBadgeTextView, CIContext, NSMutableDictionary, CEKWheelScrubberView, CIImage, NSMutableArray, CEKSlider, NSLayoutConstraint, NSNumberFormatter;

@interface PUFilterToolController : PUPhotoEditToolController <CEKWheelScrubberViewDelegate, CEKSliderDelegate> {
    CEKBadgeTextView *_filterBadgeView;
    CEKWheelScrubberView *_scrubberView;
    CEKSlider *_slider;
    BOOL _isSliderTouchDown;
    CIImage *_inputImage;
    BOOL _monitorAdjustmentsForCache;
    NSMutableDictionary *_filterThumbnailCache;
    NSMutableDictionary *_filterIntensityCache;
    NSMutableArray *_toolConstraints;
    NSMutableArray *_scrubberViewConstraints;
    NSMutableArray *_filterBadgeViewConstraints;
    NSLayoutConstraint *_filterBadgeWidthConstraint;
    NSLayoutConstraint *_filterBadgeHeightConstraint;
    NSNumberFormatter *_formatter;
    CIContext *_context;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _thumbnailTime;
}

@property (copy, nonatomic) id /* block */ willLoadFilterThumbnails;
@property (copy, nonatomic) id /* block */ didFinishLoadingFilterThumbnails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_setupSlider;
- (void)didResignActiveTool;
- (void)wheelScrubberViewWillBeginScrolling:(id)a0;
- (void)_setupScrubber;
- (void)wheelScrubberViewDidEndScrolling:(id)a0;
- (void)_setupFilters;
- (void)_updateWithCompositionController:(id)a0;
- (void)_prepareThumbnailImagesIfNeeded;
- (void)_updateCacheWithCIImage:(id)a0;
- (void)_setThumbnail:(id)a0 forKey:(id)a1;
- (void)_updateBadgeConstraints;
- (void)_updateScrubberLayout;
- (long long)_adjustedFilterIndex;
- (id)_effectAdjustment;
- (id)_adjustedFilterName;
- (double)_adjustedFilterIntensity;
- (id)_effectForIndex:(long long)a0;
- (long long)_indexForFilterId:(id)a0;
- (void)_updateBadgeAndSliderWithEffect:(id)a0;
- (void)_setShowSlider:(BOOL)a0 animate:(BOOL)a1;
- (void)_updateFilterIntensityCache;
- (void)_updateToolConstraints;
- (void)_updateIntensityForEffect:(id)a0;
- (void)_updateSelectionTextAnimate:(BOOL)a0;
- (id)localizedName;
- (void)wheelScrubberView:(id)a0 updateCell:(id)a1 forItemAtIndex:(unsigned long long)a2;
- (id)initWithCoder:(id)a0;
- (void)wheelScrubberViewDidChangeSelectedIndex:(id)a0;
- (void)updateViewConstraints;
- (id)toolbarIcon;
- (id)centerToolbarView;
- (BOOL)wantsZoomAndPanEnabled;
- (BOOL)installTogglePreviewGestureRecognizer:(id)a0;
- (BOOL)installLivePhotoPlaybackGestureRecognizer:(id)a0;
- (long long)toolControllerTag;
- (void)willBecomeActiveTool;
- (void)setLayoutOrientation:(long long)a0 withTransitionCoordinator:(id)a1;
- (void)compositionControllerDidChangeForAdjustments:(id)a0;
- (void)sliderWillBeginScrolling:(id)a0;
- (void)sliderDidScroll:(id)a0;
- (void)sliderWillEndScrolling:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)sliderDidEndScrolling:(id)a0;
- (void)_sliderDidEndScrolling;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
