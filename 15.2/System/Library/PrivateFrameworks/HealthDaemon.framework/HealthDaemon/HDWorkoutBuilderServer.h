@class NSMutableDictionary, HKDataFlowLink, HDWorkoutBuilderEntity, HKStateMachine, NSObject, HKWorkoutBuilderConfiguration, NSDate, NSString, NSSet, NSMutableSet, NSDateInterval, NSArray, HKObserverSet, NSError, NSUUID;
@protocol HDWorkoutDataAccumulator, OS_dispatch_queue;

@interface HDWorkoutBuilderServer : HDStandardTaskServer <HDWorkoutDataAccumulator, HKDataFlowLinkProcessor, HKStateMachineDelegate, HKWorkoutBuilderServerInterface, HDWorkoutDataDestination, HDTaskServerObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _Atomic BOOL _invalidated;
    HDWorkoutBuilderEntity *_persistentEntity;
    NSError *_error;
    HKObserverSet *_dataAccumulatorObservers;
    HKObserverSet *_sampleObservers;
    NSSet *_quantityTypesIncludedWhilePaused;
    NSMutableDictionary *_statisticsCalculatorsByType;
    NSMutableDictionary *_sourceOrderProvidersByType;
    NSMutableDictionary *_statisticsDataSourcesByType;
    NSMutableSet *_quantityTypesRequiringCalculatorInvalidation;
    HKDataFlowLink *_workoutDataFlowLink;
    NSSet *_expectedDataSourceUUIDs;
    HKStateMachine *_stateMachine;
    long long _targetConstructionState;
    NSObject<OS_dispatch_queue> *_upstreamQueue;
    HKWorkoutBuilderConfiguration *_configuration;
    NSMutableDictionary *_metadata;
    NSArray *_workoutEvents;
    NSDate *_workoutStartDate;
    NSDate *_workoutEndDate;
    NSDateInterval *_dataInterval;
}

@property (readonly) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;
@property (readonly) unsigned long long workoutDataDestinationState;
@property (readonly, nonatomic) id<HDWorkoutDataAccumulator> workoutDataAccumulator;

+ (id)requiredEntitlements;
+ (BOOL)finishAllWorkoutBuildersForClient:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (id)taskIdentifier;
+ (BOOL)finishAllDetachedWorkoutBuildersExcludingSessions:(id)a0 profile:(id)a1 error:(id *)a2;
+ (void)finishDetachedBuilderForEntity:(id)a0 sessionEndDate:(id)a1 profile:(id)a2;
+ (id)recoveredWorkoutBuilderConfigurationForClient:(id)a0 sessionIdentifier:(id)a1 builderIdentifierOut:(id *)a2 profile:(id)a3 error:(id *)a4;
+ (Class)configurationClass;

- (void)connectionConfigured;
- (void)connectionInvalidated;
- (void)didCreateTaskServer:(id)a0;
- (void)remote_updateDevice:(id)a0;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)remote_setTargetConstructionState:(long long)a0 startDate:(id)a1 endDate:(id)a2 completion:(id /* block */)a3;
- (void)remote_addSamples:(id)a0 completion:(id /* block */)a1;
- (void)remote_addWorkoutEvents:(id)a0 completion:(id /* block */)a1;
- (void)remote_removeMetadata:(id)a0 completion:(id /* block */)a1;
- (void)remote_setStatisticsMergeStrategy:(unsigned long long)a0 forType:(id)a1;
- (void)remote_setStatisticsComputationMethod:(long long)a0 forType:(id)a1;
- (id)remoteInterface;
- (void)remote_addDataSourcesWithIdentifiers:(id)a0;
- (void)remote_removeDataSourcesWithIdentifiers:(id)a0;
- (void)remote_recoverWithCompletion:(id /* block */)a0;
- (void)remote_setShouldCollectEvents:(BOOL)a0;
- (void)stateMachine:(id)a0 didTransition:(id)a1 fromState:(id)a2 toState:(id)a3 date:(id)a4 error:(id)a5;
- (void)stateMachine:(id)a0 didEnterState:(id)a1 date:(id)a2 error:(id)a3;
- (id)startDate;
- (void).cxx_destruct;
- (void)remote_addMetadata:(id)a0 completion:(id /* block */)a1;
- (id)exportedInterface;
- (id)currentEvents;
- (void)addSamples:(id)a0 dataSource:(id)a1;
- (void)addWorkoutEvents:(id)a0 dataSource:(id)a1;
- (void)addMetadata:(id)a0 dataSource:(id)a1;
- (void)updateWorkoutConfiguration:(id)a0 dataSource:(id)a1;
- (id)currentMetadata;
- (BOOL)enumerateSamplesOfType:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (void)addSampleObserver:(id)a0;
- (void)didInvalidateTaskServer:(id)a0;
- (void)addDataAccumulationObserver:(id)a0;
- (void)removeDataAccumulationObserver:(id)a0;
- (void)removeSampleObserver:(id)a0;

@end
