@class NSObject, NSArray, NSString, RTRoutineManager, NSBundle, CLLocationManager, NSMutableDictionary;
@protocol OS_dispatch_source;

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
}

@property (retain) NSArray *allLOIs;
@property (nonatomic) BOOL gpsInUse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)init;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)callPendingLOIBlocksWithCLLocation:(id)a0 LOI:(id)a1 andError:(id)a2;
- (void).cxx_destruct;
- (void)unloadFrameworks;
- (void)dealloc;
- (unsigned long long)addPendingLOIBlocks:(id /* block */)a0;
- (void)fetchLOICountOnMainQueueWithReply:(id /* block */)a0;
- (long long)preflightFrameworks;
- (void)cleanUpPendingLOIBlocks;
- (id)mobileWiFiLocationManager;
- (void)getLocationTechnologyState;
- (BOOL)loadCoreLocation;
- (BOOL)authorizedToUseCoreRoutine;
- (void)fetchCurrentLocationLOIOnQueue:(id)a0 reply:(id /* block */)a1;
- (BOOL)loadCoreRoutine;
- (void)showLocationArrow;

@end
