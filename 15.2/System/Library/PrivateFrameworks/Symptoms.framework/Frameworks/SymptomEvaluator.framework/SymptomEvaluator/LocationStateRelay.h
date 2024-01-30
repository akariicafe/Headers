@class NSObject, NSArray, NSString, RTRoutineManager, NSBundle, CLLocationManager, NSMutableDictionary;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface LocationStateRelay : NSObject <CLLocationManagerDelegate> {
    void *coreLocationDyLibHandle;
    void *coreRoutineDyLibHandle;
    RTRoutineManager *routineManager;
    NSBundle *mobileWiFiBundle;
    CLLocationManager *mobileWiFiLocationManager;
    Class CLLocationManagerClassRef;
    NSMutableDictionary *pendingLOIBlocks;
    NSObject<OS_dispatch_source> *locationRequestTimer;
    void /* function */ *clCopyTechnologiesInUseFunc;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (retain) NSArray *allLOIs;
@property (nonatomic) BOOL gpsInUse;
@property (nonatomic) BOOL LOIUseAuthorized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)callPendingLOIBlocksWithCLLocation:(id)a0 LOI:(id)a1 andError:(id)a2;
- (void)cleanUpPendingLOIBlocks;
- (void)getLocationTechnologyStateForInitialState:(BOOL)a0;
- (void)showLocationArrow;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (BOOL)loadCoreLocation;
- (void).cxx_destruct;
- (void)fetchCurrentLocationLOIOnQueue:(id)a0 reply:(id /* block */)a1;
- (id)init;
- (unsigned long long)addPendingLOIBlocks:(id /* block */)a0;
- (BOOL)loadCoreRoutine;
- (BOOL)authorizedToUseCoreRoutine;
- (id)mobileWiFiLocationManager;
- (void)dealloc;
- (void)unloadFrameworks;
- (id)rtLOITypeToString:(long long)a0;
- (void)determineIfLocationOfInterestIsKnownOfType:(long long)a0 queue:(id)a1 reply:(id /* block */)a2;
- (long long)preflightFrameworks;

@end
