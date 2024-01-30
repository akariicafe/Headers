@class NSString;

@interface GEOComposedRouteTransitTripSection : GEOComposedRouteSection <GEOComposedRouteTransitSection> {
    struct { double latitude; double longitude; } _fromNodeLocation;
    struct { double latitude; double longitude; } _toNodeLocation;
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _originalBounds;
}

@property (readonly, nonatomic) struct Color<float, 4, geo::ColorSpace::Linear> { struct Matrix<float, 4, 1> { float _e[4]; } _backing; } lineColor;
@property (readonly, nonatomic) struct { unsigned long long stopID; unsigned long long hallID; unsigned long long stationID; } fromNodeID;
@property (readonly, nonatomic) struct { unsigned long long stopID; unsigned long long hallID; unsigned long long stationID; } toNodeID;
@property (readonly, nonatomic) unsigned long long lineID;
@property (readonly, nonatomic) BOOL isTransfer;
@property (readonly, nonatomic) int toNodeSignificance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (BOOL)_MapsCarPlay_isEqual:(id)a0;
- (id)_hallForStop:(id)a0 withDecoderData:(id)a1;
- (void)_initSupportWithDecoderData:(id)a0 step:(id)a1 toNodeSignificance:(int)a2 transitLineColor:(id)a3;
- (id)_stationForHall:(id)a0 withDecoderData:(id)a1;
- (id)initWithCoordinates:(id)a0 segment:(id)a1 segmentIndex:(unsigned long long)a2 steps:(id)a3 startCoordinateIndex:(unsigned int)a4 coordinateCount:(unsigned int)a5 stepIndex:(unsigned long long)a6 toNodeSignificance:(int)a7 transitLineColor:(id)a8 startDistance:(double)a9 lengthScaleFactor:(double)a10 decoderData:(id)a11;
- (id)initWithCoordinates:(id)a0 segment:(id)a1 segmentIndex:(unsigned long long)a2 steps:(id)a3 startCoordinateIndex:(unsigned int)a4 coordinateCount:(unsigned int)a5 stepIndex:(unsigned long long)a6 toNodeSignificance:(int)a7 transitLineColor:(id)a8 startDistance:(double)a9 lengthScaleFactor:(double)a10 fallbackStartCoordinate:(struct { double x0; double x1; })a11 fallbackEndCoordinate:(struct { double x0; double x1; })a12;

@end
