@class NSArray, HKWorkoutSession, HKLiveWorkoutDataSource;
@protocol HKLiveWorkoutBuilderDelegate;

@interface HKLiveWorkoutBuilder : HKWorkoutBuilder {
    HKLiveWorkoutDataSource *_dataSource;
    NSArray *_additionalDataSources;
}

@property (retain) NSArray *additionalDataSources;
@property (weak) id<HKLiveWorkoutBuilderDelegate> delegate;
@property (readonly, weak) HKWorkoutSession *workoutSession;
@property BOOL shouldCollectWorkoutEvents;
@property (retain) HKLiveWorkoutDataSource *dataSource;
@property (readonly) double elapsedTime;

- (id)initWithHealthStore:(id)a0 builderConfiguration:(id)a1 builderIdentifier:(id)a2;
- (void)_resourceQueue_updateElapsedTimeCache;
- (id)initWithHealthStore:(id)a0 session:(id)a1 builderConfiguration:(id)a2 builderIdentifier:(id)a3;
- (void)_resourceQueue_updateEvents:(id)a0;
- (void)clientRemote_didUpdateStatistics:(id)a0;
- (void)clientRemote_didUpdateMetadata:(id)a0;
- (void)stateMachine:(id)a0 didEnterState:(id)a1 date:(id)a2 error:(id)a3;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)_privateDelegate;

@end
