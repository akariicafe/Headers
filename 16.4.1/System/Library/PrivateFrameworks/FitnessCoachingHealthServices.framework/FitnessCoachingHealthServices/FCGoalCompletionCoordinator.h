@class NSString, FCGoalCompletionStore, HDProfile, NSObject;
@protocol OS_dispatch_queue, FCGoalCompletionCoordinatorDelegate;

@interface FCGoalCompletionCoordinator : NSObject <FCDailyActivityGoalDetectionDelegate> {
    FCGoalCompletionStore *_goalCompletionStore;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_serviceQueue;
}

@property (weak, nonatomic) id<FCGoalCompletionCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)goalTypesToNotifyByActivitySummaryIndex;
- (void)notificationPostedForGoalTypes:(id)a0 activitySummaryIndex:(long long)a1;
- (id)initWithProfile:(id)a0 serviceQueue:(id)a1;
- (void)notificationPosted:(id)a0;
- (BOOL)runDailyGoalCompletionDetectionForGoalType:(long long)a0 activitySummaryIndex:(long long)a1 previousValue:(double)a2 currentValue:(double)a3 goalValue:(double)a4 shouldAlert:(BOOL)a5 goalMetHandler:(id /* block */)a6;
- (BOOL)_goalTypeAllowed:(long long)a0;
- (id)initWithProfile:(id)a0 goalCompletionStore:(id)a1 serviceQueue:(id)a2;
- (long long)_activitySummaryIndexForDate:(id)a0;
- (void).cxx_destruct;
- (void)concludeGoalDetectionRun;

@end
