@class PUAssetSharedViewModel, PUOperationStatus, NSString, PLRoundProgressView, UIView, UILabel, UIButton;

@interface PURenderIndicatorTileViewController : PUTileViewController <PUAssetSharedViewModelChangeObserver>

@property (nonatomic) BOOL needsUpdateStatus;
@property (nonatomic) BOOL needsUpdateSizeClass;
@property (nonatomic) BOOL needsUpdateStatusViews;
@property (copy, nonatomic) PUOperationStatus *status;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })progressIndicatorTileSizeForSizeClass:(long long)a0;
+ (id)_loadErrorIconForSizeClass:(long long)a0;
+ (struct CGSize { double x0; double x1; })renderIndicatorTileSizeForSizeClass:(long long)a0;

- (void)_updateSubviewOrdering;
- (void)applyLayoutInfo:(id)a0;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)_handleErrorButtonTap:(id)a0;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (BOOL)_needsUpdate;
- (void)_invalidateStatus;
- (void)_updateIfNeeded;
- (void)becomeReusable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_expandedBackgroundViewFrame;
- (void)_updateViewFramesForCollapseState:(BOOL)a0;
- (void)setProgressViewVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)setProgressViewVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_handleAssetSharedViewModel:(id)a0 didChange:(id)a1;
- (void)_updateSizeClassIfNeeded;
- (void)_updateStatusViewsIfNeeded;
- (void)_invalidateStatusViews;
- (void)_invalidateSizeClass;
- (void)setProgressViewVisible:(BOOL)a0;
- (void)viewDidLoad;
- (void)_updateStatusIfNeeded;

@end
