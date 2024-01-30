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
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_abortWaiterForWrappers:(id)a0;
- (BOOL)_canWakenWaiter:(id)a0;
- (void)_notifyWaitersForDataclasses:(id)a0;
- (void)_registerWaiter:(id)a0 forDataclassLocks:(long long)a1 preempt:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_sendAllClearNotifications;
- (void)_setUnitTestHackRunLoopMode:(id)a0;
- (void)claimedOwnershipOfDataclasses:(long long)a0;
- (void)registerPreemptiveWaiter:(id)a0 forDataclassLocks:(long long)a1 completionHandler:(id /* block */)a2;
- (void)registerWaiter:(id)a0 forDataclassLocks:(long long)a1 completionHandler:(id /* block */)a2;
- (void)relinquishLocksForWaiter:(id)a0 dataclasses:(long long)a1 moreComing:(BOOL)a2;
- (void)unregisterWaiterForDataclassLocks:(id)a0;

@end
