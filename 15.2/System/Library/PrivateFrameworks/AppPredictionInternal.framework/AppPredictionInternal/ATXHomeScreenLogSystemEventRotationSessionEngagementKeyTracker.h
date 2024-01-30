@class NSString;

@interface ATXHomeScreenLogSystemEventRotationSessionEngagementKeyTracker : NSObject

@property (readonly, nonatomic) NSString *statusAggregationKey;
@property (readonly, nonatomic) NSString *proactiveStatusAggregationKey;
@property (readonly, nonatomic) NSString *proactiveStatusBooleanKey;
@property (readonly, nonatomic) NSString *userScrollStatusBooleanKey;
@property (readonly, nonatomic) NSString *userScrollFinalOutcomeKey;

+ (id)keyTrackerForRotationSessionStackEngagementStatus:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithStatusAggregationKey:(id)a0 proactiveStatusAggregationKey:(id)a1 proactiveStatusBooleanKey:(id)a2 userScrollStatusBooleanKey:(id)a3 userScrollFinalOutcomeKey:(id)a4;

@end
