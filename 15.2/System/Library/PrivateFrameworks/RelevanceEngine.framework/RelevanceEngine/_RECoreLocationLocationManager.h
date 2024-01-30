@class NSString, CLLocationManager, CLLocation, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface _RECoreLocationLocationManager : RELocationManager <CLLocationManagerDelegate> {
    CLLocation *_currentLocation;
    NSLock *_locationAccessLock;
    id /* block */ _handler;
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _resumedQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)_updateLocation:(id)a0;
- (id)init;
- (id)currentLocation;
- (void)dealloc;
- (void)stopLocationUpdates;
- (void)startLocationUpdatesWithHandler:(id /* block */)a0;
- (void)_notifyUpdateHandlersWithError:(id)a0;

@end
