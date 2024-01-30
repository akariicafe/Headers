@class NSArray, NSString, CLLocationManager, CLLocation, NSObject;
@protocol OS_dispatch_queue;

@interface RCLocationsOfInterestManager : NSObject <CLLocationManagerDelegate> {
    int _authorizationStatus;
    CLLocationManager *_locationManager;
    CLLocation *_currentLocation;
    NSArray *_locationsOfInterest;
    BOOL _isFetchingPlacesOfInterest;
    BOOL _active;
    unsigned long long _placeInferencePolicy;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly) CLLocation *currentLocation;
@property (readonly, copy) NSArray *locationsOfInterest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)_startMonitoringLocation;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)start;
- (void).cxx_destruct;
- (void)_stopMonitoringLocation;
- (id)init;
- (void)_didFetchPlaceInferences:(id)a0 location:(id)a1 error:(id)a2;
- (void)_requestPlaceInferences;
- (void)stop;

@end
