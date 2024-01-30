@class NSArray, NSDictionary;
@protocol PUDisplayAssetCollection;

@interface PUCameraTransientAssetsDataSource : PUAssetsDataSource

@property (readonly, nonatomic) id<PUDisplayAssetCollection> _transientAssetCollection;
@property (readonly, nonatomic) NSArray *_assetUUIDs;
@property (readonly, nonatomic) NSDictionary *_assetsByUUID;
@property (readonly, nonatomic) NSDictionary *_representativeAssetsByBurstIdentifier;

- (id)assetAtIndexPath:(id)a0;
- (id)assetCollectionAtIndexPath:(id)a0;
- (id)assetReferenceAtIndexPath:(id)a0;
- (id)indexPathForAssetReference:(id)a0;
- (id)indexPathForAssetCollection:(id)a0;
- (long long)numberOfSubItemsAtIndexPath:(id)a0;
- (id)startingAssetReference;
- (id)assetReferenceForAssetReference:(id)a0;
- (BOOL)isEmpty;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)convertIndexPath:(id)a0 fromAssetsDataSource:(id)a1;
- (id)initWithUUIDs:(id)a0 mapping:(id)a1 representativeMapping:(id)a2 inAssetCollection:(id)a3;
- (id)_uuidAtIndexPath:(id)a0;

@end
