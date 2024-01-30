@interface WidgetKit.WidgetExtensionContext : WidgetKit._AvocadoExtensionBaseContext <WidgetKit.HostToExtensionXPCInterface> {
    void /* unknown type, empty encoding */ previewAgent;
    void /* unknown type, empty encoding */ urlHandlers;
}

- (id)initWithInputItems:(id)a0 contextUUID:(id)a1;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void)performCleanup;
- (void)attachPreviewAgentWithFrameworkPath:(id)a0 endpoint:(id)a1 handler:(id /* block */)a2;
- (void)getDescriptorsWithCompletion:(id /* block */)a0;
- (void)getPlaceholdersWithEnvironment:(id)a0 for:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)getTimelinesWithRequests:(id)a0 isPreview:(BOOL)a1 completion:(id /* block */)a2;
- (void)invalidate;
- (id)initWithInputItems:(id)a0;
- (void)handleURLSessionEventsFor:(id)a0 completion:(id /* block */)a1;

@end
