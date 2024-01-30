@class NSMutableDictionary, NSHashTable, NSMutableSet, NSMutableArray;

@interface PUReviewDataSource : NSObject

@property (readonly, nonatomic) NSHashTable *_observers;
@property (readonly, nonatomic) NSMutableArray *_assetIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *_assetsByIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *_representativeAssetsByBurstIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *_enqueuedBurstAssetIdentifiersByBurstIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *_enqueuedBurstAssetsByAssetIdentifier;
@property (nonatomic, setter=_setNestedPerformChanges:) long long _nestedPerformChanges;
@property (readonly, nonatomic) NSMutableSet *_updatedAssetIdentifiers;

- (void)registerChangeObserver:(id)a0;
- (void)unregisterChangeObserver:(id)a0;
- (id)orderedIdentifiers;
- (id)assetsByIdentifier;
- (id)init;
- (void)insertAssets:(id)a0;
- (id)existingAssetForIdentifier:(id)a0;
- (id)existingRepresentativeAssetForBurstIdentifier:(id)a0;
- (void)replaceAsset:(id)a0;
- (void)removeAssetWithIdentifier:(id)a0;
- (void)removeRepresentativeAssetForBurstIdentifier:(id)a0;
- (void)enqueuePendingBurstAsset:(id)a0;
- (void)processPendingBurstAssets;
- (void).cxx_destruct;
- (void)performChanges:(id /* block */)a0;
- (id)description;
- (void)insertAsset:(id)a0;
- (void)removeAllAssets;

@end
