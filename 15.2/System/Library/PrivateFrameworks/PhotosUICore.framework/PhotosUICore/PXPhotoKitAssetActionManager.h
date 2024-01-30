@class NSString, PHPerson, NSMutableDictionary, PXPhotosDataSource, PXPhotoKitAssetsDataSourceManager, PXPhotoKitImportStatusManager, NSMapTable, PXAssetActionPerformer;
@protocol PXRadarConfigurationProvider;

@interface PXPhotoKitAssetActionManager : PXAssetActionManager <PXActivityActionDelegate>

@property (readonly, nonatomic) NSMutableDictionary *_performerClassByType;
@property (readonly, nonatomic) NSMapTable *_actionTypeByBarButtonItem;
@property (readonly, nonatomic) PXPhotosDataSource *_dataSourceSnapshot;
@property (retain, nonatomic, setter=_setActivePerformer:) PXAssetActionPerformer *_activePerformer;
@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) PXPhotoKitImportStatusManager *importStatusManager;
@property (copy, nonatomic) NSString *importSessionID;
@property (retain, nonatomic) PHPerson *person;
@property (retain, nonatomic) id<PXRadarConfigurationProvider> radarConfigurationProvider;
@property (readonly, nonatomic) unsigned long long presentationSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (void)_handleBarButtonItem:(id)a0;
- (id)actionPerformerForActionType:(id)a0;
- (id)barButtonItemForActionType:(id)a0;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1;
- (id)alertActionForActionType:(id)a0;
- (void)_handleActionPerformerComplete:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)performActivity:(id)a0;
- (BOOL)canPerformActionType:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsActionType:(id)a0;
- (id)initWithSelectionManager:(id)a0;
- (id)standardActionForActionType:(id)a0;
- (void)_handlePreviewAction:(id)a0 actionType:(id)a1;
- (void)executeActionForActionType:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)previewActionForActionType:(id)a0 image:(id)a1;
- (id)activityForActionType:(id)a0;
- (BOOL)shouldEnableActionType:(id)a0 onAsset:(id)a1;
- (void)setAdditionalPropertiesFromActionManager:(id)a0;
- (void)registerPerformerClass:(Class)a0 forType:(id)a1;
- (id)systemImageNameForActionType:(id)a0;
- (id)initWithSelectedObjectReference:(id)a0 dataSourceManager:(id)a1;
- (BOOL)canPerformAssetVariationActions;
- (id)_selectionSnapshotForPerformerClass:(Class)a0 applySubsetIfNeeded:(BOOL)a1;

@end
