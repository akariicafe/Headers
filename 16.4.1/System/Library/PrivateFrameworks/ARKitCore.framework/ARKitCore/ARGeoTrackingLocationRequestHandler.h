@class NSString, NSCondition, CLLocationManager;

@interface ARGeoTrackingLocationRequestHandler : NSObject <CLLocationManagerDelegate> {
    CLLocationManager *_locationManager;
    NSCondition *_authorizationCondition;
    int _authorizationStatus;
}

@property (copy, nonatomic) id /* block */ locationCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void)setLocationManager:(id)a0;
- (void).cxx_destruct;
- (void)requestLocationWithCompletionHandler:(id /* block */)a0;
- (int)waitForAuthorizationStatus;

@end
