@class NSString, NSBundle, NSMapTable, NSHashTable, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, HMDCLLocationManager;

@interface HMDLocation : HMFObject <HMFLogging, HMFTimerDelegate, HMDCLLocationManagerDelegate>

@property (class, readonly, nonatomic) NSBundle *bundleForLocationManager;
@property (class, readonly) HMDLocation *sharedManager;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly, nonatomic) id<HMDCLLocationManager> locationManager;
@property (nonatomic) int authStatus;
@property (nonatomic) long long locationAuthorized;
@property (readonly, nonatomic) NSHashTable *singleLocationDelegates;
@property (readonly, nonatomic) NSMutableSet *batchLocationContexts;
@property (readonly, nonatomic) NSMapTable *regionStateDelegatesByRegionIdentifier;
@property (readonly, nonatomic) NSMapTable *pendingRegionMonitoringRequests;
@property (readonly, nonatomic) NSMapTable *pendingRegionCallbacks;
@property (readonly, nonatomic) NSMapTable *regionStates;
@property (nonatomic) BOOL beingConfigured;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)nextSunsetTimeForLocation:(id)a0 date:(id)a1;
+ (id)_getAlmanacWithLocation:(id)a0;
+ (id)_getAlmanacWithLocation:(id)a0 date:(id)a1;
+ (id)findEvent:(id)a0 withGeo:(id)a1;
+ (BOOL)isAccurateLocation:(id)a0;
+ (id)nextSunriseTimeForLocation:(id)a0 date:(id)a1;
+ (id)sunriseTimeForLocation:(id)a0;
+ (id)sunsetTimeForLocation:(id)a0;
+ (void)timeZoneISOCountryCodeForCLLocationAsync:(id)a0 withCompletion:(id /* block */)a1;

- (void)timerDidFire:(id)a0;
- (void)locationManager:(id)a0 didDetermineState:(long long)a1 forRegion:(id)a2;
- (id)getCurrentLocation;
- (void)locationManager:(id)a0 didExitRegion:(id)a1;
- (void)locationManager:(id)a0 didEnterRegion:(id)a1;
- (void)locationManager:(id)a0 didStartMonitoringForRegion:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)dealloc;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_canLocationBeExtracted;
- (id)_delegateforRegion:(id)a0;
- (void)_extractSingleLocationForDelegate:(id)a0;
- (void)_handleDeterminedState:(long long)a0 forRegion:(id)a1;
- (void)_notifySingleLocationDelegate:(id)a0 withLocation:(id)a1;
- (void)_notifySingleLocationDelegatesWithLocation:(id)a0;
- (void)_startExtractingBatchLocationsForDelegate:(id)a0;
- (void)_stopExtractingBatchLocationsForContext:(id)a0;
- (void)_updateEntryForRegion:(id)a0;
- (void)_updateExitForRegion:(id)a0;
- (void)_updateRegionState:(long long)a0 forRegion:(id)a1;
- (void)_updateWithLocationAuthorizationStatus:(int)a0;
- (void)beingConfigured:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)deregisterForRegionUpdate:(id)a0 completionHandler:(id /* block */)a1;
- (void)getCoreRoutineLOIForCurrentLocationWithCompletionHandler:(id /* block */)a0;
- (void)getLOIForCurrentLocationWithCompletionHandler:(id /* block */)a0;
- (id)initWithLocationManager:(id)a0 handlerQueue:(id)a1;
- (void)registerForRegionUpdate:(id)a0 withDelegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestMicroLocationLocalizationScanWithMetadata:(id)a0;
- (void)requestMicroLocationRecordingScanWithMetadata:(id)a0;
- (void)startExtractingBatchLocationsForDelegate:(id)a0;
- (void)startExtractingSingleLocationForDelegate:(id)a0;
- (void)stopExtractingBatchLocationsForDelegate:(id)a0;

@end
