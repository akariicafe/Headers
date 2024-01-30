@class NSString, CPSPromise, CLLocationManager, NSObject;
@protocol OS_dispatch_queue;

@interface CPSLocationProvider : NSObject <CLLocationManagerDelegate> {
    CLLocationManager *_locationManager;
    CPSPromise *_locationPromise;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _locationEnabled;
}

@property (class, nonatomic) BOOL locationServiceEnabled;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedProvider;

- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)init;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)getCurrentLocationWithCompletion:(id /* block */)a0;
- (void)confirmCurrentLocationInRegion:(id)a0 completion:(id /* block */)a1;

@end
