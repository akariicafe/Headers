@class CMExerciseMinuteData, NSObject;
@protocol OS_dispatch_queue;

@interface CMExerciseMinuteInternal : NSObject {
    struct CLConnectionClient { id x0; struct CLCallbackDropManager { void /* function */ **x0; struct shared_ptr<int> { int *x0; struct __shared_weak_count *x1; } x1; } x1; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal *x0; struct __shared_weak_count *x1; } x2; struct CLConnectionClientNotificationContext *x3; } *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
    BOOL fStartedUpdates;
    CMExerciseMinuteData *fMostRecentRecord;
    id /* block */ fHandler;
}

- (void)_teardown;
- (id)init;
- (void)dealloc;
- (void)_startUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)_queryExerciseMinutesFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)_startUpdatesWithHandler:(id /* block */)a0;
- (void)_stopUpdates;

@end
