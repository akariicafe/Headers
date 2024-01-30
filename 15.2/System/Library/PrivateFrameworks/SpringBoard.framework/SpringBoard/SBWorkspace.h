@class FBWorkspaceEventQueue, SBWorkspaceTransaction, NSString;

@interface SBWorkspace : NSObject <SBIdleTimerProviding, SBIdleTimerCoordinating>

@property (readonly, nonatomic) FBWorkspaceEventQueue *eventQueue;
@property (readonly, nonatomic) SBWorkspaceTransaction *currentTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mainWorkspace;

- (BOOL)requestTransitionWithBuilder:(id /* block */)a0;
- (id)createRequestWithOptions:(unsigned long long)a0;
- (id)initWithEventQueue:(id)a0;
- (BOOL)_executeTransitionRequest:(id)a0 options:(unsigned long long)a1 validator:(id /* block */)a2;
- (id)transactionForTransitionRequest:(id)a0;
- (BOOL)executeTransitionRequest:(id)a0 withValidator:(id /* block */)a1;
- (BOOL)requestTransitionWithOptions:(unsigned long long)a0 builder:(id /* block */)a1 validator:(id /* block */)a2;
- (id)createRequestForApplicationActivation:(id)a0 options:(unsigned long long)a1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (BOOL)executeTransitionRequest:(id)a0;
- (id)idleTimerProvider:(id)a0 didProposeBehavior:(id)a1 forReason:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
