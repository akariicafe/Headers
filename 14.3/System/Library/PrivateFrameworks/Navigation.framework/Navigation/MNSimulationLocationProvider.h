@class NSString, NSBundle, NSTimer, MNActiveRouteInfo, NSDate, MNLocation;
@protocol MNLocationProviderDelegate;

@interface MNSimulationLocationProvider : NSObject <MNLocationProvider> {
    long long _simulationType;
    NSTimer *_locationUpdateTimer;
    MNLocation *_previousLocation;
    struct { unsigned int index; float offset; } _previousPolylineCoordinate;
    MNActiveRouteInfo *_routeInfo;
    long long _state;
    unsigned long long _currentLegIndex;
    NSDate *_startWaitingDate;
}

@property (weak, nonatomic) id<MNLocationProviderDelegate> delegate;
@property (retain, nonatomic) NSBundle *effectiveBundle;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
@property (nonatomic) double distanceFilter;
@property (nonatomic) BOOL matchInfoEnabled;
@property (nonatomic) int headingOrientation;
@property (copy, nonatomic) id /* block */ authorizationRequestBlock;
@property (readonly, nonatomic) double expectedGpsUpdateInterval;
@property (readonly, nonatomic) int authorizationStatus;
@property (readonly, nonatomic) BOOL coarseModeEnabled;
@property (readonly, nonatomic) BOOL usesCLMapCorrection;
@property (readonly, nonatomic) BOOL isSimulation;
@property (readonly, nonatomic) BOOL isTracePlayer;
@property (readonly, nonatomic) unsigned long long traceVersion;
@property (readonly, nonatomic) double timeScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopUpdatingVehicleSpeed;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)stopUpdatingHeading;
- (void)requestWhenInUseAuthorization;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingVehicleHeading;
- (void)startUpdatingVehicleSpeed;
- (void)startUpdatingLocation;
- (void)resetForActiveTileGroupChanged;
- (void)startUpdatingHeading;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_stringForState:(long long)a0;
- (struct { double x0; double x1; double x2; })_updateForProceedingToStartOfLegOverTimeDelta:(double)a0 outCourse:(out double *)a1 outSpeed:(out double *)a2;
- (struct { double x0; double x1; double x2; })_updateForFollowingRouteOverTimeDelta:(double)a0 outCourse:(out double *)a1 outSpeed:(out double *)a2;
- (struct { double x0; double x1; double x2; })_updateForProceedingToWaypointOverTimeDelta:(double)a0 outCourse:(out double *)a1 outSpeed:(out double *)a2;
- (struct { double x0; double x1; double x2; })_updateForWaitingAtWaypointOverTimeDelta:(double)a0 outCourse:(out double *)a1 outSpeed:(out double *)a2;
- (id)_locationWithCoordinate:(struct { double x0; double x1; double x2; })a0 course:(double)a1 speed:(double)a2;
- (struct { unsigned int x0; float x1; })_simulationStartRouteCoordinate;
- (struct { double x0; double x1; double x2; })_projectedCoordinateOffRouteFrom:(struct { double x0; double x1; double x2; })a0 toCoordinate:(struct { double x0; double x1; double x2; })a1 overTimeDelta:(double)a2 outCourse:(out double *)a3 outSpeed:(out double *)a4;
- (struct { unsigned int x0; float x1; })_projectedCoordinateOnRouteFrom:(struct { unsigned int x0; float x1; })a0 overTimeDelta:(double)a1 outSpeed:(out double *)a2;
- (BOOL)_isCoordinate:(struct { unsigned int x0; float x1; })a0 atEndOfLeg:(id)a1;
- (double)_modifiedSpeedForSpeed:(double)a0;
- (double)_courseFromCoordinate:(struct { double x0; double x1; double x2; })a0 toCoordinate:(struct { double x0; double x1; double x2; })a1;
- (void)_sendLocationUpdate:(id)a0;
- (id)initWithSimulationType:(long long)a0 routeInfo:(id)a1;
- (void)updateWithRouteInfo:(id)a0;

@end
