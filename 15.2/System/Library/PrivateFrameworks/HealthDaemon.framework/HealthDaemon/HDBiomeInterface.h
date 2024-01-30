@class HDWorkoutSessionConfiguration;

@interface HDBiomeInterface : NSObject {
    HDWorkoutSessionConfiguration *_sessionConfiguration;
    unsigned long long _mostRecentBiomeEventType;
}

- (void).cxx_destruct;
- (void)workoutSessionWithConfiguration:(id)a0 transitionedToState:(long long)a1 fromState:(long long)a2;
- (void)workoutConfigurationUpdated:(id)a0;
- (void)_sendBiomeEvent:(id)a0 toSource:(id)a1;
- (void)stopSessionWithIdentifier:(id)a0 recoveredWorkoutConfiguration:(id)a1;

@end
