@class NSSet, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, BLTObjectCacheDelegate;

@interface BLTObjectCache : NSObject {
    NSMutableSet *_keys;
    NSMutableDictionary *_cachedObjects;
    NSObject<OS_dispatch_queue> *_queue;
    double _maxItemAge;
    long long _maxItemCount;
    id<BLTObjectCacheDelegate> _delegate;
}

@property (readonly, nonatomic) NSSet *keys;

- (void)removeObjectForKey:(id)a0;
- (id)_cachedObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;
- (id)initWithDelegate:(id)a0 withMaxItemCount:(long long)a1;
- (id)initWithDelegate:(id)a0 withMaxItemCount:(long long)a1 andMaxItemAge:(double)a2;
- (void)_updateCachedObjectIfNecessary:(id)a0 withKey:(id)a1;
- (void)_addKeyToSet:(id)a0;
- (BOOL)_isObjectWithKeyCached:(id)a0;
- (BOOL)_doesObjectWithKeyExist:(id)a0;
- (void)_addObjectToCache:(id)a0 withKey:(id)a1;
- (void)_pruneCache;
- (void)_deleteObjectFromCacheWithKey:(id)a0;
- (id)initWithDelegate:(id)a0 withMaxItemAge:(double)a1;
- (void)storeObject:(id)a0 withKey:(id)a1;

@end
