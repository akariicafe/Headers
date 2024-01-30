@class NSMapTable, AFSafetyBlock, AFWatchdogTimer, NSObject, AFNotifyStatePublisher;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface AFSiriClientStateManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    AFNotifyStatePublisher *_publisher;
    NSMapTable *_statesByClient;
    long long _transactionDepth;
    AFSafetyBlock *_presentationTransitionAssertion;
    AFWatchdogTimer *_presentationTransitionWatchdogTimer;
    NSObject<OS_dispatch_group> *_presentationTransitionGroup;
}

+ (id)sharedManager;

- (id)initWithInstanceContext:(id)a0;
- (void)beginTransaction;
- (void)_removeStateForClient:(void *)a0;
- (void)_beginSessionForClient:(void *)a0;
- (void)_endSessionForClient:(void *)a0;
- (void)_beginRequestWithUUID:(id)a0 forClient:(void *)a1;
- (unsigned long long)_aggregatedState;
- (void)_endRequestWithUUID:(id)a0 forClient:(void *)a1;
- (void)_beginListeningForClient:(void *)a0;
- (void)_endListeningForClient:(void *)a0;
- (void)_beginSpeakingForClient:(void *)a0;
- (void)_endSpeakingForClient:(void *)a0;
- (void)_aggregateStatesAndPublishIfNeeded;
- (void)_beginPresentationTransition;
- (void)_endPresentationTransitionForReason:(id)a0;
- (id)_stateForClient:(void *)a0 createIfAbsent:(BOOL)a1;
- (void)beginPresentationTransition;
- (void)endPresentationTransition;
- (void)getCurrentStateWithCompletion:(id /* block */)a0;
- (void)endTransaction;
- (void).cxx_destruct;
- (void)beginListeningForClient:(void *)a0;
- (void)endListeningForClient:(void *)a0;
- (void)beginRequestWithUUID:(id)a0 forClient:(void *)a1;
- (void)invalidateClient:(void *)a0;
- (void)endSessionForClient:(void *)a0;
- (void)endRequestWithUUID:(id)a0 forClient:(void *)a1;
- (void)beginSpeakingForClient:(id)a0;
- (void)endSpeakingForClient:(id)a0;
- (void)beginSessionForClient:(void *)a0;

@end
