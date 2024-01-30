@class PUAssetReference, PXUIAssetBadgeView, PUAssetActionManager, NSString, PUBrowsingViewModel;

@interface PUAssetExplorerReviewScreenBadgeTileViewController : PUTileViewController <PXChangeObserver, PUBrowsingViewModelChangeObserver, PXUIAssetBadgeViewDelegate>

@property (readonly, nonatomic) PXUIAssetBadgeView *_badgeView;
@property (nonatomic, getter=_isPerformingChanges, setter=_setPerformingChanges:) BOOL _performingChanges;
@property (nonatomic, setter=_setNeedsUpdateBadgeView:) BOOL _needsUpdateBadgeView;
@property (nonatomic, setter=_setOverContent:) BOOL _isOverContent;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (retain, nonatomic) PUAssetReference *assetReference;
@property (retain, nonatomic) PUAssetActionManager *actionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })badgeTileSize;
+ (void)_configureBadgeView:(id)a0 isOverContent:(BOOL)a1 isLivePhotoDisabled:(BOOL)a2;

- (void)applyLayoutInfo:(id)a0;
- (void).cxx_destruct;
- (id)_disableLivePhotosSelectionManager;
- (void)assetBadgeView:(id)a0 userDidSelectBadges:(unsigned long long)a1;
- (id)_reviewActionManager;
- (void)_updateBadgeViewIfNeeded;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)prepareForReuse;
- (id)loadView;
- (BOOL)_needsUpdate;
- (void)performChanges:(id /* block */)a0;
- (void)_updateIfNeeded;
- (void)becomeReusable;
- (void)_invalidateBadgeView;
- (void)viewDidLoad;

@end
