@class NSError;

@interface HKHRCardioFitnessAnalyticsResult : NSObject

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithStatus:(long long)a0 error:(id)a1;

@end
