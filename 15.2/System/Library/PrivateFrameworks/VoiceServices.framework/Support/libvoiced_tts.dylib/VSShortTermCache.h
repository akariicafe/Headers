@class NSCache, NSMutableDictionary;

@interface VSShortTermCache : NSObject

@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSMutableDictionary *cacheTimer;

+ (id)sharedInstance;

- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 timeToLive:(double)a2;
- (void)timeToLiveTimerFired:(id)a0;

@end
