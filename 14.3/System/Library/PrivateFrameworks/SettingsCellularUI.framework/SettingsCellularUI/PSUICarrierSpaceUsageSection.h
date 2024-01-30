@class NSString, CTCarrierSpaceUsagePlanMetrics, NSMutableArray, CTCarrierSpaceUsageAccountMetrics;

@interface PSUICarrierSpaceUsageSection : NSObject

@property (retain) NSString *sharedPlanIdentifier;
@property (retain) CTCarrierSpaceUsagePlanMetrics *primaryMetrics;
@property (retain) CTCarrierSpaceUsageAccountMetrics *accountMetrics;
@property (retain) NSMutableArray *otherMetrics;
@property (retain) NSMutableArray *barCategories;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isSharedPlan;

@end
