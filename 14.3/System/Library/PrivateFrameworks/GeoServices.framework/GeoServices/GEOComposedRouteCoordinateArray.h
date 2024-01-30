@class NSArray;

@interface GEOComposedRouteCoordinateArray : NSObject <NSSecureCoding> {
    NSArray *_paths;
    BOOL _usesZilch;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL usesZilch;
@property (readonly, nonatomic) unsigned long long pathsCount;
@property (readonly, nonatomic) unsigned long long coordinateCount;

- (double)_length;
- (void)_buildZilchCoordinatesForPointData:(id)a0;
- (void)_buildBasicCoordinatesForPointData:(id)a0;
- (void)_buildPointLengthsWithMarkers:(id)a0;
- (struct PolylineCoordinate { unsigned int x0; float x1; })_canonicalRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (void)_calibratePointLengths:(double *)a0 startIndex:(unsigned long long)a1 endIndex:(unsigned long long)a2 lengthMarker:(id)a3;
- (id)initWithPointData:(id)a0 usesZilch:(BOOL)a1;
- (id)initWithPointData:(id)a0 lengthMarkers:(id)a1 usesZilch:(BOOL)a2;
- (void)buildPointLengthsWithSteps:(id)a0 assignDistanceToSteps:(BOOL)a1;
- (unsigned long long)coordinateCountForPathAtIndex:(unsigned long long)a0;
- (unsigned long long)_localCoordinateIndexForRouteIndex:(unsigned long long)a0;
- (unsigned long long)_pathIndexForRouteIndex:(unsigned long long)a0;
- (double)distanceFromStartToIndex:(unsigned long long)a0;
- (double)distanceFromStartToRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (double)distanceBetweenIndex:(unsigned long long)a0 andIndex:(unsigned long long)a1;
- (struct PolylineCoordinate { unsigned int x0; float x1; })routeCoordinateForDistanceBeforeEnd:(double)a0;
- (id)init;
- (void).cxx_destruct;
- (struct { double x0; double x1; double x2; })coordinateOnRouteAt:(unsigned long long)a0;
- (struct PolylineCoordinate { unsigned int x0; float x1; })routeCoordinateForDistanceAfterStart:(double)a0;
- (struct { double x0; double x1; double x2; })coordinateForRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (struct PolylineCoordinate { unsigned int x0; float x1; })routeCoordinateForDistance:(double)a0 afterRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1;
- (double)distanceBetweenRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 andRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1;
- (struct ControlPoint { int x0; struct GeoCoordinates { struct Longitude { unsigned int x0; } x0; struct Latitude { unsigned int x0; } x1; int x2; } x1; struct Angle { unsigned short x0; } x2; struct FormOfWay { int x0; } x3; struct FunctionalClass { int x0; } x4; int x5; })zilchControlPointAt:(unsigned long long)a0;
- (id)compressedZilchDataToEndOfPathFromIndex:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (double)distanceToEndFromIndex:(unsigned long long)a0;
- (unsigned long long)routeIndexForLocalIndex:(unsigned long long)a0 onPath:(unsigned long long)a1;
- (struct PolylineCoordinate { unsigned int x0; float x1; })routeCoordinateForDistance:(double)a0 beforeRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1;
- (double)distanceToEndFromRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (void)encodeWithCoder:(id)a0;

@end
