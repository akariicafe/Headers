@class CKDClientContext, NSMutableOrderedSet;

@interface CKDAssetCacheEvictionInfo : NSObject

@property BOOL forced;
@property BOOL evictNow;
@property BOOL clearRegisteredItems;
@property (retain, nonatomic) CKDClientContext *clientContext;
@property (retain, nonatomic) NSMutableOrderedSet *itemIDsToUnregister;
@property (retain, nonatomic) NSMutableOrderedSet *assetHandleItemIDsToDelete;

- (void).cxx_destruct;
- (id)initWithClientContext:(id)a0 forced:(BOOL)a1 evictNow:(BOOL)a2;

@end
