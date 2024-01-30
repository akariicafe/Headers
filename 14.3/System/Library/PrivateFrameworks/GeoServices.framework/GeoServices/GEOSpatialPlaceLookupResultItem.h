@class NSArray, GEOMapRegion;

@interface GEOSpatialPlaceLookupResultItem : NSObject

@property (readonly, nonatomic) NSArray *mapItems;
@property (readonly, nonatomic) GEOMapRegion *boundingRegion;

- (void).cxx_destruct;
- (id)initWithMapItems:(id)a0 boundingRegion:(id)a1;

@end
