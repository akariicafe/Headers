@class NSString, NAFuture, CLLocationManager, NSHashTable, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HFLocationManagerDispatcher : NSObject <CLLocationManagerDelegate>

@property (class, readonly, nonatomic) HFLocationManagerDispatcher *sharedDispatcher;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) NSHashTable *locationObservers;
@property (readonly, nonatomic) NSMutableArray *pendingAuthorizationStatusFutures;
@property (nonatomic) int cachedAuthorizationStatus;
@property (nonatomic) BOOL hasInitializedAuthorizationStatus;
@property (readonly, nonatomic) int authorizationStatus;
@property (readonly, nonatomic) NAFuture *authorizationStatusFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)locationManager:(id)a0 didEnterRegion:(id)a1;
- (void)locationManager:(id)a0 didUpdateHeading:(id)a1;
- (void)locationManager:(id)a0 didStartMonitoringForRegion:(id)a1;
- (void)locationManager:(id)a0 rangingBeaconsDidFailForRegion:(id)a1 withError:(id)a2;
- (void)locationManager:(id)a0 didRangeBeacons:(id)a1 inRegion:(id)a2;
- (void)locationManager:(id)a0 didFinishDeferredUpdatesWithError:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)addObserver:(id)a0;
- (void)locationManager:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (void)removeObserver:(id)a0;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;
- (void)locationManager:(id)a0 didExitRegion:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManager:(id)a0 didDetermineState:(long long)a1 forRegion:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_updateCachedAuthorizationStatus:(int)a0;
- (void)dispatchLocationManagerObserverMessage:(SEL)a0 withBlock:(id /* block */)a1 sender:(id)a2;
- (void)_updateMacAuthorizationStatus:(int)a0;
- (void)_authorizeHomeKitLocationServices;

@end
