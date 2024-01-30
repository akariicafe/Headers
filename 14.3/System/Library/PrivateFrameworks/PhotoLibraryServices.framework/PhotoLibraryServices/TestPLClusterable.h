@class NSString, NSDate;

@interface TestPLClusterable : NSObject <PLRegionsClusteringItem>

@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } pl_coordinate;
@property (readonly, nonatomic) double pl_gpsHorizontalAccuracy;
@property (readonly, nonatomic) NSDate *pl_date;
@property (readonly, nonatomic) NSString *pl_uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clusterableWithLatitude:(double)a0 longitude:(double)a1 time:(double)a2;

- (void).cxx_destruct;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 time:(double)a2;

@end
