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

- (void)locationManager:(id)a0 didExitRegion:(id)a1;
- (void)removeObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)locationManager:(id)a0 didEnterRegion:(id)a1;
- (void)locationManager:(id)a0 didStartMonitoringForRegion:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)markAsHavingReceivedLocation;
- (id)initWithQueue:(id)a0 locationManager:(id)a1 observable:(id)a2;
- (id)init;
- (void)addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_triggerDidFireForRegion:(id)a0;
- (void).cxx_destruct;
- (BOOL)isBundleIdentifierAuthorizedForRegionMonitoring:(id)a0;
- (void)setMonitoredRegions:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)initWithQueue:(id)a0 locationManager:(id)a1;

@end
