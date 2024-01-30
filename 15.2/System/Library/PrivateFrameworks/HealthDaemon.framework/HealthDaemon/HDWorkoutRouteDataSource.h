@class HKUnit, NSString, NSUUID, HDLocationDataCollector, HKDataFlowLink, NSObject, HDWorkoutSessionServer, HKQuantity;
@protocol OS_dispatch_queue;

@interface HDWorkoutRouteDataSource : HDStandardTaskServer <HDWorkoutSessionObserver, HDLocationEventDelegate, HKDataFlowLinkProcessor, HKWorkoutRouteDataSourceServerInterface, HDWorkoutDataSource> {
    HDWorkoutSessionServer *_sessionServer;
    HDLocationDataCollector *_locationDataCollector;
    HKDataFlowLink *_workoutDataFlowLink;
    HKUnit *_elevationUnit;
    HKQuantity *_currentElevation;
    HKQuantity *_latestAltitude;
    NSUUID *_workoutUUID;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void)workoutSession:(id)a0 didChangeToState:(long long)a1 fromState:(long long)a2 date:(id)a3;
- (void)connectionInvalidated;
- (void)workoutSession:(id)a0 didFailWithError:(id)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void)workoutSession:(id)a0 didGenerateEvent:(id)a1;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)remote_setupWithSessionIdentifier:(id)a0;
- (void)workoutDataDestination:(id)a0 requestsDataFrom:(id)a1 to:(id)a2;
- (void)workoutDataDestination:(id)a0 didChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)workoutDataDestination:(id)a0 requestsFinalDataFrom:(id)a1 to:(id)a2 completion:(id /* block */)a3;
- (void)workoutDataDestination:(id)a0 didUpdateConfiguration:(id)a1;
- (void)_queue_setupLocationDataCollector;
- (id)_queue_createLocationDataCollectorWithActivityType:(unsigned long long)a0 workoutUUID:(id)a1;
- (void)elevationUpdated:(unsigned long long)a0;
- (void)workoutRouteUpdated:(id)a0;
- (void)altitudeUpdated:(double)a0;
- (id)_unitTest_locationDataCollector;

@end
