@class NSMutableDictionary;

@interface IDSRateLimiter : NSObject

@property (nonatomic) long long limit;
@property (nonatomic) double timeLimit;
@property (retain, nonatomic) NSMutableDictionary *cacheMap;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (double)timeToUnderLimit:(id)a0;
- (void).cxx_destruct;
- (void)noteItem:(id)a0;
- (id)initWithLimit:(long long)a0 timeLimit:(double)a1;
- (id)_unlockedDescription;
- (BOOL)underLimitForItem:(id)a0;
- (id)description;
- (void)clearItem:(id)a0;
- (void)cleanupExpiredItems;

@end
