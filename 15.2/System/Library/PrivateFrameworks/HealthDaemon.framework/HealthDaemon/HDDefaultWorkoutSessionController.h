@class HDBiomeInterface, HDProfile, HDWorkoutSessionConfiguration, HDSessionAssertionGroup, NSObject, HDWorkoutEventsManager;
@protocol HDWorkoutSessionStateController, OS_dispatch_queue;

@interface HDDefaultWorkoutSessionController : NSObject <HDWorkoutEventCollectorDelegate, HDWorkoutSessionController> {
    HDProfile *_profile;
    id<HDWorkoutSessionStateController> _sessionStateController;
    NSObject<OS_dispatch_queue> *_queue;
    HDWorkoutSessionConfiguration *_sessionConfiguration;
    HDSessionAssertionGroup *_assertionGroup;
    HDWorkoutEventsManager *_eventsManager;
    long long _sessionServerState;
    HDBiomeInterface *_bmInterface;
    id /* block */ _hkTestTransitionCompletionHandler;
}

+ (id)recoveryIdentifier;
+ (void)willFinishSessionWithRecoveryData:(id)a0 profile:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)unitTest_setCMWorkoutManager:(id)a0;
- (void)receivedWorkoutEvent:(id)a0;
- (id)initWithProfile:(id)a0 sessionConfiguration:(id)a1 sessionStateController:(id)a2 recoveryState:(id)a3;
- (void)workoutSessionServer:(id)a0 didChangeConfiguration:(id)a1;
- (void)workoutSessionServer:(id)a0 didTransitionFromState:(long long)a1 toState:(long long)a2 date:(id)a3;
- (void)workoutSessionServer:(id)a0 accumulatorDidChange:(id)a1;
- (void)hktest_setStateTransitionCompletionHandler:(id /* block */)a0;

@end
