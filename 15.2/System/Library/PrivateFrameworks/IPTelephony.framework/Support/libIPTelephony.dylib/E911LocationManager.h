@class CLAssertion, NSString, NSBundle, CLLocationManager, CLLocation;

@interface E911LocationManager : NSObject <CLLocationManagerDelegate> {
    CLLocationManager *_manager;
    BOOL _locationServiceDenied;
    NSBundle *_bundle;
}

@property (copy) CLLocation *location;
@property (copy) CLLocation *goodEnoughLocation;
@property (nonatomic) BOOL locationRequested;
@property (nonatomic) BOOL locationAvailable;
@property (nonatomic) BOOL locationServiceAuthorized;
@property double desiredLocationAccuracy;
@property unsigned int desiredIntegrity;
@property (nonatomic) void *delegate;
@property (retain, nonatomic) CLAssertion *locationServicesAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)stopLocationUpdates;
- (BOOL)isLocationServiceEnabled;
- (void)shouldUpdateLocation:(BOOL)a0;
- (void)startLocationUpdates;
- (id)copyLastKnownLocation;
- (BOOL)isLocationServiceDenied;
- (BOOL)isLocationServiceAuthorized;
- (void)emergencyLocationServicesAssertion:(BOOL)a0;

@end
