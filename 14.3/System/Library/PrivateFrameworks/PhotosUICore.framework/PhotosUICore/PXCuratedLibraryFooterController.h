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
- (void)scrollViewControllerDidScroll:(id)a0;
- (void)_updateIsFooterVisible;
- (void)viewDidAppear;
- (void)_updateFooterMode;
- (id)init;
- (BOOL)_shouldShowFooterForGridViewState;
- (void)photosGlobalFooterView:(id)a0 presentViewController:(id)a1;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)scrollViewControllerContentBoundsDidChange:(id)a0;
- (void)_invalidateWantsFooter;
- (void)didPerformChanges;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidateFooter;
- (void)_updateWantsFooter;
- (void)performChanges:(id /* block */)a0;
- (void)_invalidateFooterAndMaskVisibility;
- (void)_conditionallyRevealPhotosFooterViewWithLastUserScrollTime:(double)a0;
- (void)scrollViewControllerWillBeginScrolling:(id)a0;
- (void)_updateFooterMaskViewFrame;
- (void)_conditionallyRevealPhotosFooterView;
- (id)initWithGridView:(id)a0 layout:(id)a1 viewModel:(id)a2 itemsCountsController:(id)a3;
- (void)_resetFooterViewModel;
- (void)_invalidateFooterMode;
- (id)presentingViewControllerForFooterViewModel:(id)a0;
- (BOOL)_shouldShowFooterForPresentedZoomLevel;
- (void)setWantsFooterMask:(BOOL)a0;
- (void)_viewDidStartScrolling;
- (double)footerVisibleAmountIncludingSafeAreaInsets:(BOOL)a0;
- (void)_updateFooter;
- (void)photosGlobalFooterViewDidChangeHeight:(id)a0;
- (void)_updateFooterAndMaskVisibility;
- (void)setFooterMaskVerticalOffset:(double)a0;
- (void)_invalidateFooterMaskViewFrame;
- (void)_invalidateFooterAlpha;
- (void)_updateFooterAlpha;
- (BOOL)_shouldRevealPhotosFooterView;
- (void)_invalidateIsFooterVisible;
- (void)_footerHasImportantInformationDidChange;

@end
