@class NSArray, NSString, NSDate, PGGraphAddressNode;

@interface PGConsolidatedAddress : NSObject <CLSTimeLocationTuple>

@property (readonly, nonatomic) PGGraphAddressNode *addressNode;
@property (readonly, nonatomic) NSArray *addressEdgesSortedByTime;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } centerCoordinates;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSString *timeLocationIdentifier;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinates;
@property (readonly, nonatomic) NSDate *expandedStartDate;
@property (readonly, nonatomic) NSDate *expandedEndDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAddressNode:(id)a0 addressEdgesSortedByTime:(id)a1 centerCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; })a2;

@end
