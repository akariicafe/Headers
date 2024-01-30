@interface CLRacingRouteVariables : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL raceStartPointDetected;
@property (readonly, nonatomic) BOOL raceEndPointDetected;
@property (readonly, nonatomic) BOOL userIsOffRoute;
@property (readonly, nonatomic) BOOL projectedOnNearestPoint;
@property (readonly, nonatomic) BOOL raceSessionExpired;
@property (readonly, nonatomic) BOOL rollingBufferReachedEndOfReferenceRoute;
@property (readonly, nonatomic) BOOL routeConfigurationSuccessful;
@property (readonly, nonatomic) BOOL racingRouteAnalyticsSent;
@property (readonly, nonatomic) BOOL prematureRaceEndDetected;
@property (readonly, nonatomic) BOOL referenceRouteTotalLengthDetermined;
@property (readonly, nonatomic) BOOL locationPointIsOutsideOfAcceptedRange;
@property (readonly, nonatomic) BOOL locationPointNotMatched;
@property (readonly, nonatomic) int routePointsBufferSize;
@property (readonly, nonatomic) int numberOfRoutePointsToAdd;
@property (readonly, nonatomic) int offRouteGraceDuration;
@property (readonly, nonatomic) int matchedPointCounter;
@property (readonly, nonatomic) int referenceRouteDataPointCounter;
@property (readonly, nonatomic) int currentRouteDataPointCounter;
@property (readonly, nonatomic) int offRouteDataPointCounter;
@property (readonly, nonatomic) int inutileDataPointCounter;
@property (readonly, nonatomic) int rollingBufferUpdateCounter;
@property (readonly, nonatomic) int lastMatchedPointIndex;
@property (readonly, nonatomic) int lastMatchedPointIndexOnReferenceRoute;
@property (readonly, nonatomic) int rollingBufferStartIndexOnReferenceRoute;
@property (readonly, nonatomic) int matrixCellIndexForLastMatchedPoint;
@property (readonly, nonatomic) double referenceRouteTotalLength;
@property (readonly, nonatomic) double timestampOfLastMatchedPointOnReferenceRoute;
@property (readonly, nonatomic) double registeredTimeAtThresholdDistance;
@property (readonly, nonatomic) double endOfRaceTimeThreshold;
@property (readonly, nonatomic) double nearestNeighborMaximumAcceptedDistance;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRaceStartPointDetected:(BOOL)a0 raceEndPointDetected:(BOOL)a1 userIsOffRoute:(BOOL)a2 projectedOnNearestPoint:(BOOL)a3 raceSessionExpired:(BOOL)a4 rollingBufferReachedEndOfReferenceRoute:(BOOL)a5 routeConfigurationSuccessful:(BOOL)a6 racingRouteAnalyticsSent:(BOOL)a7 prematureRaceEndDetected:(BOOL)a8 referenceRouteTotalLengthDetermined:(BOOL)a9 locationPointIsOutsideOfAcceptedRange:(BOOL)a10 locationPointNotMatched:(BOOL)a11 routePointsBufferSize:(int)a12 numberOfRoutePointsToAdd:(int)a13 offRouteGraceDuration:(int)a14 matchedPointCounter:(int)a15 referenceRouteDataPointCounter:(int)a16 currentRouteDataPointCounter:(int)a17 offRouteDataPointCounter:(int)a18 inutileDataPointCounter:(int)a19 rollingBufferUpdateCounter:(int)a20 lastMatchedPointIndex:(int)a21 lastMatchedPointIndexOnReferenceRoute:(int)a22 rollingBufferStartIndexOnReferenceRoute:(int)a23 matrixCellIndexForLastMatchedPoint:(int)a24 referenceRouteTotalLength:(double)a25 timestampOfLastMatchedPointOnReferenceRoute:(double)a26 registeredTimeAtThresholdDistance:(double)a27 endOfRaceTimeThreshold:(double)a28 nearestNeighborMaximumAcceptedDistance:(double)a29;

@end
