@class NSCache, NSMutableDictionary;

@interface VSShortTermCache : NSObject

@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSMutableDictionary *cacheTimer;

+ (id)sharedInstance;

- (id)objectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 timeToLive:(double)a2;
- (void)timeToLiveTimerFired:(id)a0;

@end
