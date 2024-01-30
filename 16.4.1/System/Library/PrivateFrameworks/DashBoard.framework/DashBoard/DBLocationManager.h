@class NSString, CLLocationManager, NSMutableDictionary, NSMutableSet, NSObject, CARObserverHashTable, CLLocation, NSBundle;
@protocol OS_dispatch_queue;

@interface DBLocationManager : NSObject <CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *locationQueue;
@property (retain, nonatomic) NSMutableSet *activeAssertions;
@property (nonatomic) BOOL locationActive;
@property (retain, nonatomic) CLLocation *currentLocation;
@property (retain, nonatomic) CLLocation *lastPostedLocation;
@property (retain, nonatomic) NSMutableDictionary *monitoringRegions;
@property (readonly, nonatomic) CLLocation *cachedCurrentLocation;
@property (nonatomic) unsigned long long cacheUsedCount;
@property (retain, nonatomic) CARObserverHashTable *observers;
@property (readonly, nonatomic) NSString *bundlePath;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL authorized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homeKitLocationManager;

- (void)_commonInit;
- (void)locationManager:(id)a0 didDetermineState:(long long)a1 forRegion:(id)a2;
- (void)addObserver:(id)a0;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (id)initWithBundlePath:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_name;
- (void)_commonPostInit;
- (void)_authorizeIfNeeded;
- (void)_didEnterRegionWithIdentifier:(id)a0;
- (void)_didExitRegionWithIDentifier:(id)a0;
- (void)_startUpdatingLocationNow;
- (void)_stopUpdatingLocationNow;
- (void)_updateCurrentLocation:(id)a0;
- (id)initWithLocationManager:(id)a0 locationQueue:(id)a1;
- (void)startMonitoringForRegionWithIdentifier:(id)a0 locationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 range:(double)a2;
- (void)startUpdatingLocationWithIdentifier:(id)a0;
- (void)stopMonitoringForRegionWithIdentifier:(id)a0;
- (void)stopUpdatingLocationWithIdentifier:(id)a0;

@end
