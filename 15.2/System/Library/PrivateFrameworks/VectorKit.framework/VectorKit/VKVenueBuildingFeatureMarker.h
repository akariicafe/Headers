@class NSArray, NSDictionary;

@interface VKVenueBuildingFeatureMarker : VKMarker {
    BOOL _localize;
}

@property (readonly, nonatomic) unsigned long long buildingId;
@property (readonly, nonatomic) unsigned long long businessId;
@property (readonly, nonatomic) NSArray *floorOrdinals;
@property (readonly, nonatomic) NSDictionary *shortFloorNames;
@property (readonly, nonatomic) NSDictionary *floorNames;

- (const void *)venueBuildingFeatureMarker;
- (struct { double x0; double x1; })nearestFramingPositionToLocation:(struct { double x0; double x1; })a0;
- (id)initWithVenueBuilding:(const void *)a0 localize:(BOOL)a1;

@end
