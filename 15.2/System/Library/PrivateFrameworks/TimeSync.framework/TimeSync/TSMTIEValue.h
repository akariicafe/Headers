@interface TSMTIEValue : NSObject

@property (readonly, nonatomic) double observationInterval;
@property (readonly, nonatomic) double mtie;

- (id)description;
- (id)initWithObservationInterval:(double)a0 andMTIE:(double)a1;

@end
