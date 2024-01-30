@class NSString, NSBundle, MNCoreLocationProvider;
@protocol MNLocationProviderDelegate;

@interface MNHybridLocationProvider : NSObject <MNLocationProviderDelegate, MNLocationProvider> {
    unsigned long long _mode;
    double _desiredAccuracy;
    MNCoreLocationProvider *_coreLocationProvider;
}

@property (nonatomic) unsigned long long mode;
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

- (void)locationProvider:(id)a0 didUpdateHeading:(id)a1;
- (void)locationProvider:(id)a0 didUpdateVehicleSpeed:(double)a1 timestamp:(id)a2;
- (void)stopUpdatingVehicleSpeed;
- (void)locationProvider:(id)a0 didReceiveError:(id)a1;
- (void)_sharedInit;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)locationProvider:(id)a0 didUpdateLocation:(id)a1;
- (void)locationProviderDidPauseLocationUpdates:(id)a0;
- (void)stopUpdatingHeading;
- (void)locationProviderDidResumeLocationUpdates:(id)a0;
- (void)requestWhenInUseAuthorization;
- (void)locationProviderDidChangeAuthorizationStatus:(id)a0;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingVehicleHeading;
- (void)startUpdatingVehicleSpeed;
- (id)initWithEffectiveBundle:(id)a0;
- (void)startUpdatingLocation;
- (id)init;
- (void)locationProvider:(id)a0 didChangeCoarseMode:(BOOL)a1;
- (id)coreLocationProvider;
- (void)resetForActiveTileGroupChanged;
- (void)startUpdatingHeading;
- (id)initWithEffectiveBundleIdentifier:(id)a0;
- (void)locationProvider:(id)a0 didUpdateVehicleHeading:(double)a1 timestamp:(id)a2;
- (BOOL)locationProviderShouldPauseLocationUpdates:(id)a0;
- (void).cxx_destruct;
- (void)_setEffectiveAccuracy:(double)a0;
- (id)leechedLocationProvider;

@end
