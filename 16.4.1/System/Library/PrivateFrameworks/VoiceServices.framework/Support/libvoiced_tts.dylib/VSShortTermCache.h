@class NSCache, NSMutableDictionary;

@interface VSShortTermCache : NSObject

@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSMutableDictionary *cacheTimer;

+ (id)sharedInstance;

- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1 timeToLive:(double)a2;
- (void)timeToLiveTimerFired:(id)a0;

@end
