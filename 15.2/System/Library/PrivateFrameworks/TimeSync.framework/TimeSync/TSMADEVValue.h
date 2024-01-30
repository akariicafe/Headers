@interface TSMADEVValue : NSObject

@property (readonly, nonatomic) double observationInterval;
@property (readonly, nonatomic) double madev;

- (id)description;
- (id)initWithObservationInterval:(double)a0 andMADEV:(double)a1;

@end
