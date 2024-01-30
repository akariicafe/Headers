@interface WidgetKit.WidgetExtensionContext : WidgetKit._AvocadoExtensionBaseContext <WidgetKit.HostToExtensionXPCInterface> {
    void /* unknown type, empty encoding */ previewAgent;
    void /* unknown type, empty encoding */ urlHandlers;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithInputItems:(id)a0 contextUUID:(id)a1;
- (id)initWithInputItems:(id)a0;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void)invalidate;
- (void)getDescriptorsWithCompletion:(id /* block */)a0;
- (void)performCleanup;
- (void)getPlaceholdersWithEnvironment:(id)a0 for:(id)a1 completion:(id /* block */)a2;
- (void)handleURLSessionEventsFor:(id)a0 completion:(id /* block */)a1;
- (void)attachPreviewAgentWithFrameworkPath:(id)a0 endpoint:(id)a1 handler:(id /* block */)a2;
- (void)getTimelineFor:(id)a0 into:(id)a1 environment:(id)a2 isPreview:(BOOL)a3 completion:(id /* block */)a4;

@end
