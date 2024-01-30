@class PXDisplayTitleInfo, PHFetchResult, PXAssetReference, PXAssetsDataSourceManager, PXAssetCollectionReference;
@protocol UIDragSession, UIDropSession;

@interface PXAssetCollectionActionManager : PXActionManager {
    PXAssetCollectionReference *_initialAssetCollectionReference;
    PXDisplayTitleInfo *_internalDisplayTitleInfo;
}

@property (retain, nonatomic) PHFetchResult *people;
@property (retain, nonatomic) PXAssetReference *dropTargetAssetReference;
@property (weak, nonatomic) id<UIDragSession> dragSession;
@property (weak, nonatomic) id<UIDropSession> dropSession;
@property (retain, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager;
@property (retain, nonatomic) PHFetchResult *assetsFetchResult;
@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference;
@property (readonly, nonatomic) PXDisplayTitleInfo *displayTitleInfo;

- (BOOL)canPerformActionType:(id)a0 assetCollectionReference:(id)a1;
- (id)actionPerformerForActionType:(id)a0;
- (id)actionPerformerForActionType:(id)a0 assetCollectionReference:(id)a1;
- (id)systemImageNameForActionType:(id)a0 assetCollectionReference:(id)a1;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1 assetCollectionReference:(id)a2;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1;
- (id)init;
- (id)initWithAssetCollectionReference:(id)a0 displayTitleInfo:(id)a1;
- (void).cxx_destruct;
- (BOOL)canPerformActionType:(id)a0;
- (id)displayTitleInfoForAssetCollection:(id)a0;
- (id)initWithAssetCollection:(id)a0 displayTitleInfo:(id)a1;
- (id)systemImageNameForActionType:(id)a0;

@end
