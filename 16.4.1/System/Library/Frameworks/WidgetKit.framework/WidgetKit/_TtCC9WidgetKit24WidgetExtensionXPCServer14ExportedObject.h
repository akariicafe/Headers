@interface _TtCC9WidgetKit24WidgetExtensionXPCServer14ExportedObject : NSObject <WidgetKit.HostToExtensionXPCInterface> {
    void /* unknown type, empty encoding */ previewAgent;
    void /* unknown type, empty encoding */ urlHandlers;
    void /* unknown type, empty encoding */ xpcConnection;
}

- (void)getActivitiesWithRequests:(id)a0 completion:(id /* block */)a1;
- (void)getCurrentDescriptorsWithCompletion:(id /* block */)a0;
- (void)getTimelinesWithRequests:(id)a0 isPreview:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleURLSessionEventsFor:(id)a0 completion:(id /* block */)a1;
- (void)getPlaceholdersWithRequests:(id)a0 completion:(id /* block */)a1;
- (void)attachPreviewAgentWithFrameworkPath:(id)a0 endpoint:(id)a1 handler:(id /* block */)a2;
- (void)performCleanup;
- (id)init;
- (void)getAllCurrentDescriptorsWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
