@class NSString, CLLocation;

@interface ARLocationEstimationData : NSObject <ARResultData, ARDaemonSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double heading;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; })a0 altitude:(double)a1 heading:(double)a2;
- (id)initWithLocation:(id)a0 heading:(double)a1;

@end
