@class NSDictionary, NSArray;
@protocol PUDisplayAssetCollection;

@interface PUReviewAssetsDataSource : PUAssetsDataSource

@property (readonly, nonatomic) id<PUDisplayAssetCollection> _reviewAssetCollection;
@property (readonly, nonatomic) NSDictionary *_assetsByIdentifier;
@property (readonly, nonatomic) NSArray *_assetIdentifiers;

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
- (id)initWithAssetsByIdentifier:(id)a0 usingOrdering:(id)a1 inAssetCollection:(id)a2;
- (id)indexPathForAssetWithIdentifier:(id)a0;
- (id)_identifierAtIndexPath:(id)a0;

@end
