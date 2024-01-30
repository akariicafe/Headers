@class NSString, CLLocationManager, CLLocation, NSObject;
@protocol OS_dispatch_queue;

@interface ADLocationManager : NSObject <CLLocationManagerDelegate>

@property (nonatomic) BOOL isLocationInitialized;
@property (retain, nonatomic) NSString *locality;
@property (retain, nonatomic) NSString *administrativeArea;
@property (retain, nonatomic) NSString *subAdministrativeArea;
@property (retain, nonatomic) NSString *ISOcountryCode;
@property (retain, nonatomic) NSString *postalCode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *readWriteQueue;
@property (nonatomic) int authorizationStatus;
@property (copy, nonatomic) CLLocation *previousLocation;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (nonatomic) BOOL isUpdatingLocation;
@property (nonatomic) double requestedLocationAccuracy;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)init;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)_startUpdatingLocation;
- (void)setLocation:(id)a0;
- (void)_createLocationManager;
- (void)_stopUpdatingLocation;
- (BOOL)locationEnabledFor:(int)a0;
- (void)_considerRefreshingLocation;
- (BOOL)isAdLocationServicesEnabled;

@end
