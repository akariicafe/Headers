@class PXUIScrollViewController, PXPhotoKitAssetCollectionActionManager, NSObject, PXPhotosDetailsActionsSpecManager, PXAssetActionManager, PXReusableObjectPool, PHFetchResult, PXTilingController, PXActionRowTile, NSString, PXActionPerformer, PXPhotosDetailsContext, NSMutableSet, PXWidgetSpec, NSArray, PXOneUpPresentation, PXSectionedSelectionManager, PXPhotosDataSource, PXPhotosDetailsViewModel;
@protocol PXWidgetEditingDelegate, PXWidgetDelegate, PXTileAnimator, PXAnonymousView, PXWidgetInteractionDelegate, PXActionPerformerDelegate, PXWidgetUnlockDelegate;

@interface PXPhotosDetailsActionsUIWidget : NSObject <PXPhotosDataSourceChangeObserver, PXTileSource, PXTilingControllerTransitionDelegate, PXReusableObjectPoolDelegate, PXActionRowTileDelegate, PXActionPerformerDelegate, PXChangeObserver, PXPhotoLibraryUIChangeObserver, UIPopoverPresentationControllerDelegate, PXUIWidget> {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    BOOL _ensureTransition;
    struct { BOOL peopleFetchResult; BOOL actionManager; BOOL allowedActionTypes; BOOL performableActionTypes; BOOL rowHeight; BOOL layout; } _needsUpdateFlags;
}

@property (readonly, nonatomic) PXTilingController *_tilingController;
@property (readonly, nonatomic) id<PXTileAnimator> _tileAnimator;
@property (readonly, nonatomic) PXUIScrollViewController *_scrollViewController;
@property (readonly, nonatomic) NSMutableSet *_tilesInUse;
@property (readonly, nonatomic) PXReusableObjectPool *_tileReusePool;
@property (retain, nonatomic, setter=_setPhotosDataSource:) PXPhotosDataSource *_photosDataSource;
@property (retain, nonatomic, setter=_setPeopleFetchResult:) PHFetchResult *_peopleFetchResult;
@property (retain, nonatomic, setter=_setAssetCollectionActionManager:) PXPhotoKitAssetCollectionActionManager *_assetCollectionActionManager;
@property (retain, nonatomic, setter=_setAllowedActionTypes:) NSArray *_allowedActionTypes;
@property (retain, nonatomic, setter=_setPerformableActionTypes:) NSArray *_performableActionTypes;
@property (retain, nonatomic, setter=_setViewModel:) PXPhotosDetailsViewModel *_viewModel;
@property (readonly, nonatomic) PXPhotosDetailsActionsSpecManager *_specManager;
@property (readonly, nonatomic) PXActionRowTile *_measuringActionRowTile;
@property (nonatomic, setter=_setRowHeight:) double _rowHeight;
@property (retain, nonatomic, setter=_setActivePerformer:) PXActionPerformer *_activePerformer;
@property (nonatomic) struct CGPoint { double x; double y; } lastNormalizedTapPosition;
@property (nonatomic) BOOL allowRevealInMomentAction;
@property (nonatomic) BOOL allowCreateMemoryAction;
@property (nonatomic) BOOL allowInteralFileRadarAction;
@property (weak, nonatomic) id<PXActionPerformerDelegate> actionPerformerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PXOneUpPresentation *oneUpPresentation;
@property (readonly, nonatomic) BOOL cursorInteractionEnabled;
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

@end
