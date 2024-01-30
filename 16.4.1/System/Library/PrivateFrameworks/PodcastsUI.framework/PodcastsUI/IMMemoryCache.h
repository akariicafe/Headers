@class NSMutableDictionary, NSString, NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IMMemoryCache : NSObject

@property (retain, nonatomic) NSMutableArray *itemsArray;
@property (retain, nonatomic) NSMutableDictionary *items;
@property (nonatomic) unsigned long long totalCost;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (nonatomic) double lastCheckTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) id delegate;
@property (nonatomic) BOOL evictsItemsWithDiscardedContent;
@property (nonatomic) unsigned long long totalCostLimit;
@property (nonatomic) unsigned long long countLimit;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)_removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (id)init;
- (id)description;
- (id)allKeys;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (void)_addItem:(id)a0 forKey:(id)a1;
- (void)_checkLimits;
- (void)_checkLimitsAndEvictObjects;
- (BOOL)_shouldRemoveIndex:(unsigned long long)a0;
- (void)checkLimitsAndEvictObjects;
- (unsigned long long)costForObjectWithKey:(id)a0;
- (long long)numberOfCachedItems;
- (void)removeObjectsForKeyWithPrefix:(id)a0;

@end
