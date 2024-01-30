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
- (void)removeAllAssets;
- (void)performChanges:(id /* block */)a0;
- (void)removeRepresentativeAssetForBurstIdentifier:(id)a0;
- (id)existingRepresentativeAssetForBurstIdentifier:(id)a0;
- (void)insertAsset:(id)a0;
- (void)processPendingBurstAssets;
- (void)removeAssetWithIdentifier:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)orderedIdentifiers;
- (id)assetsByIdentifier;
- (void)enqueuePendingBurstAsset:(id)a0;
- (id)existingAssetForIdentifier:(id)a0;
- (void)insertAsset:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertAssets:(id)a0;
- (void)replaceAsset:(id)a0;

@end
