@class NSNumber;

@interface MTRThermostatClusterThermostatScheduleTransition : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *transitionTime;
@property (copy, nonatomic) NSNumber *heatSetpoint;
@property (copy, nonatomic) NSNumber *coolSetpoint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
