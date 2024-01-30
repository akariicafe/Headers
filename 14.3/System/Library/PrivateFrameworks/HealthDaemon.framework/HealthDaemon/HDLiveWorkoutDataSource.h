@class HDWorkoutBasicDataSource, NSString, NSUUID, HDProfile, HKWorkoutDataSourceConfiguration, HKDataFlowLink, NSLock;
@protocol HDWorkoutDataAccumulator;

@interface HDLiveWorkoutDataSource : HDStandardTaskServer <HKLiveWorkoutDataSourceServerInterface, HKDataFlowLinkProcessor, HDWorkoutDataSource, HDWorkoutDataDestination> {
    HDProfile *_profile;
    HKDataFlowLink *_workoutDataFlowLink;
    HKWorkoutDataSourceConfiguration *_dataSourceConfiguration;
    HDWorkoutBasicDataSource *_basicDataSource;
    NSLock *_lock;
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
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (Class)configurationClass;

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)remoteInterface;
- (void)remote_setDataSourceConfiguration:(id)a0;
- (void)remote_startTaskServerIfNeeded;
- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)workoutDataDestination:(id)a0 requestsDataFrom:(id)a1 to:(id)a2;
- (void)workoutDataDestination:(id)a0 didChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)workoutDataDestination:(id)a0 requestsFinalDataFrom:(id)a1 to:(id)a2 completion:(id /* block */)a3;
- (void)workoutDataDestination:(id)a0 didUpdateConfiguration:(id)a1;
- (void)addSamples:(id)a0 dataSource:(id)a1;
- (void)addWorkoutEvents:(id)a0 dataSource:(id)a1;
- (void)addMetadata:(id)a0 dataSource:(id)a1;
- (void)updateWorkoutConfiguration:(id)a0 dataSource:(id)a1;
- (void)_setDataSourceConfiguration:(id)a0;
- (BOOL)_lock_shouldAddSample:(id)a0;

@end
