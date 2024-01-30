@class NSString, DBWorkspace;

@interface DBInstrumentClusterWorkspaceOwner : NSObject <BSInvalidatable, DBEventHandling, DBWorkspaceOwner>

@property (weak, nonatomic) DBWorkspace *workspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleEvent:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)session:(id)a0 handleStateChangeRequest:(id)a1;
- (unsigned long long)session:(id)a0 policyForRequest:(id)a1;
- (void)workspace:(id)a0 didBeginStateChangeSession:(id)a1;
- (void)workspace:(id)a0 didEndStateChangeSession:(id)a1;

@end
