@class GEOComposedRouteStep, GEOComposedRouteSegment;

@interface GEOComposedRouteSection : NSObject {
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _overlayBounds;
}

@property (readonly, nonatomic) unsigned int startPointIndex;
@property (readonly, nonatomic) unsigned int endPointIndex;
@property (readonly, nonatomic) unsigned int pointCount;
@property (readonly, nonatomic) struct { float x0; float x1; float x2; } *points;
@property (readonly, nonatomic) struct { struct { double x; double y; double z; } origin; struct { double width; double height; double depth; } size; } bounds;
@property (readonly, weak, nonatomic) GEOComposedRouteSegment *composedRouteSegment;
@property (readonly, weak, nonatomic) GEOComposedRouteStep *composedRouteStep;
@property (readonly, nonatomic) unsigned long long composedRouteSegmentIndex;
@property (readonly, nonatomic) unsigned long long finalStepIndex;
@property (readonly, nonatomic) double startDistance;
@property (nonatomic) double lengthScaleFactor;
@property (readonly, nonatomic) int transportType;

- (id)initWithCoordinates:(id)a0 segment:(id)a1 segmentIndex:(unsigned long long)a2 steps:(id)a3 startCoordinateIndex:(unsigned int)a4 coordinateCount:(unsigned int)a5 transportType:(int)a6 finalStepIndex:(unsigned long long)a7 fallbackStartCoordinate:(struct { double x0; double x1; })a8 fallbackEndCoordinate:(struct { double x0; double x1; })a9 startDistance:(double)a10 lengthScaleFactor:(double)a11;
- (id)initWithCoordinates:(id)a0 segment:(id)a1 segmentIndex:(unsigned long long)a2 steps:(id)a3 startCoordinateIndex:(unsigned int)a4 coordinateCount:(unsigned int)a5 bounds:(struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; })a6 transportType:(int)a7 finalStepIndex:(unsigned long long)a8 startDistance:(double)a9 lengthScaleFactor:(double)a10;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_MapsCarPlay_isEqual:(id)a0;
- (id)description;
- (BOOL)isTransfer;
- (void)_initialStepInSteps:(id)a0;
- (id)stringForPoints;
- (id)stringForCoordinates;

@end
