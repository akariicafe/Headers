@class NSMutableArray, AuthenticationInProgress;

@interface AuthenticationManager : NSObject {
    id /* block */ _completionHandler;
    NSMutableArray *_idleBlocks;
}

@property (readonly, nonatomic) AuthenticationInProgress *pendingAuthentication;
@property (readonly, nonatomic) AuthenticationInProgress *runningAuthentication;

+ (id)sharedInstance;

- (void)_runIdleBlocksNow;
- (void)authenticateForPolicy:(long long)a0 constraintData:(id)a1 internalInfo:(id)a2 uiDelegate:(id)a3 originator:(id)a4 mechanism:(id)a5 reply:(id /* block */)a6;
- (void)runWhenIdle:(id /* block */)a0;
- (id)runningMechanism;
- (void)_runAuthentication:(id)a0;
- (BOOL)canStartAuthenticationWithPolicy:(long long)a0;
- (void)cancelWithError:(id)a0 originatorId:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)_runIdleBlocks;
- (void).cxx_destruct;
- (id)init;
- (long long)_priorityForPolicy:(long long)a0;

@end
