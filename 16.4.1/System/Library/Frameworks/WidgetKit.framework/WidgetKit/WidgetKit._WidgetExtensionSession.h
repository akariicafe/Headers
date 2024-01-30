@interface WidgetKit._WidgetExtensionSession : _TtCs12_SwiftObject <WidgetKit.WidgetExtensionSession> {
    void /* unknown type, empty encoding */ extensionIdentity;
    void /* unknown type, empty encoding */ extensionProcess;
    void /* unknown type, empty encoding */ sessionUUID;
    void /* unknown type, empty encoding */ loggingIdentifier;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ watchdogTimeoutQueue;
    void /* unknown type, empty encoding */ watchdogTimeoutProvider;
    void /* unknown type, empty encoding */ rbsInterface;
    void /* unknown type, empty encoding */ suspensionObserver;
    void /* unknown type, empty encoding */ shouldTakeExtensionAssertion;
    void /* unknown type, empty encoding */ widgetExtensionAssertion;
    void /* unknown type, empty encoding */ bundleProvider;
    void /* unknown type, empty encoding */ lock_invalidated;
    void /* unknown type, empty encoding */ connection;
}

- (void)getCurrentDescriptorsWithCompletion:(id /* block */)a0;
- (void)getTimelinesWithRequests:(id)a0 isPreview:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleURLSessionEventsFor:(id)a0 completion:(id /* block */)a1;
- (void)getPlaceholdersWithRequests:(id)a0 completion:(id /* block */)a1;
- (void)getTimelineFor:(id)a0 into:(id)a1 environment:(id)a2 isPreview:(BOOL)a3 completion:(id /* block */)a4;
- (void)attachPreviewAgentWithFrameworkPath:(id)a0 endpoint:(id)a1 handler:(id /* block */)a2;
- (void)getActivitiesWithRequests:(id)a0 completion:(id /* block */)a1;
- (void)getDescriptorsWithCompletion:(id /* block */)a0;
- (void)getAllCurrentDescriptorsWithCompletion:(id /* block */)a0;
- (void)getPlaceholdersWithEnvironment:(id)a0 for:(id)a1 completion:(id /* block */)a2;
- (void)invalidate;
- (void)getPlaceholdersForRequests:(id)a0 inEnvironment:(id)a1 completion:(id /* block */)a2;

@end
