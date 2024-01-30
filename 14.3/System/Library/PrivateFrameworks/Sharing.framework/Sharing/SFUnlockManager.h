@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFUnlockManager : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_source> *_stateRequestTimer;
}

+ (id)sharedUnlockManager;

- (id)init;
- (void).cxx_destruct;
- (void)establishStashBagWithCompletionHandler:(id /* block */)a0;
- (void)enableUnlockWithDevice:(id)a0 fromKey:(BOOL)a1 withPasscode:(id)a2 completionHandler:(id /* block */)a3;
- (void)unlockEnabledWithDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelStateRequestTimer;
- (void)establishStashBagWithManifest:(id)a0 completionHandler:(id /* block */)a1;
- (id)timerWithBlock:(id /* block */)a0;
- (void)unlockStateForDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)disableUnlockWithDevice:(id)a0;

@end
