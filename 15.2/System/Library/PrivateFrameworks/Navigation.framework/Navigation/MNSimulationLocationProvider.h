@class NSString, NSBundle, NSTimer, MNSimulatedLocationGenerator, CLSimulationManager, NSMutableArray;
@protocol MNLocationProviderDelegate;

@interface MNSimulationLocationProvider : NSObject <MNLocationProvider> {
    NSTimer *_locationUpdateTimer;
    long long _simulationType;
    MNSimulatedLocationGenerator *_locationGenerator;
    BOOL _simulateGeoFences;
    CLSimulationManager *_simulationManager;
    NSMutableArray *_monitoredGeoFences;
    NSMutableArray *_currentGeoFences;
}

@property (weak, nonatomic) id<MNLocationProviderDelegate> delegate;
@property (retain, nonatomic) NSBundle *effectiveBundle;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (readonly, nonatomic) BOOL isAuthorized;
@property (nonatomic) int headingOrientation;
@property (readonly, nonatomic) double expectedGpsUpdateInterval;
@property (readonly, nonatomic) BOOL coarseModeEnabled;
@property (readonly, nonatomic) BOOL isTracePlayer;
@property (readonly, nonatomic) unsigned long long traceVersion;
@property (readonly, nonatomic) double timeScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopUpdatingHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingVehicleSpeed;
- (void)stopMonitoringForRegion:(id)a0;
- (void)startUpdatingLocation;
- (void)startMonitoringForRegion:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetForActiveTileGroupChanged;
- (void)updateWithRouteInfo:(id)a0;
- (void)_sendLocationUpdate:(id)a0;
- (id)initWithSimulationType:(long long)a0 routeInfo:(id)a1;

@end
