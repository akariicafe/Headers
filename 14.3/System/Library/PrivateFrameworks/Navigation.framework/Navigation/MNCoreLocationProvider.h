@class NSString, NSBundle, CLLocationManager, MNLocationProviderCLParameters, NSLock, NSRunLoop;
@protocol MNLocationProviderDelegate;

@interface MNCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MNLocationProvider> {
    BOOL _waitingForAuthorization;
    BOOL _hasQueriedAuthorization;
    NSLock *_authorizationLock;
    BOOL _alternate;
    CLLocationManager *_clLocationManager;
    MNLocationProviderCLParameters *_clParameters;
    BOOL _locationServicesPreferencesDialogEnabled;
    int _authorizationStatus;
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    id /* block */ _authorizationRequestBlock;
    NSRunLoop *_debug_initRunLoop;
    NSRunLoop *_debug_deinitRunLoop;
}

@property (readonly, nonatomic) CLLocationManager *_clLocationManager;
@property (nonatomic) BOOL updatingLocations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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

- (void)stopUpdatingVehicleSpeed;
- (void)locationManager:(id)a0 didUpdateHeading:(id)a1;
- (void)_sharedInit;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)stopUpdatingHeading;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)requestWhenInUseAuthorization;
- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (void)requestLocation;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingVehicleHeading;
- (void)startUpdatingVehicleSpeed;
- (id)initWithEffectiveBundle:(id)a0;
- (void)startUpdatingLocation;
- (id)init;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)resetForActiveTileGroupChanged;
- (void)startUpdatingHeading;
- (id)initWithEffectiveBundleIdentifier:(id)a0;
- (void)locationManager:(id)a0 didUpdateVehicleSpeed:(id)a1;
- (void)_updateForCLParameters:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setCLParameters:(id)a0;
- (void)_resetForNewEffectiveBundle;
- (void)locationManager:(id)a0 didUpdateVehicleHeading:(id)a1;
- (void)_updateAuthorizationStatus;
- (void)_createCLLocationManager;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;

@end
