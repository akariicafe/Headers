@class HDWorkoutBasicDataSource, NSString, NSUUID, NSSet, HKWorkoutDataSourceConfiguration, HKDataFlowLink;
@protocol HDWorkoutDataAccumulator;

@interface HDGymKitDataSource : HDStandardTaskServer <HKDataFlowLinkProcessor, HKGymKitDataSourceServerInterface, HKLiveWorkoutDataSourceServerInterface, HDWorkoutDataSource, HDWorkoutDataDestination> {
    HKWorkoutDataSourceConfiguration *_dataSourceConfiguration;
    HDWorkoutBasicDataSource *_basicDataSource;
    HKDataFlowLink *_workoutDataFlowLink;
    NSSet *_machineSourceTypes;
    NSSet *_localDevicePreferredTypes;
}

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
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)remote_synchronizeWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)remote_setDataSourceConfiguration:(id)a0;
- (void)remote_startTaskServerIfNeeded;
- (void)addMetadata:(id)a0 dataSource:(id)a1;
- (void)addOtherSamples:(id)a0 dataSource:(id)a1;
- (void)addQuantities:(id)a0 dataSource:(id)a1;
- (void)addWorkoutEvents:(id)a0 dataSource:(id)a1;
- (void)didBeginActivity:(id)a0 dataSource:(id)a1;
- (void)didEndActivity:(id)a0 dataSource:(id)a1;
- (void)didSuggestActivity:(id)a0 dataSource:(id)a1;
- (id)quantityTypesToIncludeWhilePaused;
- (void)updateWorkoutConfiguration:(id)a0 dataSource:(id)a1;
- (void)workoutDataDestination:(id)a0 didBeginActivity:(id)a1;
- (void)workoutDataDestination:(id)a0 didChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)workoutDataDestination:(id)a0 didEndActivity:(id)a1;
- (void)workoutDataDestination:(id)a0 didUpdateConfiguration:(id)a1;
- (void)workoutDataDestination:(id)a0 requestsDataFrom:(id)a1 to:(id)a2;
- (void)workoutDataDestination:(id)a0 requestsFinalDataFrom:(id)a1 to:(id)a2 completion:(id /* block */)a3;

@end
