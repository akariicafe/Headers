@class NSArray, GEOMapRegion, GEOPOICategoryFilter;

@interface GEOSpatialPlaceLookupParameters : NSObject

@property (readonly, nonatomic) struct { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) GEOPOICategoryFilter *poiCategoryFilter;
@property (readonly, nonatomic) int maxResultCount;

- (id)initWithCoordinate:(struct { double x0; double x1; })a0 radius:(double)a1 categories:(id)a2 maxResultCount:(int)a3;
- (id)initWithMapRegion:(id)a0 poiCategoryFilter:(id)a1;
- (id)initWithCoordinate:(struct { double x0; double x1; })a0 radius:(double)a1 poiCategoryFilter:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoordinate:(struct { double x0; double x1; })a0 radius:(double)a1 categories:(id)a2;

@end
