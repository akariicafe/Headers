@class NSString, NSMutableDictionary, GKLinkedList;

@interface GKCache : NSObject <GKCache>

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (retain, nonatomic) GKLinkedList *cacheList;
@property (nonatomic) unsigned long long maxCount;
@property (nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithMaxCount:(unsigned long long)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;

@end
