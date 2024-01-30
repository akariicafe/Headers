@class NSMutableArray, AuthenticationInProgress;

@interface AuthenticationManager : NSObject {
    id /* block */ _completionHandler;
    NSMutableArray *_idleBlocks;
}

@property (readonly, nonatomic) AuthenticationInProgress *pendingAuthentication;
@property (readonly, nonatomic) AuthenticationInProgress *runningAuthentication;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (long long)_priorityForPolicy:(long long)a0;
- (BOOL)canStartAuthenticationWithPolicy:(long long)a0;
- (void)_runAuthentication:(id)a0;
- (void)_runIdleBlocks;
- (void)_runIdleBlocksNow;
- (id)runningMechanism;
- (void)authenticateForPolicy:(long long)a0 constraintData:(id)a1 internalInfo:(id)a2 uiDelegate:(id)a3 originator:(id)a4 mechanism:(id)a5 reply:(id /* block */)a6;
- (void)cancelWithError:(id)a0 originatorId:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)runWhenIdle:(id /* block */)a0;

@end
