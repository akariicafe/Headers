@interface LiveFSXattrCacheEntry : NSObject

@property (readonly) void *xattrBytes;
@property (readonly) unsigned long long xattrSize;
@property (readonly) struct timespec { long long tv_sec; long long tv_nsec; } addedTime;
@property struct timespec { long long tv_sec; long long tv_nsec; } lastUsedTime;

- (void)dealloc;
- (id)initWithData:(id)a0 andTime:(const struct timespec { long long x0; long long x1; } *)a1;
- (BOOL)isExpiredAsOf:(const struct timespec { long long x0; long long x1; } *)a0 forLifetime:(unsigned long long)a1;

@end
