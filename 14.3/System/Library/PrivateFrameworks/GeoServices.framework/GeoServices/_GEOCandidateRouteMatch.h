@interface _GEOCandidateRouteMatch : NSObject

@property (nonatomic) BOOL isGoodMatch;
@property (nonatomic) double score;
@property (nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } routeCoordinate;
@property (nonatomic) struct { double latitude; double longitude; } locationCoordinate;
@property (nonatomic) unsigned long long stepIndex;
@property (nonatomic) double distanceFromRoute;
@property (nonatomic) double maxDistance;
@property (nonatomic) double distanceMatchScore;
@property (nonatomic) double distanceWeight;
@property (nonatomic) double courseDelta;
@property (nonatomic) double maxCourseDelta;
@property (nonatomic) double courseMatchScore;
@property (nonatomic) double courseWeight;
@property (nonatomic) double distanceAlongRouteFromPreviousMatch;

- (id)description;
- (id).cxx_construct;
- (id)initWithRoute:(id)a0;

@end
