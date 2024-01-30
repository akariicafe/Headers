@class NSMutableSet, NSString, CLRegion, CLLocationManager, CLLocation, NSObject, NSCondition;
@protocol OS_dispatch_queue, ATXLocationManagerGPSDelegate;

@interface ATXLocationManagerGPSCoreLocation : NSObject <CLLocationManagerDelegate, ATXLocationManagerGPS> {
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_clQueue;
    NSCondition *_updateCondition;
    BOOL _locationEnabled;
    BOOL _preciseLocationEnabled;
    BOOL _updatePending;
    NSMutableSet *_locationBlocksToInvoke;
    NSCondition *_requestStateCondition;
    CLRegion *_regionRequested;
    long long _state;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ATXLocationManagerGPSDelegate> delegate;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) BOOL locationEnabled;
@property (readonly, nonatomic) BOOL preciseLocationEnabled;

+ (id)sharedInstance;

- (void)stopMonitoringRegionWithIdentifier:(id)a0;
- (void)locationManager:(id)a0 didStartMonitoringForRegion:(id)a1;
- (void)locationManager:(id)a0 didExitRegion:(id)a1;
- (void)beginMonitoringRegion:(id)a0;
- (void)locationManager:(id)a0 didDetermineState:(long long)a1 forRegion:(id)a2;
- (long long)stateForRegion:(id)a0 withTimeout:(double)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (id)init;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_startUpdateIfNeededWithPreciseLocation:(BOOL)a0;
- (void)updateLocationWithCompletionHandler:(id /* block */)a0;
- (id)updateLocationWithTimeout:(double)a0 requestPreciseLocation:(BOOL)a1;
- (id)_existingRegionWithIdentifierOnCLQueue:(id)a0;
- (id)_init;
- (void)locationManager:(id)a0 didEnterRegion:(id)a1;
- (void)_updateConditionAndInvokeLocationBlocks:(id)a0 error:(id)a1;
- (void)_requestStateIfNeededForRegion:(id)a0;

@end
