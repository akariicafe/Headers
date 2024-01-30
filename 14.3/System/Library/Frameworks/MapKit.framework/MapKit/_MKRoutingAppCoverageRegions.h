@class _MKMultiPolygonGeoRegion;

@interface _MKRoutingAppCoverageRegions : NSObject {
    _MKMultiPolygonGeoRegion *_regions;
}

- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (BOOL)containsCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;

@end
