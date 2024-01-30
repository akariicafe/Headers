@class NSArray, ASDAppUsageStats;

@interface ASDAppUsageStore : NSObject

@property (readonly, nonatomic) ASDAppUsageStats *leastUsageCount;
@property (readonly, nonatomic) ASDAppUsageStats *leastUsageTime;
@property (readonly, nonatomic) ASDAppUsageStats *topUsageCount;
@property (readonly, nonatomic) ASDAppUsageStats *topUsageTime;
@property (readonly, nonatomic) NSArray *usageStats;
@property (nonatomic) BOOL verbose;

+ (id)allUsageForStreams:(unsigned long long)a0 fromDate:(id)a1 endDate:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)calcluateUsageFromDate:(id)a0 endDate:(id)a1 appMetadata:(id)a2 streams:(unsigned long long)a3;
- (id)calcluateUsageFromDate:(id)a0 endDate:(id)a1 bundleIDs:(id)a2;
- (id)initWithDurationInDays:(double)a0 bundleIDs:(id)a1;
- (id)initWithDurationInDays:(double)a0 bundleIDs:(id)a1 includeExtensionUsage:(BOOL)a2;

@end
