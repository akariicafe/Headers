@class PXAssetsDataSource, NSMapTable, NSDictionary, NSString, PXAssetCollectionActionPerformer, PHFetchResult, PXAssetReference;
@protocol UIDragSession, UIDropSession;

@interface PXPhotoKitAssetCollectionActionManager : PXAssetCollectionActionManager <PXActivityActionDelegate, PXPhotoKitAssetCollectionActionPerformerInput>

@property (readonly, nonatomic) NSMapTable *_actionTypeByBarButtonItem;
@property (readonly, nonatomic) NSDictionary *_performerClassesByType;
@property (retain, nonatomic, setter=_setActivePerformer:) PXAssetCollectionActionPerformer *_activePerformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PHFetchResult *people;
@property (readonly, nonatomic) PXAssetReference *dropTargetAssetReference;
@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource;
@property (readonly, nonatomic) PHFetchResult *assetsFetchResult;
@property (readonly, nonatomic) id<UIDropSession> dropSession;
@property (readonly, nonatomic) id<UIDragSession> dragSession;

+ (id)actionManagerWithDataSourceManager:(id)a0;

- (BOOL)canPerformActionType:(id)a0 assetCollectionReference:(id)a1;
- (void)performActivity:(id)a0;
- (id)actionPerformerForActionType:(id)a0 assetCollectionReference:(id)a1;
- (id)standardActionForActionType:(id)a0;
- (id)alertActionForActionType:(id)a0;
- (Class)_firstPossiblePerformerForActionType:(id)a0 assetCollectionReference:(id)a1 requireThatPerformerCanPerformAction:(BOOL)a2;
- (void)_executeActionTypeIfPossible:(id)a0;
- (id)systemImageNameForActionType:(id)a0 assetCollectionReference:(id)a1;
- (BOOL)supportsActionType:(id)a0;
- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (id)activityForActionType:(id)a0;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1 assetCollectionReference:(id)a2;
- (id)barButtonItemForActionType:(id)a0;
- (Class)_firstPossiblePerformerForActionType:(id)a0 assetCollectionReference:(id)a1;
- (id)initWithAssetCollectionReference:(id)a0 displayTitleInfo:(id)a1;
- (void)_handleBarButtonItem:(id)a0;
- (void)_handleActionPerformerComplete:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void).cxx_destruct;

@end
