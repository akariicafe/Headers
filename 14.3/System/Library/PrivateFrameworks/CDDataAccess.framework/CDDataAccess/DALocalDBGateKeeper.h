@class NSString, NSMutableArray, NSMutableSet;
@protocol DADataclassLockWatcher;

@interface DALocalDBGateKeeper : NSObject

@property (nonatomic) BOOL claimedOwnershipOfEvents;
@property (retain, nonatomic) id<DADataclassLockWatcher> eventsLockHolder;
@property (retain, nonatomic) NSMutableArray *eventsWaiters;
@property (retain, nonatomic) NSMutableSet *waiterIDsExpectingEventsLock;
@property (retain, nonatomic) NSString *unitTestHackRunLoopMode;

+ (id)sharedGateKeeper;

- (id)stateString;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)claimedOwnershipOfDataclasses:(long long)a0;
- (BOOL)_canWakenWaiter:(id)a0;
- (void)_abortWaiterForWrappers:(id)a0;
- (void)_setUnitTestHackRunLoopMode:(id)a0;
- (void)_notifyWaitersForDataclasses:(id)a0;
- (void)_registerWaiter:(id)a0 forDataclassLocks:(long long)a1 preempt:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)relinquishLocksForWaiter:(id)a0 dataclasses:(long long)a1 moreComing:(BOOL)a2;
- (void)_sendAllClearNotifications;
- (void)registerPreemptiveWaiter:(id)a0 forDataclassLocks:(long long)a1 completionHandler:(id /* block */)a2;
- (void)registerWaiter:(id)a0 forDataclassLocks:(long long)a1 completionHandler:(id /* block */)a2;
- (void)unregisterWaiterForDataclassLocks:(id)a0;

@end
