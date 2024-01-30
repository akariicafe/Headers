@class NSUUID, NSString, HKDataFlowLink, HKWorkoutSessionTaskConfiguration, HKSource, NSObject, HDWorkoutBuilderEntity, HDWorkoutSessionServer;
@protocol HDWorkoutDataAccumulator, OS_dispatch_queue;

@interface HDWorkoutSessionTaskServer : HDStandardTaskServer <HKWorkoutSessionServerInterface, HKDataFlowLinkProcessor, HDWorkoutDataSource, HDWorkoutDataDestination, HDWorkoutSessionObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    HKWorkoutSessionTaskConfiguration *_taskConfiguration;
    HDWorkoutSessionServer *_sessionServer;
    HKDataFlowLink *_workoutDataFlowLink;
    HDWorkoutBuilderEntity *_builderEntity;
}

@property (weak) id<HDWorkoutDataAccumulator> accumulator;
@property (readonly, nonatomic) BOOL requiresCoreLocationAssertion;
@property (readonly, nonatomic) BOOL supportsAppRelaunchForRecovery;
@property (readonly, nonatomic) BOOL shouldStopPreviousSession;
@property (readonly, copy, nonatomic) HKSource *clientSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;
@property (readonly) unsigned long long workoutDataDestinationState;
@property (readonly, nonatomic) id<HDWorkoutDataAccumulator> workoutDataAccumulator;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (Class)configurationClass;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;

- (void)connectionInvalidated;
- (void)connectionConfigured;
- (void).cxx_destruct;
- (id)remoteInterface;
- (void)remote_recoverWithCompletion:(id /* block */)a0;
- (void)workoutSession:(id)a0 didGenerateEvent:(id)a1;
- (void)remote_setTargetState:(long long)a0 date:(id)a1 completion:(id /* block */)a2;
- (id)exportedInterface;
- (void)workoutSession:(id)a0 didChangeToState:(long long)a1 fromState:(long long)a2 date:(id)a3;
- (void)workoutSession:(id)a0 didFailWithError:(id)a1;
- (void)workoutDataDestination:(id)a0 requestsDataFrom:(id)a1 to:(id)a2;
- (void)workoutDataDestination:(id)a0 didChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)workoutDataDestination:(id)a0 requestsFinalDataFrom:(id)a1 to:(id)a2 completion:(id /* block */)a3;
- (void)workoutDataDestination:(id)a0 didUpdateConfiguration:(id)a1;
- (void)addSamples:(id)a0 dataSource:(id)a1;
- (void)addWorkoutEvents:(id)a0 dataSource:(id)a1;
- (void)addMetadata:(id)a0 dataSource:(id)a1;
- (void)updateWorkoutConfiguration:(id)a0 dataSource:(id)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 clientSource:(id)a3 delegate:(id)a4 sessionServer:(id)a5;
- (void)setAssociatedWorkoutBuilderEntity:(id)a0;
- (void)setWorkoutDataAccumulator:(id)a0;
- (void)_queue_setupSessionServer;
- (void)observeWorkoutSessionServer:(id)a0;

@end
