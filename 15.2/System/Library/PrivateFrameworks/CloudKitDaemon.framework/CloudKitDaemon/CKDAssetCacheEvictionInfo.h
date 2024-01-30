@class NSMutableOrderedSet, CKDContainer;

@interface CKDAssetCacheEvictionInfo : NSObject

@property BOOL forced;
@property BOOL evictNow;
@property BOOL clearRegisteredItems;
@property (weak, nonatomic) CKDContainer *container;
@property (retain, nonatomic) NSMutableOrderedSet *itemIDsToUnregister;
@property (retain, nonatomic) NSMutableOrderedSet *assetHandleItemIDsToDelete;

- (void).cxx_destruct;
- (id)initWithContainer:(id)a0 forced:(BOOL)a1 evictNow:(BOOL)a2;

@end
