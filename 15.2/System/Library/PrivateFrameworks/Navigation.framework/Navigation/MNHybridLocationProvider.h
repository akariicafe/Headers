@class NSString, NSBundle, MNCoreLocationProvider;
@protocol MNLocationProviderDelegate;

@interface MNHybridLocationProvider : NSObject <MNLocationProviderDelegate, MNLocationProvider> {
    unsigned long long _mode;
    double _distanceFilter;
    double _nonLeechedDesiredAccuracy;
    double _effectiveAccuracy;
    MNCoreLocationProvider *_coreLocationProvider;
}

@property (nonatomic) unsigned long long mode;
@property (nonatomic) double distanceFilter;
@property (nonatomic) double desiredAccuracy;
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

- (void)stopUpdatingHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingHeading;
- (void)startUpdatingVehicleHeading;
- (void)locationProvider:(id)a0 didUpdateVehicleSpeed:(double)a1 timestamp:(id)a2;
- (id)initWithEffectiveBundle:(id)a0;
- (BOOL)locationProviderShouldPauseLocationUpdates:(id)a0;
- (void)stopUpdatingVehicleHeading;
- (void)locationProvider:(id)a0 didUpdateVehicleHeading:(double)a1 timestamp:(id)a2;
- (void)locationProvider:(id)a0 didUpdateHeading:(id)a1;
- (void)stopUpdatingLocation;
- (void)locationProvider:(id)a0 didUpdateLocation:(id)a1;
- (void)startUpdatingVehicleSpeed;
- (void)locationProvider:(id)a0 didReceiveError:(id)a1;
- (void)stopMonitoringForRegion:(id)a0;
- (void)locationProviderDidChangeAuthorizationStatus:(id)a0;
- (void)startUpdatingLocation;
- (void)startMonitoringForRegion:(id)a0;
- (id)initWithEffectiveBundleIdentifier:(id)a0;
- (void)locationProviderDidResumeLocationUpdates:(id)a0;
- (void)locationProvider:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (void)_sharedInit;
- (void)locationProvider:(id)a0 didEnterRegion:(id)a1;
- (void)_setEffectiveAccuracy:(double)a0;
- (void).cxx_destruct;
- (id)leechedLocationProvider;
- (id)init;
- (void)locationProviderDidPauseLocationUpdates:(id)a0;
- (id)coreLocationProvider;
- (void)resetForActiveTileGroupChanged;
- (void)locationProvider:(id)a0 didChangeCoarseMode:(BOOL)a1;
- (void)locationProvider:(id)a0 didExitRegion:(id)a1;

@end
