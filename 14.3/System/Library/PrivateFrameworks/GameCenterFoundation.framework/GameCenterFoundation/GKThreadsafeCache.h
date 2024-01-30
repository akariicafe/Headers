@class GKLinkedList, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface GKThreadsafeCache : NSObject <GKCache>

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (retain, nonatomic) GKLinkedList *cacheList;
@property (retain, nonatomic) NSMutableDictionary *missingEntryQueues;
@property (nonatomic) unsigned long long maxCount;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithName:(id)a0 maxCount:(unsigned long long)a1;
- (id)objectForKey:(id)a0 withMissingHandler:(id /* block */)a1;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (id)internalObjectForKey:(id)a0;
- (void)internalSetObject:(id)a0 forKey:(id)a1;

@end
