@interface HDDatabaseCoalescedWritePoolQuota : NSObject <NSCopying> {
    long long _availableQuotaAfterLastWrite;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) long long maximumWriteQuota;
@property (readonly, nonatomic) double writeQuotaRefillInterval;
@property (readonly, nonatomic) double minimumWriteInterval;
@property (readonly, nonatomic) double lastWrite;
@property (readonly, nonatomic) long long availableWriteQuota;
@property (readonly, nonatomic) double timeUntilNextAvailableWrite;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAvailableQuota:(long long)a0 maximumQuota:(long long)a1 refillInterval:(double)a2 minimumWriteInterval:(double)a3 lastWrite:(double)a4;

@end
