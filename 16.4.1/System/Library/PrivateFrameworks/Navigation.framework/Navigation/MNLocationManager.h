@class GEOLocationShifter, NSString, NSHashTable, NSLock, MNLocation, NSDate, CLInUseAssertion, NSBundle, CLHeading;
@protocol MNLocationProvider, MNLocationRecorder;

@interface MNLocationManager : NSObject <GEOResourceManifestTileGroupObserver, MNLocationProviderDelegate> {
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    NSHashTable *_accessRequesters;
    NSHashTable *_locationObservers;
    NSHashTable *_locationListeners;
    NSHashTable *_headingObservers;
    NSLock *_observersLock;
    NSLock *_lastLocationLock;
    MNLocation *_lastLocation;
    GEOLocationShifter *_locationShifter;
    double _expectedGpsUpdateInterval;
    CLInUseAssertion *_locationAssertion;
    NSDate *_lastUpdatedHeadingDate;
    BOOL _trackingLocation;
    BOOL _trackingHeading;
}

@property (copy, nonatomic) id /* block */ locationCorrector;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (retain, nonatomic) NSBundle *effectiveBundle;
@property (readonly, nonatomic) BOOL isHeadingServicesAvailable;
@property (readonly, nonatomic) CLHeading *heading;
@property (readonly, nonatomic) MNLocation *lastLocation;
@property (readonly, nonatomic) BOOL coarseModeEnabled;
@property (readonly, nonatomic) double expectedGpsUpdateInterval;
@property (readonly, nonatomic) double timeScale;
@property (nonatomic) int headingOrientation;
@property (retain, nonatomic) id<MNLocationRecorder> locationRecorder;
@property (readonly, nonatomic) unsigned long long locationProviderType;
@property (retain, nonatomic) id<MNLocationProvider> locationProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedLocationManager;

- (void)locationProvider:(id)a0 didUpdateVehicleHeading:(double)a1 timestamp:(id)a2;
- (void)locationProvider:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (BOOL)locationProviderShouldPauseLocationUpdates:(id)a0;
- (void)setLastLocation:(id)a0;
- (void)pushLocation:(id)a0;
- (void)locationProvider:(id)a0 didUpdateVehicleSpeed:(double)a1 timestamp:(id)a2;
- (void)locationProvider:(id)a0 didChangeCoarseMode:(BOOL)a1;
- (void)locationProvider:(id)a0 didUpdateLocation:(id)a1;
- (void)_reset;
- (void)locationProvider:(id)a0 didReceiveError:(id)a1;
- (void)locationProviderDidPauseLocationUpdates:(id)a0;
- (void)locationProviderDidChangeAuthorizationStatus:(id)a0;
- (void)locationProvider:(id)a0 didExitRegion:(id)a1;
- (void)locationProviderDidResumeLocationUpdates:(id)a0;
- (void)locationProvider:(id)a0 didUpdateHeading:(id)a1;
- (void)locationProvider:(id)a0 didEnterRegion:(id)a1;
- (void)stopHeadingUpdateWithObserver:(id)a0;
- (void)useSimulationLocationProvider:(id)a0;
- (void)_clearLocationAssertion;
- (void)_reportLocationFailureWithError:(id)a0;
- (BOOL)_hasLocationAssertion;
- (void)_reportLocationStatus:(SEL)a0;
- (void)useGPSLocationProviderWithCLParameters:(id)a0;
- (void)resourceManifestManager:(id)a0 didChangeActiveTileGroup:(id)a1 fromOldTileGroup:(id)a2;
- (void)_updateForNewShiftedLocation:(id)a0 rawLocation:(id)a1;
- (void)dealloc;
- (void)startHeadingUpdateWithObserver:(id)a0;
- (void)useHybridLocationProvider;
- (void)stopMonitoringForRegion:(id)a0;
- (void)removeLocationAccessFor:(id)a0;
- (void)startLocationUpdateWithObserver:(id)a0;
- (void)stop;
- (void)_reportLocationReset;
- (id)init;
- (void)_shiftLocationIfNecessary:(id)a0 handler:(id /* block */)a1;
- (void)startMonitoringForRegion:(id)a0;
- (void)_reportLocationSuccess;
- (void)requestLocationAccessFor:(id)a0;
- (void)removeLocationListener:(id)a0;
- (void)stopLocationUpdateWithObserver:(id)a0;
- (void)addLocationListener:(id)a0;
- (void)removeLocationAccessForAll;
- (void).cxx_destruct;
- (void)_setTrackingHeading:(BOOL)a0;
- (void)_createLocationAssertion;
- (void)useTraceLocationProvider:(id)a0;
- (void)_setTrackingLocation:(BOOL)a0;
- (void)setLocationProviderType:(unsigned long long)a0;

@end
