@protocol GTMTLDiagnosticsService;

@interface GTMTLDiagnosticsServiceXPCDispatcher : GTXPCDispatcher <GTMTLDiagnosticsServiceXPCDispatcher> {
    id<GTMTLDiagnosticsService> _service;
}

- (void).cxx_destruct;
- (void)deregisterObserver_:(id)a0 replyConnection:(id)a1;
- (id)initWithService:(id)a0 properties:(id)a1;
- (void)raiseRuntimeIssue_:(id)a0 replyConnection:(id)a1;
- (void)registerObserver_:(id)a0 replyConnection:(id)a1;

@end
