@class PUOperationStatus, UIView, NSUndoManager, PLRoundProgressView, NSString, UIButton, PXOperationStatus, PUAssetSharedViewModel, UILabel;

@interface PURenderIndicatorTileViewController : PUTileViewController <PUAssetSharedViewModelChangeObserver, PXLoadingStatusManagerObserver>

@property (nonatomic) BOOL needsUpdateStatus;
@property (nonatomic) BOOL needsUpdateSizeClass;
@property (nonatomic) BOOL needsUpdateStatusViews;
@property (copy, nonatomic) PUOperationStatus *status;
@property (retain, nonatomic) PXOperationStatus *editActionStatus;
@property (nonatomic) long long sizeClass;
@property (nonatomic) struct CGSize { double width; double height; } progressIndicatorSize;
@property (retain, nonatomic) UIView *roundedBackgroundView;
@property (retain, nonatomic) UILabel *renderingLabel;
@property (retain, nonatomic) PLRoundProgressView *progressView;
@property (nonatomic) BOOL isProgressViewVisible;
@property (retain, nonatomic) UIButton *errorButton;
@property (nonatomic) double renderLabelTextWidth;
@property (nonatomic) BOOL willShowProgressAfterDelay;
@property (retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })progressIndicatorTileSizeForSizeClass:(long long)a0;
+ (id)_loadErrorIconForSizeClass:(long long)a0;
+ (struct CGSize { double x0; double x1; })renderIndicatorTileSizeForSizeClass:(long long)a0;
+ (BOOL)wantsRenderViewForTypeOfProcessingNeeded:(unsigned short)a0;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_updateStatusViewsIfNeeded;
- (void)loadingStatusManager:(id)a0 didUpdateLoadingStatus:(id)a1 forItem:(id)a2;
- (void)_updateIfNeeded;
- (void)becomeReusable;
- (BOOL)_needsUpdate;
- (void)setProgressViewVisible:(BOOL)a0;
- (void)_updateStatusIfNeeded;
- (void)_setNeedsUpdate;
- (void)_updateViewFramesForCollapseState:(BOOL)a0;
- (void)viewDidLoad;
- (void)_invalidateStatusViews;
- (void)setProgressViewVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)applyLayoutInfo:(id)a0;
- (void)_invalidateSizeClass;
- (void)_updateSizeClassIfNeeded;
- (void)setProgressViewVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_handleAssetSharedViewModel:(id)a0 didChange:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_expandedBackgroundViewFrame;
- (void)_updateSubviewOrdering;
- (void)_invalidateStatus;
- (void).cxx_destruct;

@end
