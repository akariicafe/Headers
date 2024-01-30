@class NSString, NSBundle, CLLocationManager, MNLocationProviderCLParameters, NSRunLoop;
@protocol MNLocationProviderDelegate;

@interface MNCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MNLocationProvider> {
    BOOL _hasQueriedAuthorization;
    CLLocationManager *_clLocationManager;
    MNLocationProviderCLParameters *_clParameters;
    int _authorizationStatus;
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    double _distanceFilter;
    double _desiredAccuracy;
    BOOL _matchInfoEnabled;
    NSRunLoop *_debug_initRunLoop;
    NSRunLoop *_debug_deinitRunLoop;
}

@property (readonly, nonatomic) CLLocationManager *_clLocationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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

- (void)_updateForCLParameters:(id)a0;
- (void)startUpdatingLocation;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (void)setDistanceFilter:(double)a0;
- (void)locationManager:(id)a0 didExitRegion:(id)a1;
- (id)initWithEffectiveBundleIdentifier:(id)a0;
- (void)locationManager:(id)a0 didUpdateVehicleHeading:(id)a1;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;
- (void)locationManager:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (void)stopUpdatingLocation;
- (void)locationManager:(id)a0 didEnterRegion:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)startUpdatingVehicleSpeed;
- (void)_sharedInit;
- (void)resetForActiveTileGroupChanged;
- (void)dealloc;
- (void)stopUpdatingHeading;
- (void)_resetForNewEffectiveBundle;
- (void)_createCLLocationManager;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)stopUpdatingVehicleHeading;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)stopMonitoringForRegion:(id)a0;
- (void)startUpdatingHeading;
- (void)_updateAuthorizationStatus;
- (void)_updateCoarseModeEnabled;
- (id)init;
- (id)initWithEffectiveBundle:(id)a0;
- (void)setCLParameters:(id)a0;
- (void)startMonitoringForRegion:(id)a0;
- (void)setDesiredAccuracy:(double)a0;
- (void)locationManager:(id)a0 didUpdateHeading:(id)a1;
- (void)requestLocation;
- (void).cxx_destruct;
- (void)setMatchInfoEnabled:(BOOL)a0;
- (void)locationManager:(id)a0 didUpdateVehicleSpeed:(id)a1;

@end
