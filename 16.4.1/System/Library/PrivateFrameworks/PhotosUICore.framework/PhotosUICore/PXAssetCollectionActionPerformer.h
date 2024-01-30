@class PXDisplayTitleInfo, PHFetchResult, PXAssetReference, PXAssetsDataSource, PXAssetCollectionReference;
@protocol UIDragSession, UIDropSession, PXDisplayAssetCollection;

@interface PXAssetCollectionActionPerformer : PXActionPerformer

@property (retain, nonatomic) PHFetchResult *people;
@property (retain, nonatomic) PXAssetReference *dropTargetAssetReference;
@property (retain, nonatomic) id<UIDragSession> dragSession;
@property (retain, nonatomic) id<UIDropSession> dropSession;
@property (retain, nonatomic) PXAssetsDataSource *assetsDataSource;
@property (retain, nonatomic) PHFetchResult *assetsFetchResult;
@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, nonatomic) PXDisplayTitleInfo *displayTitleInfo;

- (void).cxx_destruct;
- (id)initWithActionType:(id)a0;
- (id)initWithActionType:(id)a0 assetCollectionReference:(id)a1 displayTitleInfo:(id)a2;

@end
