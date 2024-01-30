@class CMExerciseMinuteData, NSObject;
@protocol OS_dispatch_queue;

@interface CMExerciseMinuteInternal : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
    BOOL fStartedUpdates;
    CMExerciseMinuteData *fMostRecentRecord;
    id /* block */ fHandler;
}

- (id)init;
- (void)_teardown;
- (void)dealloc;
- (void)_stopUpdates;
- (void)_startUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)_queryExerciseMinutesFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)_startUpdatesWithHandler:(id /* block */)a0;

@end
