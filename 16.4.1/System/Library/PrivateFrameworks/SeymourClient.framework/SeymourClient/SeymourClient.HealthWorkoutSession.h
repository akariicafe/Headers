@interface SeymourClient.HealthWorkoutSession : NSObject <HKLiveWorkoutBuilderDelegate, HKWorkoutSessionDelegate> {
    void /* unknown type, empty encoding */ workoutSession;
    void /* unknown type, empty encoding */ builder;
    void /* unknown type, empty encoding */ sessionIdentifier;
    void /* unknown type, empty encoding */ workout;
    void /* unknown type, empty encoding */ caloriesUpdated;
    void /* unknown type, empty encoding */ $__lazy_storage_$_calorieStream;
    void /* unknown type, empty encoding */ sessionStateUpdated;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sessionStateStream;
    void /* unknown type, empty encoding */ metadata;
}

- (void)workoutSession:(id)a0 didChangeToState:(long long)a1 fromState:(long long)a2 date:(id)a3;
- (void)workoutSession:(id)a0 didFailWithError:(id)a1;
- (void)workoutBuilder:(id)a0 didCollectDataOfTypes:(id)a1;
- (void)workoutBuilder:(id)a0 didEndActivity:(id)a1;
- (void)workoutBuilderDidCollectEvent:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
