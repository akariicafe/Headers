@class NEPolicySession, NEFlowDivertFileHandle, NSPConfiguration;

@interface NSPFlowDivert : NEAppProxyProviderContainer

@property (retain) NEPolicySession *policySession;
@property BOOL started;
@property BOOL shouldResetPolicies;
@property (retain, nonatomic) NSPConfiguration *configuration;
@property (retain, nonatomic) NEFlowDivertFileHandle *flowDivertControlHandle;

- (void)teardown;
- (void)destroyFlowDivertSocketHandles;
- (id)initWithDelegate:(id)a0 providerClass:(Class)a1 configuration:(id)a2;
- (BOOL)shouldInstallFlowDivert:(id)a0;
- (id)getAgentResultsForSelf;
- (id)createFlowDivertSocketHandle;
- (void)addPolicy:(id)a0;
- (id)getExecutableConditions:(id)a0;
- (void)didFailWithError:(id)a0;
- (id)createPolicySession;
- (void)destroyPolicySession;
- (void)didStartWithError:(id)a0;
- (void)startWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)getAgentResults:(id)a0;
- (BOOL)resetPolicies:(BOOL)a0;
- (id)getEffectiveAppRules:(id)a0;
- (void)addPoliciesForAgent:(id)a0 conditions:(id)a1;
- (void)addPoliciesForDivertDNSOnly:(id)a0 domainConditions:(id)a1 divertResult:(id)a2;
- (void)stop;

@end
