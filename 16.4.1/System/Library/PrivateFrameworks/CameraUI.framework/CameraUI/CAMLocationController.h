@class NSObject, CLHeading, NSString, CLLocationManager, CLLocation, NSMutableArray, NSHashTable;
@protocol OS_dispatch_queue;

@interface CAMLocationController : NSObject <CLLocationManagerDelegate>

@property (retain, nonatomic, setter=_setCurrentLocation:) CLLocation *currentLocation;
@property (nonatomic, setter=_setLastKnownAuthorizationStatus:) int lastKnownAuthorizationStatus;
@property (readonly, nonatomic, getter=_isMonitoringLocation) BOOL _monitoringLocation;
@property (readonly, nonatomic) CLLocationManager *_locationManager;
@property (readonly, nonatomic) NSMutableArray *_enqueuedAssetsWaitingForLocation;
@property (readonly, nonatomic) NSHashTable *_listenersWaitingForLocation;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_listenersQueue;
@property (nonatomic, setter=_setDidRequestLocation:) BOOL _didRequestLocation;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isHeadingEnabled) BOOL headingEnabled;
@property (readonly, nonatomic) CLHeading *currentHeading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedGPSDatestampFormatter;
+ (id)_sharedGPSTimestampFormatter;
+ (id)locationMetadataForLocation:(id)a0 heading:(id)a1 device:(long long)a2;

- (void)_updateLocationMonitoring;
- (void)addListenerForLocationUpdates:(id)a0;
- (void)_notifyListenersForAuthorizationStatusUpdate:(int)a0;
- (void)_authorizeOrStartLocationManager;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)removeListenerForLocationUpdates:(id)a0;
- (void)_resetDidRequestLocation;
- (void)_updateAssetsWaitingOnLocation;
- (void)dealloc;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)headingForOrientation:(long long)a0;
- (void)_notifyListenersWaitingOnLocation:(id)a0;
- (void)_stopMonitoringLocationUpdates;
- (id)init;
- (void)locationManager:(id)a0 didUpdateHeading:(id)a1;
- (void)enqueueAssetForLocationUpdates:(id)a0;
- (void).cxx_destruct;
- (void)_performBlock:(id /* block */)a0 andLogIfExecutionExceeds:(double)a1 logPrefix:(id)a2;
- (void)_startMonitoringLocationUpdates;

@end
