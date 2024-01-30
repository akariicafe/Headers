@interface TSRMSTIEValue : NSObject

@property (readonly, nonatomic) double observationInterval;
@property (readonly, nonatomic) double rmstie;

- (id)description;
- (id)initWithObservationInterval:(double)a0 andRMSTIE:(double)a1;

@end
