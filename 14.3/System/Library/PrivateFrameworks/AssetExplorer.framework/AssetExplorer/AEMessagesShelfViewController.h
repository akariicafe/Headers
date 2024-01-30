@class PXAssetsScene, PUAssetExplorerReviewScreenViewController, PXScrollViewController, PXBasicUIViewTileAnimator, PUReviewDataSource, AEPackageTransport, UIColor, PXTilingController, NSString, PUReviewAssetsDataSourceManager, PUReviewAssetsMediaProvider, NSMutableSet, AEWrappedDataSourceManager;
@protocol CKPluginEntryViewControllerDelegate;

@interface AEMessagesShelfViewController : UIViewController <AEPluginEntryViewController, PXReusableObjectPoolDelegate, PXAssetsSceneDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXTileSource, PXChangeObserver, PUAssetExplorerReviewScreenViewControllerDelegate, UIGestureRecognizerDelegate, CKPluginEntryViewController, AEMessagesShelfLayoutDelegate>

@property (readonly, nonatomic) PXTilingController *_tilingController;
@property (readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator;
@property (readonly, nonatomic) PXAssetsScene *_sceneController;
@property (readonly, nonatomic) PXScrollViewController *_scrollViewController;
@property (readonly, nonatomic) PUReviewDataSource *_dataSource;
@property (readonly, nonatomic) PUReviewAssetsDataSourceManager *_internalReviewDataSourceManager;
@property (readonly, nonatomic) PUReviewAssetsMediaProvider *_internalReviewMediaProvider;
@property (readonly, nonatomic) AEWrappedDataSourceManager *_wrappedDataSourceManager;
@property (readonly, nonatomic) AEPackageTransport *_packageTransport;
@property (readonly, nonatomic) NSMutableSet *_tilesInUse;
@property (nonatomic, setter=_setIndexToScrollTo:) long long _indexToScrollTo;
@property (retain, nonatomic) UIColor *_roundedCornerOverlayFillColor;
@property (retain, nonatomic) PUAssetExplorerReviewScreenViewController *presentedReviewController;
@property (weak, nonatomic) id<CKPluginEntryViewControllerDelegate> entryViewDelegate;
@property (readonly) BOOL wantsClearButton;
@property (readonly) BOOL wantsEdgeToEdgeLayout;
@property (readonly) BOOL loadedContentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)loadView;
- (struct CGPoint { double x0; double x1; })tilingController:(id)a0 initialVisibleOriginForLayout:(id)a1;
- (void)assetExplorerReviewScreenViewController:(id)a0 didPerformCompletionAction:(unsigned long long)a1 withSelectedAssetUUIDs:(id)a2 livePhotoDisabledAssetUUIDs:(id)a3 substituteAssetsByUUID:(id)a4;
- (void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)a0;
- (BOOL)assetExplorerReviewScreenViewController:(id)a0 canPerformActionType:(unsigned long long)a1 onAsset:(id)a2 inAssetCollection:(id)a3;
- (id)_currentAssetsDataSource;
- (id)framesOfVisibleContentViewInCoordinateSpace:(id)a0;
- (double)layout:(id)a0 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a1;
- (void)handleTap:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)assetsScene:(id)a0 transitionAnimationCoordinatorForChange:(id)a1;
- (id)assetsScene:(id)a0 layoutForDataSource:(id)a1;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0 layout:(id)a1;
- (void)checkInTile:(void *)a0 withIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidLoad;
- (long long)layout:(id)a0 irisToggleStateForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a1;
- (BOOL)layout:(id)a0 itemAtIndexPathIsVideo:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a1;
- (BOOL)layout:(id)a0 itemAtIndexPathIsLoop:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a1;
- (BOOL)layout:(id)a0 itemAtIndexPathIsAnimatedImage:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a1;
- (double)layout:(id)a0 itemAtIndexPathDuration:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a1;
- (BOOL)layoutShouldShowVideoDuration:(id)a0;
- (id)initWithPackageTransport:(id)a0;
- (void)_presentReviewViewController:(id)a0;
- (void)_dismissPresentedReviewController:(id)a0 animated:(BOOL)a1;
- (void)_transportStagingStateDidChange;
- (void)_removeFromShelf:(id)a0;
- (void)_toggleIris:(id)a0;
- (void)_presentReviewForAssetReference:(id)a0;
- (id)contentAssetReferenceAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_traverseHierarchyForFillColorStartingWithView:(id)a0;
- (void)_immediatelyGenerateAndStagePackageFromReviewAsset:(id)a0 suppressLivePhoto:(BOOL)a1 mediaOrigin:(long long)a2;

@end
