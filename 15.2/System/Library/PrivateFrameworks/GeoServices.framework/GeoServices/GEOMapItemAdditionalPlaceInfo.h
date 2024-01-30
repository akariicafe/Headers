@class NSString, GEOMapRegion, GEOPlace;
@protocol GEOMapItem;

@interface GEOMapItemAdditionalPlaceInfo : NSObject {
    GEOPlace *_place;
}

@property (readonly, nonatomic) id<GEOMapItem> mapItem;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int placeType;
@property (readonly, nonatomic) double areaInMeters;
@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;

- (id)initWithMapItem:(id)a0;
- (id)initWithName:(id)a0 placeType:(int)a1 areaInMeters:(double)a2;
- (void).cxx_destruct;
- (id)initWithPlace:(id)a0;

@end
