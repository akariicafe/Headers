@class UIView, NSString, NSTimer, PXCuratedLibraryStyleGuide, PXUpdater, PXCuratedLibraryViewModel, PXGView, PXPhotosGlobalFooterView, PXCuratedLibraryFooterViewModel, PXAssetsDataSourceCountsController, PXCuratedLibraryLayout;
@protocol PXCuratedLibraryFooterControllerDelegate;

@interface PXCuratedLibraryFooterController : PXObservable <PXMutableCuratedLibraryFooterController, PXChangeObserver, PXScrollViewControllerObserver, PXPhotosGlobalFooterViewDelegate, PXCuratedLibraryFooterViewModelPresentationDelegate> {
    double _lastUserScrollTime;
    BOOL _footerDidAutoScroll;
    NSTimer *_footerAutoScrollMinimumIdleTimer;
    PXCuratedLibraryFooterViewModel *_footerViewModel;
    long long _presentedZoomLevel;
    PXPhotosGlobalFooterView *_reusableFooterView;
    BOOL _isUpdatingFooter;
    BOOL _needsFooterFrameChangeAnimation;
}

@property (readonly, nonatomic) PXGView *gridView;
@property (readonly, nonatomic) PXCuratedLibraryLayout *layout;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;
@property (readonly, nonatomic) PXCuratedLibraryStyleGuide *styleGuide;
@property (readonly, nonatomic) PXAssetsDataSourceCountsController *itemCountsController;
@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) BOOL isGridViewVisible;
@property (readonly, nonatomic) BOOL isPullingFooter;
@property (nonatomic) BOOL wantsFooter;
@property (nonatomic) BOOL isFooterVisible;
@property (nonatomic) BOOL hasAppearedOnce;
@property (nonatomic) BOOL footerNeedsReveal;
@property (retain, nonatomic) PXCuratedLibraryFooterViewModel *footerViewModelIfLoaded;
@property (retain, nonatomic) PXPhotosGlobalFooterView *footerView;
@property (retain, nonatomic) UIView *footerMaskView;
@property (nonatomic, getter=isFooterFullyMasked) BOOL footerFullyMasked;
@property (weak, nonatomic) id<PXCuratedLibraryFooterControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL wantsFooterMask;
@property (readonly, nonatomic) double footerMaskVerticalOffset;
@property (readonly, nonatomic) BOOL hasAppeared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_modeForZoomLevel:(long long)a0;

- (id)footerViewModel;
- (void)_updateFooter;
- (void)scrollViewControllerDidScroll:(id)a0;
- (void)scrollViewControllerWillBeginScrolling:(id)a0;
- (void)_invalidateFooter;
- (void)_conditionallyRevealPhotosFooterView;
- (void)_footerHasImportantInformationDidChange;
- (void)_invalidateFooterMode;
- (void)_updateFooterMaskViewFrame;
- (id)presentingViewControllerForFooterViewModel:(id)a0;
- (id)initWithGridView:(id)a0 layout:(id)a1 viewModel:(id)a2 itemsCountsController:(id)a3;
- (void)performChanges:(id /* block */)a0;
- (BOOL)_shouldShowFooterForGridViewState;
- (void)viewDidAppear;
- (BOOL)_shouldRevealPhotosFooterView;
- (void)_conditionallyRevealPhotosFooterViewWithLastUserScrollTime:(double)a0;
- (void)_updateFooterMode;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)didPerformChanges;
- (void)setFooterMaskVerticalOffset:(double)a0;
- (void)_updateIsFooterVisible;
- (double)footerVisibleAmountIncludingSafeAreaInsets:(BOOL)a0;
- (void)_setNeedsUpdate;
- (void)scrollViewControllerContentBoundsDidChange:(id)a0;
- (void)_invalidateFooterMaskViewFrame;
- (void)photosGlobalFooterView:(id)a0 presentViewController:(id)a1;
- (BOOL)_shouldShowFooterForPresentedZoomLevel;
- (void)_invalidateFooterAlpha;
- (void)_viewDidStartScrolling;
- (id)init;
- (void)setWantsFooterMask:(BOOL)a0;
- (void)_invalidateFooterAndMaskVisibility;
- (void)_invalidateIsFooterVisible;
- (void)_invalidateWantsFooter;
- (void)_updateFooterAndMaskVisibility;
- (void).cxx_destruct;
- (void)_resetFooterViewModel;
- (void)_updateFooterAlpha;
- (void)photosGlobalFooterViewDidChangeHeight:(id)a0;
- (void)_updateWantsFooter;

@end
