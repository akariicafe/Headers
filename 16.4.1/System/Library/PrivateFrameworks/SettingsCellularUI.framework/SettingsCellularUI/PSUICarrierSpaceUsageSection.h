@class NSString, CTCarrierSpaceUsagePlanMetrics, NSMutableArray, CTCarrierSpaceUsageAccountMetrics;

@interface PSUICarrierSpaceUsageSection : NSObject

@property (retain) NSString *sharedPlanIdentifier;
@property (retain) CTCarrierSpaceUsagePlanMetrics *primaryMetrics;
@property (retain) CTCarrierSpaceUsageAccountMetrics *accountMetrics;
@property (retain) NSMutableArray *otherMetrics;
@property (retain) NSMutableArray *barCategories;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isSharedPlan;

@end
