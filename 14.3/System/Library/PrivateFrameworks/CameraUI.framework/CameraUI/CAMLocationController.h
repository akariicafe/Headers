@class CLHeading, NSString, CLLocationManager, CLLocation, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CAMLocationController : NSObject <CLLocationManagerDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_authorizationQueue;
@property (readonly, nonatomic, getter=_isMonitoringLocation) BOOL _monitoringLocation;
@property (readonly, nonatomic) CLLocationManager *_locationManager;
@property (readonly, nonatomic) NSMutableArray *_enqueuedAssetsWaitingForLocation;
@property (nonatomic, setter=_setDidRequestLocation:) BOOL _didRequestLocation;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isHeadingEnabled) BOOL headingEnabled;
@property (readonly, nonatomic) CLLocation *currentLocation;
@property (readonly, nonatomic) CLHeading *currentHeading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)locationMetadataForLocation:(id)a0 heading:(id)a1 device:(long long)a2;
+ (id)_sharedGPSTimestampFormatter;
+ (id)_sharedGPSDatestampFormatter;

- (void)locationManager:(id)a0 didUpdateHeading:(id)a1;
- (void)_stopMonitoringLocationUpdates;
- (id)headingForOrientation:(long long)a0;
- (id)init;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateAssetsWaitingOnLocation;
- (void)enqueueAssetForLocationUpdates:(id)a0;
- (void)_authorizeOrStartLocationManager;
- (void)_resetDidRequestLocation;
- (void)_updateLocationMonitoring;
- (void)_startMonitoringLocationUpdates;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;

@end
