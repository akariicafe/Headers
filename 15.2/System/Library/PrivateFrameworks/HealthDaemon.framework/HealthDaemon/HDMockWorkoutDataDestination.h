@class HKWorkoutConfiguration, HDProfile, NSString, NSUUID, NSMutableArray, HKDataFlowLink;
@protocol HDWorkoutDataAccumulator;

@interface HDMockWorkoutDataDestination : NSObject <HKDataFlowLinkProcessor, HDWorkoutDataDestination> {
    HKDataFlowLink *_workoutDataFlowLink;
    NSUUID *_dataProcessorUUID;
}

@property (retain, nonatomic) NSMutableArray *dataSources;
@property (retain, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HKWorkoutConfiguration *workoutConfiguration;
@property (copy) id /* block */ sampleHandler;
@property (copy) id /* block */ eventHandler;
@property (copy) id /* block */ metadataHandler;
@property (copy) id /* block */ updateconfigurationHandler;
@property unsigned long long workoutDataDestinationState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;
@property (readonly, nonatomic) id<HDWorkoutDataAccumulator> workoutDataAccumulator;

- (void).cxx_destruct;
- (void)addSamples:(id)a0 dataSource:(id)a1;
- (void)addWorkoutEvents:(id)a0 dataSource:(id)a1;
- (void)addMetadata:(id)a0 dataSource:(id)a1;
- (void)updateWorkoutConfiguration:(id)a0 dataSource:(id)a1;
- (id)initWithQueue:(id)a0 profile:(id)a1 workoutConfiguration:(id)a2;

@end
