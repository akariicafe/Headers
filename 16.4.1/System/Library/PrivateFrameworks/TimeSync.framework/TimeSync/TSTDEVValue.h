@interface TSTDEVValue : NSObject

@property (readonly, nonatomic) double observationInterval;
@property (readonly, nonatomic) double tdev;

- (id)description;
- (id)initWithObservationInterval:(double)a0 andTDEV:(double)a1;

@end
