@class CLAssertion, NSString, PCPersistentTimer, CLLocationManager, CLLocation, NSObject;
@protocol OS_dispatch_queue, SOSPersistentTimerLocationManagerDelegate;

@interface SOSPersistentTimerLocationManager : NSObject <CLLocationManagerDelegate> {
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_locationUpdateStartQueue;
    PCPersistentTimer *_locationUpdateTimer;
    PCPersistentTimer *_requestLocationsTimer;
    double _ti;
    PCPersistentTimer *_initalRequestTimer;
    PCPersistentTimer *_assertionTimer;
}

@property (nonatomic, getter=isRequestingLocation) BOOL requestingLocation;
@property (retain, nonatomic) CLAssertion *forceEnableLocationAssertion;
@property (retain, nonatomic) CLLocation *lastLocation;
@property (weak) id<SOSPersistentTimerLocationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_startTimer;
- (void)requestLocation;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)invalidateTimer;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)isValid;
- (void)stopRequestingLocationUpdates;
- (void)warmUpLocationRequest;
- (void)fireAndStartTimertWithTimeInterval:(double)a0;
- (void)invalidateInitialTimer;
- (void)invalidateRequestLocationsTimer;
- (BOOL)shouldStopRequestingLocationAfterCallback;
- (void)_requestLocationsTimeout:(id)a0;
- (void)_sosPersistentTimerLocationManagerTic:(id)a0;
- (void)_sosPersistentTimerInitialRequest:(id)a0;
- (void)_emergencyLocationAssertionTimeOut:(id)a0;

@end
