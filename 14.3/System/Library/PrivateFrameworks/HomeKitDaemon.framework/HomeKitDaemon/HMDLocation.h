@class NSHashTable, NSDate, HMFTimer, NSString, HMFMessageDispatcher, NSBundle, NSObject, NSMutableArray, NSMapTable;
@protocol OS_dispatch_queue, HMDCLLocationManager;

@interface HMDLocation : HMFObject <HMFLogging, HMFTimerDelegate, HMDCLLocationManagerDelegate>

@property (class, readonly, nonatomic) NSBundle *bundleForLocationManager;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly, nonatomic) id<HMDCLLocationManager> locationManager;
@property (nonatomic) int authStatus;
@property (nonatomic) int locationAuthorized;
@property (readonly, nonatomic) NSHashTable *singleLocationDelegates;
@property (readonly, nonatomic) NSHashTable *batchLocationDelegates;
@property (readonly, nonatomic) NSMapTable *regionStateDelegatesByRegionIdentifier;
@property (readonly, nonatomic) NSMapTable *pendingRegionMonitoringRequests;
@property (readonly, nonatomic) NSMapTable *pendingRegionCallbacks;
@property (readonly, nonatomic) NSMapTable *regionStates;
@property (nonatomic) BOOL beingConfigured;
@property (readonly, nonatomic) NSMutableArray *batchLocationTuples;
@property (retain, nonatomic) HMFTimer *extractBatchLocationsTimer;
@property (retain, nonatomic) NSDate *lastFetchBatchLocationsTime;
@property (nonatomic) double batchLocationsFetchInterval;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)sharedManager;
+ (id)sunriseTimeForLocation:(id)a0;
+ (id)sunsetTimeForLocation:(id)a0;
+ (id)nextSunriseTimeForLocation:(id)a0 date:(id)a1;
+ (id)nextSunsetTimeForLocation:(id)a0 date:(id)a1;
+ (BOOL)isValidLocation:(id)a0;
+ (id)_getAlmanacWithLocation:(id)a0;
+ (id)findEvent:(id)a0 withGeo:(id)a1;
+ (id)_getAlmanacWithLocation:(id)a0 date:(id)a1;
+ (void)timeZoneISOCountryCodeForCLLocationAsync:(id)a0 withCompletion:(id /* block */)a1;

- (void)locationManager:(id)a0 didDetermineState:(long long)a1 forRegion:(id)a2;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)init;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)timerDidFire:(id)a0;
- (id)initWithLocationManager:(id)a0;
- (void)registerForRegionUpdate:(id)a0 withDelegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)deregisterForRegionUpdate:(id)a0 completionHandler:(id /* block */)a1;
- (void)_extractBatchLocationsWithDelegate:(id)a0;
- (void)_notifyBatchLocationDelegatesWithLocation:(id)a0;
- (void)_extractSingleLocationWithDelegate:(id)a0;
- (BOOL)_canLocationBeExtracted;
- (void)_notifySingleLocationDelegate:(id)a0 withLocation:(id)a1;
- (void)_notifyBatchLocationDelegate:(id)a0 withLocation:(id)a1;
- (void)stopExtractingBatchLocations;
- (void)_notifySingleLocationDelegatesWithLocation:(id)a0;
- (id)_delegateforRegion:(id)a0;
- (void)_updateExitForRegion:(id)a0;
- (void)_updateEntryForRegion:(id)a0;
- (void)_notifyAllLocationDelegatesWithLocation:(id)a0;
- (void)_updateWithLocationAuthorizationStatus:(int)a0;
- (void)_updateRegionState:(long long)a0 forRegion:(id)a1;
- (void)startExtractingBatchLocationsWithDelegate:(id)a0;
- (void)startExtractingSingleLocationWithDelegate:(id)a0;
- (void)beingConfigured:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
