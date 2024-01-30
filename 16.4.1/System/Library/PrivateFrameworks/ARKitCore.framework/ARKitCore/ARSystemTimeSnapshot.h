@interface ARSystemTimeSnapshot : NSObject

@property (readonly, nonatomic) double upTime;
@property (readonly, nonatomic) double upTimeIncludingSleep;
@property (readonly, nonatomic) double upTimeIncludingSleepAndDriftCorrection;

+ (id)timeSinceSnapshot:(id)a0;

- (id)init;
- (id)initWithUpTime:(double)a0 upTimeIncludingSleep:(double)a1 upTimeIncludingSleepAndDriftCorrection:(double)a2;
- (id)timeSinceSnapshot:(id)a0;

@end
