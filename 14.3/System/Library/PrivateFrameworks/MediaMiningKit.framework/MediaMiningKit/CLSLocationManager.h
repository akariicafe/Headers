@class NSString, NSUUID, CLLocationManager, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CLSLocationManager : NSObject <CLLocationManagerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _minimumDelayReached;
    BOOL _isBrowsing;
    NSMutableArray *_pendingBlocks;
    CLLocationManager *_locationManager;
    BOOL _isUpdatingLocation;
    NSUUID *_shutdownUUID;
}

@property (nonatomic) double desiredAccuracy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (id)init;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)currentLocation;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)locationResult:(id /* block */)a0;
- (void)_dispatchProximityPendingBlocks:(BOOL)a0;

@end
