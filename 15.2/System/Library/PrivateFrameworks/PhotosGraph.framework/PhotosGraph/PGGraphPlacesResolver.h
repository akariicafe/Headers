@interface PGGraphPlacesResolver : NSObject

+ (id)resolvePlacesForMomentNode:(id)a0 feeder:(id)a1;
+ (id)poiStringFromSpatialLookupCategory:(long long)a0;
+ (id)resolvedPlaceForRegion:(id)a0 withPlaceItems:(id)a1;
+ (id)_clusteredRegionsFromFeeder:(id)a0;
+ (id)_businessItemsAtCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 inCache:(id)a1;

@end
