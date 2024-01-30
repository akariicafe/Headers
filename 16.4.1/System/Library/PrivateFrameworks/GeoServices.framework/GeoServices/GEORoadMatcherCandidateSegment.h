@class GEOMapFeatureRoad, GEOMapFeatureJunction;

@interface GEORoadMatcherCandidateSegment : NSObject

@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) GEOMapFeatureRoad *road;
@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } coordinateOnSegment;
@property (readonly, nonatomic) double distanceFromSegment;
@property (readonly, nonatomic) double segmentAngle;
@property (readonly, nonatomic) GEOMapFeatureJunction *junction;
@property (readonly, nonatomic) double distanceFromJunction;

- (void).cxx_destruct;
- (id)initWithCoordinate:(struct { double x0; double x1; double x2; })a0 angle:(double)a1 road:(id)a2 startCoordinate:(struct { double x0; double x1; double x2; })a3 endCoordinate:(struct { double x0; double x1; double x2; })a4;

@end
