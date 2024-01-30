@class NSError, HKSPSleepEventTimelineResults;

@interface HDSPSleepScheduleModelValidationResult : NSObject

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) HKSPSleepEventTimelineResults *timelineResults;

+ (id)emptyFailureWithError:(id)a0;

- (id)initWithSuccess:(BOOL)a0 timelineResults:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
