@class MNActiveRouteInfo, MNLocation;

@interface MNSimulatedLocationGenerator : NSObject {
    MNActiveRouteInfo *_routeInfo;
    double _currentTime;
    unsigned long long _currentLegIndex;
    double _startWaitingTime;
    double _speedOverride;
    BOOL _isChinaShifted;
}

@property (nonatomic) BOOL endAtFinalDestination;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) MNLocation *lastLocation;
@property (readonly, nonatomic) struct { unsigned int index; float offset; } lastRouteCoordinate;

- (id)stringForState:(long long)a0;
- (void).cxx_destruct;
- (id)initWithRouteInfo:(id)a0;
- (id)nextSimulatedLocationWithElapsedTime:(double)a0;
- (struct { double x0; double x1; double x2; })_updateForProceedingToStartOfLegOverTimeDelta:(double)a0 outCourse:(out double *)a1 outSpeed:(out double *)a2;
- (struct { double x0; double x1; double x2; })_updateForFollowingRouteOverTimeDelta:(double)a0 outCourse:(out double *)a1 outSpeed:(out double *)a2;
- (struct { double x0; double x1; double x2; })_updateForProceedingToWaypointOverTimeDelta:(double)a0 outCourse:(out double *)a1 outSpeed:(out double *)a2;
- (struct { double x0; double x1; double x2; })_updateForWaitingAtWaypointOverTimeDelta:(double)a0 outCourse:(out double *)a1 outSpeed:(out double *)a2;
- (id)_locationWithCoordinate:(struct { double x0; double x1; double x2; })a0 course:(double)a1 speed:(double)a2;
- (struct { unsigned int x0; float x1; })_simulationStartRouteCoordinate;
- (struct { double x0; double x1; double x2; })_projectedCoordinateOffRouteFrom:(struct { double x0; double x1; double x2; })a0 toCoordinate:(struct { double x0; double x1; double x2; })a1 overTimeDelta:(double)a2 outCourse:(out double *)a3 outSpeed:(out double *)a4;
- (struct { unsigned int x0; float x1; })_projectedCoordinateOnRouteFrom:(struct { unsigned int x0; float x1; })a0 overTimeDelta:(double)a1 outSpeed:(out double *)a2;
- (BOOL)_isCoordinate:(struct { unsigned int x0; float x1; })a0 atEndOfLeg:(id)a1;
- (double)_courseFromCoordinate:(struct { double x0; double x1; double x2; })a0 toCoordinate:(struct { double x0; double x1; double x2; })a1;
- (void)updateWithRouteInfo:(id)a0;

@end
