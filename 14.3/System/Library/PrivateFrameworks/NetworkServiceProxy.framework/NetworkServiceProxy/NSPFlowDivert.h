@class NEPolicySession, NSPConfiguration, NEFlowDivertFileHandle;

@interface NSPFlowDivert : NEAppProxyProviderContainer

@property (retain) NEPolicySession *policySession;
@property (retain) NEFlowDivertFileHandle *flowDivertControlHandle;
@property (retain) NEFlowDivertFileHandle *flowDivertDataHandle;
@property BOOL started;
@property BOOL shouldResetPolicies;
@property (retain, nonatomic) NSPConfiguration *configuration;

- (void)teardown;
- (void)destroyFlowDivertSocketHandles;
- (void).cxx_destruct;
- (void)addPoliciesForAgent:(id)a0 conditions:(id)a1;
- (id)getAgentResultsForSelf;
- (void)stop;
- (void)addPolicy:(id)a0;
- (id)getEffectiveAppRules:(id)a0;
- (void)destroyPolicySession;
- (void)didFailWithError:(id)a0;
- (BOOL)shouldInstallFlowDivert:(id)a0;
- (void)didStartWithError:(id)a0;
- (id)getExecutableConditions:(id)a0;
- (id)getAgentResults:(id)a0;
- (BOOL)resetPolicies:(BOOL)a0;
- (id)initWithDelegate:(id)a0 providerClass:(Class)a1 configuration:(id)a2;
- (id)createPolicySession;
- (void)addPoliciesForDivertDNSOnly:(id)a0 domainConditions:(id)a1 divertResult:(id)a2;
- (id)createFlowDivertSocketHandles;
- (void)startWithOptions:(id)a0 completionHandler:(id /* block */)a1;

@end
