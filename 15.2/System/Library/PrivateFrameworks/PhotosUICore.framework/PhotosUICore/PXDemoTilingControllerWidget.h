@class PXPhotoKitUIMediaProvider, NSString, PXTilingController, PXAssetsDataSourceManager, PXUIAssetsScene, PXPhotosDetailsContext, PXWidgetSpec, PXSectionedSelectionManager, NSMutableSet, NSObject, PXBasicUIViewTileAnimator, PXAssetActionManager;
@protocol PXWidgetEditingDelegate, PXWidgetDelegate, PXWidgetUnlockDelegate, PXWidgetInteractionDelegate, PXAnonymousView;

@interface PXDemoTilingControllerWidget : NSObject <PXAssetsSceneDelegate, PXTileSource, PXTilingControllerTransitionDelegate, PXWidget>

@property (readonly, nonatomic) PXAssetsDataSourceManager *_dataSourceManager;
@property (readonly, nonatomic) PXPhotoKitUIMediaProvider *_mediaProvider;
@property (readonly, nonatomic) PXTilingController *_tilingController;
@property (readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator;
@property (readonly, nonatomic) NSMutableSet *_tilesInUse;
@property (readonly, nonatomic) PXUIAssetsScene *_scene;
@property (retain, nonatomic, setter=_setLocalizedSubtitle:) NSString *localizedSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXWidgetDelegate> widgetDelegate;
@property (weak, nonatomic) id<PXWidgetInteractionDelegate> widgetInteractionDelegate;
@property (weak, nonatomic) id<PXWidgetUnlockDelegate> widgetUnlockDelegate;
@property (weak, nonatomic) id<PXWidgetEditingDelegate> widgetEditingDelegate;
@property (retain, nonatomic) PXPhotosDetailsContext *context;
@property (retain, nonatomic) PXWidgetSpec *spec;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (readonly, nonatomic) double extraSpaceNeededAtContentBottom;
@property (readonly, nonatomic) BOOL hasLoadedContentData;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (readonly, nonatomic) long long contentViewAnchoringType;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) long long contentLayoutStyle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property (readonly, nonatomic) BOOL wantsFocus;
@property (readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property (readonly, nonatomic) BOOL isInEditMode;
@property (nonatomic) struct CGSize { double x0; double x1; } maxVisibleSizeInEditMode;

- (void).cxx_destruct;
- (id)init;
- (id)localizedTitle;
- (double)preferredContentHeightForWidth:(double)a0;
- (void)userDidSelectSubtitle;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0 layout:(id)a1;
- (void)checkInTile:(void *)a0 withIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a1;
- (id)tilingController:(id)a0 tileIdentifierConverterForChange:(id)a1;
- (void)_loadTilingController;
- (id)assetsScene:(id)a0 layoutForDataSource:(id)a1;
- (id)_demoTilingLayoutForDataSource:(id)a0;

@end
