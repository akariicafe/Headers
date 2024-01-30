@interface PreviewsInjection.UVPreviewNonUIAgent : PreviewsInjection.UVPreviewAgent <UVAgentPreviewNonUIServiceProtocol> {
    void /* unknown type, empty encoding */ serviceConnection;
    void /* unknown type, empty encoding */ entryPoints;
}

- (id)init;
- (void).cxx_destruct;
- (void)performUpdate:(id)a0 replyHandler:(id /* block */)a1;

@end
