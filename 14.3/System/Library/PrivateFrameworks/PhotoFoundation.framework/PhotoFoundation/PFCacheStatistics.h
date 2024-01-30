@interface PFCacheStatistics : NSObject

@property (readonly) unsigned long long hits;
@property (readonly) unsigned long long misses;
@property (readonly) unsigned long long evictions;

- (void)recordHit;
- (void)recordMiss;
- (void)recordEvictions:(unsigned long long)a0;
- (void)accumulate:(id)a0;
- (id)description;

@end
