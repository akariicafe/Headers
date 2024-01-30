@class NSString, CLCircularRegion, NSDate, PHAssetCollection;

@interface CLSPPTimeLocationCluster : NSObject <CLSTimeLocationTuple>

@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) CLCircularRegion *region;
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
- (id)initWithAssetCollection:(id)a0 region:(id)a1;

@end
