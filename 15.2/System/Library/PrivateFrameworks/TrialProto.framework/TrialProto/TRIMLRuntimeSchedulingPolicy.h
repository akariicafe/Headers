@class TRIPBTimestamp;

@interface TRIMLRuntimeSchedulingPolicy : TRIPBMessage

@property (nonatomic) unsigned int maxEvaluations;
@property (nonatomic) BOOL hasMaxEvaluations;
@property (nonatomic) unsigned int periodicIntervalSeconds;
@property (nonatomic) BOOL hasPeriodicIntervalSeconds;
@property (retain, nonatomic) TRIPBTimestamp *startsAfter;
@property (nonatomic) BOOL hasStartsAfter;
@property (retain, nonatomic) TRIPBTimestamp *endsAt;
@property (nonatomic) BOOL hasEndsAt;
@property (nonatomic) int qos;
@property (nonatomic) BOOL hasQos;

+ (id)descriptor;

@end
