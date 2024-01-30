@class NSArray;

@interface GEOComposedRouteCoordinateArray : NSObject <NSSecureCoding> {
    NSArray *_paths;
    BOOL _usesZilch;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL usesZilch;
@property (readonly, nonatomic) unsigned long long pathsCount;
@property (readonly, nonatomic) unsigned long long coordinateCount;
@property (readonly, nonatomic) BOOL usesRoutingPathPoints;

- (double)_length;
- (void)_populateRoutingPathWithCoordinate:(void *)a0 pathIndex:(unsigned long long)a1 startIndex:(unsigned long long)a2 endIndex:(unsigned long long)a3 distanceFromStartOffset:(double)a4 supportPointsOnly:(BOOL)a5 convertEndpointsToSupportPoints:(BOOL)a6;
- (void)encodeWithCoder:(id)a0;
- (struct RoutingPathLeg { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<maps::path_codec::geo3::RoutingPathPoint> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *x0; } x0; } x5; })routingPathFromStart:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 toEnd:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 supportPointsOnly:(BOOL)a2 convertEndpointsToSupportPoints:(BOOL)a3;
- (id)compressedDataForRoutingPath:(const void *)a0;
- (struct RoutingPathLeg { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<maps::path_codec::geo3::RoutingPathPoint> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *x0; } x0; } x5; })routingPathWithSupportPointFromStart:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 toEnd:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 supportPointsOnly:(BOOL)a2;
- (void *)_addPointToRoutingPath:(void *)a0 coordinate:(struct { double x0; double x1; double x2; })a1 supportPoint:(id)a2 distanceFromStart:(double)a3;
- (id)routingPathDataFromStart:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 toEnd:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 supportPointsOnly:(BOOL)a2;
- (unsigned long long)routeIndexForLocalIndex:(unsigned long long)a0 onPath:(unsigned long long)a1;
- (id)description;
- (void)_buildZilchCoordinatesForPointData:(id)a0;
- (void)_buildPointLengthsWithMarkers:(id)a0;
- (id)initWithGeoRoutingPathsData:(id)a0;
- (void)_buildBasicCoordinatesForPointData:(id)a0;
- (id)initWithPointData:(id)a0 lengthMarkers:(id)a1 usesZilch:(BOOL)a2;
- (unsigned long long)coordinateCountForPathAtIndex:(unsigned long long)a0;
- (struct { double x0; double x1; double x2; })coordinateOnPath:(unsigned long long)a0 coordinateIndex:(unsigned long long)a1;
- (unsigned long long)_localCoordinateIndexForRouteIndex:(unsigned long long)a0;
- (unsigned long long)pathIndexForRouteIndex:(unsigned long long)a0;
- (struct PolylineCoordinate { unsigned int x0; float x1; })_routeCoordinateForOffset:(double)a0 fromRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1;
- (unsigned long long)pathIndexForRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (id)_supportPointsForRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a0 shouldEncompassRange:(BOOL)a1;
- (id)supportPointsForPathAtIndex:(unsigned long long)a0;
- (struct PolylineCoordinate { unsigned int x0; float x1; })_nearestSupportPointRouteCoordinateForRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 beforeCoordinate:(BOOL)a1;
- (unsigned long long)nearestSupportPointIndexForRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 beforeCoordinate:(BOOL)a1;
- (id)supportPointsEncompassingRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a0;
- (id)supportPointsWithinRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a0;
- (struct PolylineCoordinate { unsigned int x0; float x1; })nearestSupportPointBeforeRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (struct PolylineCoordinate { unsigned int x0; float x1; })nearestSupportPointAfterRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (struct { double x0; double x1; double x2; })coordinateOnRouteAt:(unsigned long long)a0;
- (struct PolylineCoordinate { unsigned int x0; float x1; })routeCoordinateForDistanceAfterStart:(double)a0;
- (struct { double x0; double x1; double x2; })coordinateForRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (struct PolylineCoordinate { unsigned int x0; float x1; })routeCoordinateForDistance:(double)a0 afterRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1;
- (double)distanceBetweenRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 andRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1;
- (struct ControlPoint { int x0; struct GeoCoordinates { struct Longitude { unsigned int x0; } x0; struct Latitude { unsigned int x0; } x1; int x2; } x1; struct Angle { unsigned short x0; } x2; struct FormOfWay { int x0; } x3; struct FunctionalClass { int x0; } x4; int x5; })zilchControlPointAt:(unsigned long long)a0;
- (id)compressedZilchDataToEndOfPathFromIndex:(unsigned long long)a0;
- (id)routingPathDataWithSupportPointFromStart:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 toEnd:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 supportPointsOnly:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (double)distanceFromStartToIndex:(unsigned long long)a0;
- (double)distanceToEndFromIndex:(unsigned long long)a0;
- (double)distanceBetweenIndex:(unsigned long long)a0 andIndex:(unsigned long long)a1;
- (double)distanceFromStartToRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (double)distanceToEndFromRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (struct PolylineCoordinate { unsigned int x0; float x1; })routeCoordinateForDistanceBeforeEnd:(double)a0;
- (struct PolylineCoordinate { unsigned int x0; float x1; })routeCoordinateForDistance:(double)a0 beforeRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1;

@end
