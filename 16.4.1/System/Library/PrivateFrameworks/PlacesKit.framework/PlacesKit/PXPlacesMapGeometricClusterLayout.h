@interface PXPlacesMapGeometricClusterLayout : PXPlacesMapLayout

@property (nonatomic) double clusteringDistance;

- (id)init;
- (id)_clusterGeotaggables:(id)a0 forViewPort:(id)a1;
- (id)_findClusterOverlappingGeotaggable:(id)a0 fromClusters:(id)a1 forViewPort:(id)a2;
- (BOOL)_shapeAtCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 overlapsShapeAtCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 forViewPort:(id)a2;
- (id)layoutForViewPort:(id)a0 andDataSourceChange:(id)a1;

@end
