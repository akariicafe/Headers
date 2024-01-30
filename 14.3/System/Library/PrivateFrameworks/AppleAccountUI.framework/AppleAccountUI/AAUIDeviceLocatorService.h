@class NSObject;
@protocol OS_dispatch_queue;

@interface AAUIDeviceLocatorService : NSObject {
    unsigned long long _lastKnownState;
    BOOL _hasAttemptedToFetchState;
    BOOL _wantsToEnable;
    NSObject<OS_dispatch_queue> *_stateUpdateQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (void)_updateStateAndNotify:(BOOL)a0 completion:(id /* block */)a1;
- (void)enableInContext:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)disableInContext:(unsigned long long)a0 withWipeToken:(id)a1 completion:(id /* block */)a2;
- (BOOL)isChangingState;
- (BOOL)isStateKnown;
- (void)refreshCurrentState:(id /* block */)a0;
- (void)enableInContext:(unsigned long long)a0;
- (void)disableInContext:(unsigned long long)a0 withWipeToken:(id)a1;
- (void)setShouldEnable:(BOOL)a0;
- (BOOL)shouldEnable;

@end
