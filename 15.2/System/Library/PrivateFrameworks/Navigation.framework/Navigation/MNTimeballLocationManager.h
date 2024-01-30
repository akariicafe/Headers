@class NSMutableArray, NSString, CLInUseAssertion, CLLocationManager, CLLocation, NSObject, GEOLocationShifter;
@protocol OS_dispatch_queue;

@interface MNTimeballLocationManager : NSObject <CLLocationManagerDelegate> {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    CLInUseAssertion *_inUseAssertion;
    CLLocationManager *_locationProvider;
    GEOLocationShifter *_locationShifter;
    NSMutableArray *_requests;
}

@property (readonly, nonatomic) CLLocation *lastLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setLocationProviderClass:(Class)a0;

- (id)locationProvider;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)_processLocation:(id)a0;
- (void)_processPendingRequests;
- (void)_processError:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)_addRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)getLocationWithAccuracy:(double)a0 maxAttempts:(unsigned long long)a1 timeoutInterval:(double)a2 completion:(id /* block */)a3;
- (void)_setupLocationProvider;
- (void)_requestTimedOut:(id)a0;
- (void)_removeRequest:(id)a0;

@end
