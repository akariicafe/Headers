@class NSString, CLLocationManager, NSObject, UNSKeyedObservable;
@protocol OS_dispatch_queue;

@interface UNSLocationMonitor : NSObject <CLLocationManagerDelegate> {
    CLLocationManager *_locationManager;
    UNSKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)removeObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)locationManager:(id)a0 didStartMonitoringForRegion:(id)a1;
- (void)locationManager:(id)a0 didExitRegion:(id)a1;
- (id)init;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)setMonitoredRegions:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)markAsHavingReceivedLocation;
- (void)_queue_triggerDidFireForRegion:(id)a0;
- (void)locationManager:(id)a0 didEnterRegion:(id)a1;
- (BOOL)isBundleIdentifierAuthorizedForRegionMonitoring:(id)a0;
- (id)initWithQueue:(id)a0 locationManager:(id)a1 observable:(id)a2;
- (id)initWithQueue:(id)a0 locationManager:(id)a1;

@end
