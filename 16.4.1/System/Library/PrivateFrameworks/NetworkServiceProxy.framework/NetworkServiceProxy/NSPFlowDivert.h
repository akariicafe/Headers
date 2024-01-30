@class NEPolicySession, NEFlowDivertFileHandle, NSPConfiguration;

@interface NSPFlowDivert : NEAppProxyProviderContainer

@property (retain) NEPolicySession *policySession;
@property BOOL started;
@property BOOL shouldResetPolicies;
@property (retain, nonatomic) NSPConfiguration *configuration;
@property (retain, nonatomic) NEFlowDivertFileHandle *flowDivertControlHandle;

- (id)initWithDelegate:(id)a0 providerClass:(Class)a1 configuration:(id)a2;
- (void)addPoliciesForDivertDNSOnly:(id)a0 domainConditions:(id)a1 divertResult:(id)a2;
- (void)didFailWithError:(id)a0;
- (void)addPoliciesForAgent:(id)a0 conditions:(id)a1;
- (id)createFlowDivertSocketHandle;
- (void)didStartWithError:(id)a0;
- (void)startWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)getEffectiveAppRules:(id)a0;
- (BOOL)resetPolicies:(BOOL)a0;
- (id)getAgentResults:(id)a0;
- (void)addPolicy:(id)a0;
- (void)teardown;
- (void)stop;
- (id)getExecutableConditions:(id)a0;
- (id)getAgentResultsForSelf;
- (void)destroyFlowDivertSocketHandles;
- (void).cxx_destruct;
- (void)destroyPolicySession;
- (id)createPolicySession;

@end
