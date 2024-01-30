@class NSMutableDictionary;

@interface IDSRateLimiter : NSObject

@property (nonatomic) long long limit;
@property (nonatomic) double timeLimit;
@property (retain, nonatomic) NSMutableDictionary *cacheMap;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (void)noteItem:(id)a0;
- (void)clearItem:(id)a0;
- (id)initWithLimit:(long long)a0 timeLimit:(double)a1;
- (BOOL)underLimitForItem:(id)a0;
- (void)cleanupExpiredItems;
- (id)description;
- (id)_unlockedDescription;
- (void)clearAllItems;
- (void).cxx_destruct;
- (double)timeToUnderLimit:(id)a0;

@end
