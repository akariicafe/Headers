@class NSString, CMWorkoutManager;

@interface HDAutoPauseWorkoutEventCollector : HDWorkoutEventCollector <CMWorkoutManagerDelegate> {
    CMWorkoutManager *_cmWorkoutManager;
    int _catFlexingNotifyToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)stop;
- (id)initWithProfile:(id)a0 delegate:(id)a1;
- (void)workoutManager:(id)a0 didFailWorkout:(id)a1 withError:(id)a2;
- (void)workoutManager:(id)a0 didStartWorkout:(id)a1 atDate:(id)a2;
- (void)workoutManager:(id)a0 didStopWorkout:(id)a1 atDate:(id)a2;
- (void)workoutManager:(id)a0 willPauseWorkout:(id)a1 atDate:(id)a2;
- (void)workoutManager:(id)a0 willResumeWorkout:(id)a1 atDate:(id)a2;
- (void)workoutManager:(id)a0 suggestedStopWorkout:(id)a1 atDate:(id)a2;
- (void)workoutManager:(id)a0 workoutLocationEventUpdate:(id)a1;
- (void)unitTest_setCMWorkoutManager:(id)a0;
- (void)_listenForCatFlexingFakingNotifications;
- (void)_unregisterForCatFlexingNotifications;
- (void)_deliverWorkoutEvent:(long long)a0 sessionId:(id)a1 eventDate:(id)a2;
- (void)_triggerCatFlexingEvent;
- (void)_triggerCatFlexingEventWithTimeout:(double)a0;

@end
