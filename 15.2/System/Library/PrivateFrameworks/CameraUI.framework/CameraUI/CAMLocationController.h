@class CLHeading, NSString, CLLocationManager, CLLocation, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CAMLocationController : NSObject <CLLocationManagerDelegate>

@property (retain, nonatomic, setter=_setCurrentLocation:) CLLocation *currentLocation;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_authorizationQueue;
@property (readonly, nonatomic, getter=_isMonitoringLocation) BOOL _monitoringLocation;
@property (readonly, nonatomic) CLLocationManager *_locationManager;
@property (readonly, nonatomic) NSMutableArray *_enqueuedAssetsWaitingForLocation;
@property (nonatomic, setter=_setDidRequestLocation:) BOOL _didRequestLocation;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isHeadingEnabled) BOOL headingEnabled;
@property (readonly, nonatomic) CLHeading *currentHeading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedGPSDatestampFormatter;
+ (id)locationMetadataForLocation:(id)a0 heading:(id)a1 device:(long long)a2;
+ (id)_sharedGPSTimestampFormatter;

- (void)locationManager:(id)a0 didUpdateHeading:(id)a1;
- (void)_resetDidRequestLocation;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)_stopMonitoringLocationUpdates;
- (void)_performBlock:(id /* block */)a0 andLogIfExecutionExceeds:(double)a1 logPrefix:(id)a2;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)_authorizeOrStartLocationManager;
- (id)headingForOrientation:(long long)a0;
- (void)_startMonitoringLocationUpdates;
- (void).cxx_destruct;
- (id)init;
- (void)_updateLocationMonitoring;
- (void)_updateAssetsWaitingOnLocation;
- (void)dealloc;
- (void)enqueueAssetForLocationUpdates:(id)a0;

@end
