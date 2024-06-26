@class PXRelatedSpecManager, NSDictionary, PXRelatedTilingLayout, NSObject, PXAssetActionManager, PXSectionedObjectReference, PXTilingController, NSString, PXWidgetSpec, PXPhotosDetailsContext, PXRelatedDataSourceManager, PXRelatedDataSource, PXBasicTileAnimator, PXSectionedSelectionManager;
@protocol PXWidgetEditingDelegate, PXWidgetDelegate, PXWidgetUnlockDelegate, PXWidgetInteractionDelegate, PXAnonymousView;

@interface PXRelatedWidget : NSObject <PXRelatedDataSourceManagerObserver, PXTilingControllerTransitionDelegate, PXTilingControllerScrollDelegate, PXRelatedTilingLayoutDelegate, PXTileSource, PXChangeObserver, PXWidget> {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    struct { BOOL dataSourceManager; BOOL layout; BOOL availableNumberOfRows; BOOL maximumNumberOfRowsToDisplay; BOOL canExpand; BOOL hasLoadedContentData; BOOL prefetchedDataSources; } _needsUpdateFlags;
}

@property (readonly, nonatomic) PXRelatedDataSourceManager *_dataSourceManager;
@property (readonly, nonatomic) PXRelatedSpecManager *_specManager;
@property (readonly, nonatomic) PXRelatedTilingLayout *_layout;
@property (readonly, nonatomic) PXBasicTileAnimator *_tileAnimator;
@property (readonly, nonatomic) PXTilingController *_tilingController;
@property (nonatomic, setter=_setShouldLoadContentData:) BOOL _shouldLoadContentData;
@property (nonatomic, setter=_setAvailableNumberOfRows:) long long _availableNumberOfRows;
@property (nonatomic, setter=_setMaximumNumberOfRowsToDisplay:) long long _maximumNumberOfRowsToDisplay;
@property (nonatomic, getter=_isExpanded, setter=_setExpanded:) BOOL _expanded;
@property (nonatomic, setter=_setCanExpand:) BOOL _canExpand;
@property (retain, nonatomic, setter=_setAnchorDataSource:) PXRelatedDataSource *_anchorDataSource;
@property (nonatomic, setter=_setAnchorIndexPath:) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } _anchorIndexPath;
@property (nonatomic, setter=_setAnchorOffset:) struct CGPoint { double x; double y; } _anchorOffset;
@property (nonatomic, setter=_setHasLoadedContentData:) BOOL hasLoadedContentData;
@property (retain, nonatomic, setter=_setPrefetchedDataSourceByRelatedEntry:) NSDictionary *_prefetchedDataSourceByRelatedEntry;
@property (retain, nonatomic) PXSectionedObjectReference *highlightedObjectReference;
@property (retain, nonatomic) PXSectionedObjectReference *focusedObjectReference;
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
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (readonly, nonatomic) long long contentViewAnchoringType;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) long long contentLayoutStyle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
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

- (void)_performChanges:(id /* block */)a0;
- (id)extendedTraitCollection;
- (void)_invalidateLayout;
- (void)_updateLayoutIfNeeded;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)a0;
- (void)_invalidateDataSourceManager;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)installGestureRecognizers;
- (void)loadContentData;
- (void)unloadContentData;
- (void)userDidSelectDisclosureControl;
- (id)createTileAnimator;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0 layout:(id)a1;
- (void)checkInTile:(void *)a0 withIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a1;
- (void)tilingController:(id)a0 prepareForChange:(id)a1;
- (id)tilingController:(id)a0 tileIdentifierConverterForChange:(id)a1;
- (id)tilingController:(id)a0 transitionAnimationCoordinatorForChange:(id)a1;
- (struct CGPoint { double x0; double x1; })tilingController:(id)a0 initialVisibleOriginForLayout:(id)a1;
- (void)_loadTilingController;
- (BOOL)relatedTilingLayout:(id)a0 isPlaceholderEntryAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (id)relatedTilingLayout:(id)a0 titleFontNameForEntryAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })relatedTilingLayout:(id)a0 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 forAspectRatio:(double)a2;
- (id)relatedEntryForTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0 layout:(id)a1;
- (struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })identifierForTileWithKind:(long long)a0 relatedEntry:(id)a1 layout:(id)a2;
- (struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })identifierForTileWithKind:(long long)a0 relatedEntry:(id)a1;
- (id)relatedEntryAtPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpaceWithIdentifier:(void *)a1;
- (id)entryObjectReferenceAtPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpaceWithIdentifier:(void *)a1;
- (id)allRelatedEntries;
- (id)photosDataSourceForRelatedEntry:(id)a0;
- (id)relatedEntryForPhotosDataSource:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfInterestForRelatedEntry:(id)a0 inCoordinateSpaceWithIdentifier:(void *)a1;
- (void)enumerateTilesForRelatedRelatedEntry:(id)a0 usingBlock:(id /* block */)a1;
- (void)_saveAnchoring;
- (struct CGPoint { double x0; double x1; })_anchorPointForLayoutContentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_createPhotosDataSourceForRelatedEntry:(id)a0;
- (void)_loadContentDataIfNeeded;
- (void)_updateDataSourceManagerIfNeeded;
- (void)_invalidateAvailableNumberOfRows;
- (void)_updateAvailableNumberOfRowsIfNeeded;
- (void)_invalidateMaximumNumberOfRowsToDisplay;
- (void)_updateMaximumNumberOfRowsToDisplayIfNeeded;
- (void)_invalidateCanExpand;
- (void)_updateCanExpandIfNeeded;
- (void)_invalidatePrefetchedDataSources;
- (void)_updatePrefetchedDataSources;
- (void)_invalidateHasLoadedContentData;
- (void)_updateHasLoadedContentDataIfNeeded;

@end
