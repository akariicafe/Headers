@class NSArray, ASDAppUsageStats;

@interface ASDAppUsageStore : NSObject

@property (readonly, nonatomic) ASDAppUsageStats *leastUsageCount;
@property (readonly, nonatomic) ASDAppUsageStats *leastUsageTime;
@property (readonly, nonatomic) ASDAppUsageStats *topUsageCount;
@property (readonly, nonatomic) ASDAppUsageStats *topUsageTime;
@property (readonly, nonatomic) NSArray *usageStats;
@property (nonatomic) BOOL verbose;

+ (id)allUsageForStreams:(unsigned long long)a0 fromDate:(id)a1 endDate:(id)a2 error:(id *)a3;

- (id)_sortDescriptors;
- (void).cxx_destruct;
- (void)_calculateUsageForDurationInDays:(double)a0 bundleIDs:(id)a1 includeExtensionUsage:(BOOL)a2;
- (id)_calculateRawUsageFromDate:(id)a0 endDate:(id)a1 stats:(id)a2 streams:(unsigned long long)a3;
- (id)_calcluateUsageFromDate:(id)a0 endDate:(id)a1 bundleIDs:(id)a2 includeExtensionUsage:(BOOL)a3;
- (id)_calculateUsageFromDate:(id)a0 endDate:(id)a1 stats:(id)a2 includeExtensionUsage:(BOOL)a3;
- (id)initWithDurationInDays:(double)a0 bundleIDs:(id)a1;
- (id)initWithDurationInDays:(double)a0 bundleIDs:(id)a1 includeExtensionUsage:(BOOL)a2;
- (id)calcluateUsageFromDate:(id)a0 endDate:(id)a1 appMetadata:(id)a2 streams:(unsigned long long)a3;
- (id)calcluateUsageFromDate:(id)a0 endDate:(id)a1 bundleIDs:(id)a2;

@end
