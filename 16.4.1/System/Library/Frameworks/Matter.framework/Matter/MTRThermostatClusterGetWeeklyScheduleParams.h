@class NSNumber;

@interface MTRThermostatClusterGetWeeklyScheduleParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *daysToReturn;
@property (copy, nonatomic) NSNumber *modeToReturn;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
