@class NSString, NSMutableDictionary, MULRUCache;

@interface MUTimeExpirableLRUCache : NSObject <MULRUCacheDelegate> {
    NSMutableDictionary *_timestampsByCacheKeys;
    MULRUCache *_valuesByCacheKeys;
    double _timeToLiveInSeconds;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long maxSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (id)initWithMaxSize:(unsigned long long)a0 timeToLive:(double)a1;
- (void)lruCache:(id)a0 willEvictObject:(id)a1 forKey:(id)a2;
- (unsigned long long)numberOfTimestamps;
- (id)timestampForKey:(id)a0;

@end
