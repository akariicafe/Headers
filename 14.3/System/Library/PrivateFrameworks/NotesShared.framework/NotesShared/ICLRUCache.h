@class NSArray, NSMapTable, NSMutableArray;
@protocol ICLRUCacheDelegate;

@interface ICLRUCache : NSObject {
    NSMapTable *mData;
    NSMutableArray *mOrderedKeys;
}

@property (readonly, nonatomic) unsigned long long maxSize;
@property (readonly, nonatomic) NSArray *allKeys;
@property (weak, nonatomic) id<ICLRUCacheDelegate> delegate;

+ (id)cacheCollection;
+ (void)purgeAllCaches;

- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithMaxSize:(unsigned long long)a0;
- (void)removeAllObjects;
- (void)p_removeOldestObject;
- (void)removeObjectForKey:(id)a0;

@end
