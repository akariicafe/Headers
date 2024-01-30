@class NSArray, HKWorkoutSession, HKLiveWorkoutDataSource, HKWorkoutActivity;
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
@property (readonly, copy) HKWorkoutActivity *currentWorkoutActivity;

- (void)connectionInterrupted;
- (id)_privateDelegate;
- (void).cxx_destruct;
- (void)clientRemote_didUpdateMetadata:(id)a0;
- (void)_resourceQueue_updateElapsedTimeCache;
- (void)_resourceQueue_updateEvents:(id)a0;
- (void)clientRemote_didBeginActivity:(id)a0;
- (void)clientRemote_didEndActivity:(id)a0;
- (void)clientRemote_didUpdateStatistics:(id)a0;
- (id)initWithHealthStore:(id)a0 builderConfiguration:(id)a1 builderIdentifier:(id)a2;
- (id)initWithHealthStore:(id)a0 session:(id)a1 builderConfiguration:(id)a2 builderIdentifier:(id)a3;
- (void)stateMachine:(id)a0 didEnterState:(id)a1 date:(id)a2 error:(id)a3;

@end
