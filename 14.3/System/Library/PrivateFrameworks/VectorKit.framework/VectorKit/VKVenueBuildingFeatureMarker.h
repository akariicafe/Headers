@class NSArray, NSDictionary;

@interface VKVenueBuildingFeatureMarker : VKFeatureMarker {
    BOOL _localize;
}

@property (readonly, nonatomic) unsigned long long buildingId;
@property (readonly, nonatomic) unsigned long long businessId;
@property (readonly, nonatomic) NSArray *floorOrdinals;
@property (readonly, nonatomic) NSDictionary *shortFloorNames;
@property (readonly, nonatomic) NSDictionary *floorNames;

- (id)initWithVenueBuilding:(const struct VenueBuilding { struct vector<md::VenueLevel, std::__1::allocator<md::VenueLevel> > { struct VenueLevel *x0; struct VenueLevel *x1; struct __compressed_pair<md::VenueLevel *, std::__1::allocator<md::VenueLevel> > { struct VenueLevel *x0; } x2; } x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; short x5; struct Matrix<double, 2, 1> { double x0[2]; } x6; struct ConvexHull2<double> { struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> *x0; struct Matrix<double, 2, 1> *x1; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> *x0; } x2; } x0; } x7; } *)a0 localize:(BOOL)a1;
- (struct { double x0; double x1; })nearestFramingPositionToLocation:(struct { double x0; double x1; })a0;
- (const struct shared_ptr<md::VenueBuildingFeatureMarker> { struct VenueBuildingFeatureMarker *x0; struct __shared_weak_count *x1; } *)venueBuildingFeatureMarker;

@end
