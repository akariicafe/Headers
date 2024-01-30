@class NSOperationQueue, NSMutableDictionary;

@interface BRCBuddyFlowObserver : NSObject {
    BOOL _waitingForBuddy;
    NSMutableDictionary *_registerdKeyToToken;
    NSOperationQueue *_observersQueue;
}

+ (id)sharedBuddyFlowObserver;

- (id)_init;
- (void).cxx_destruct;
- (void)_registerForBYSetupAssistantFinishedNotification;
- (void)_stopObservingBuddyAndExecuteCallbacks;
- (void)_unregisterForBYSetupAssistantFinishedNotification;
- (BOOL)doesBuddyFlowNeedsToRun;
- (BOOL)observeBuddyIfNecessaryWithKey:(id)a0 block:(id /* block */)a1 description:(id)a2;
- (void)stopObservingBuddyWithKey:(id)a0;

@end
