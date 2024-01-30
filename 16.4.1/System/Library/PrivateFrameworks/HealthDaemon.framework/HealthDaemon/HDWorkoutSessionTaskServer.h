@class HDWorkoutBuilderEntity, NSString, HKSource, NSUUID, HDWorkoutSessionServer, HKDataFlowLink, HKWorkoutSessionTaskConfiguration;
@protocol HDWorkoutDataAccumulator;

@interface HDWorkoutSessionTaskServer : HDStandardTaskServer <HKWorkoutSessionServerInterface, HKDataFlowLinkProcessor, HDWorkoutDataSource, HDWorkoutDataDestination, HDWorkoutSessionObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HKWorkoutSessionTaskConfiguration *_taskConfiguration;
    HDWorkoutSessionServer *_sessionServer;
    HKDataFlowLink *_workoutDataFlowLink;
    HDWorkoutBuilderEntity *_builderEntity;
    id<HDWorkoutDataAccumulator> _accumulator;
}

@property (readonly, nonatomic) BOOL requiresCoreLocationAssertion;
@property (readonly, nonatomic) BOOL supportsAppRelaunchForRecovery;
@property (readonly, nonatomic) BOOL shouldStopPreviousSession;
@property (readonly, nonatomic) BOOL supports3rdPartyAOT;
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
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;
+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (void)workoutSession:(id)a0 didChangeToState:(long long)a1 fromState:(long long)a2 date:(id)a3;
- (id)exportedInterface;
- (void)connectionConfigured;
- (void)workoutSession:(id)a0 didFailWithError:(id)a1;
- (void)workoutSession:(id)a0 didGenerateEvent:(id)a1;
- (void).cxx_destruct;
- (void)remote_beginNewActivityWithConfiguration:(id)a0 date:(id)a1 metadata:(id)a2 completion:(id /* block */)a3;
- (void)remote_enableAutomaticDetectionForActivityConfigurations:(id)a0 completion:(id /* block */)a1;
- (void)remote_endCurrentActivityOnDate:(id)a0 completion:(id /* block */)a1;
- (void)remote_recoverWithCompletion:(id /* block */)a0;
- (void)remote_setTargetState:(long long)a0 date:(id)a1 completion:(id /* block */)a2;
- (void)addMetadata:(id)a0 dataSource:(id)a1;
- (void)addOtherSamples:(id)a0 dataSource:(id)a1;
- (void)addQuantities:(id)a0 dataSource:(id)a1;
- (void)addWorkoutEvents:(id)a0 dataSource:(id)a1;
- (void)didBeginActivity:(id)a0 dataSource:(id)a1;
- (void)didEndActivity:(id)a0 dataSource:(id)a1;
- (void)didSuggestActivity:(id)a0 dataSource:(id)a1;
- (void)observeWorkoutSessionServer:(id)a0;
- (void)setAssociatedWorkoutBuilderEntity:(id)a0;
- (void)setWorkoutDataAccumulator:(id)a0;
- (void)updateWorkoutConfiguration:(id)a0 dataSource:(id)a1;
- (void)workoutDataDestination:(id)a0 didBeginActivity:(id)a1;
- (void)workoutDataDestination:(id)a0 didChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)workoutDataDestination:(id)a0 didEndActivity:(id)a1;
- (void)workoutDataDestination:(id)a0 didUpdateConfiguration:(id)a1;
- (void)workoutDataDestination:(id)a0 requestsDataFrom:(id)a1 to:(id)a2;
- (void)workoutDataDestination:(id)a0 requestsFinalDataFrom:(id)a1 to:(id)a2 completion:(id /* block */)a3;

@end
