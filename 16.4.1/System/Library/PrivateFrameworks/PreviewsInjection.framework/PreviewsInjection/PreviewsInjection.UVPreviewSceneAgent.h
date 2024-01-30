@interface PreviewsInjection.UVPreviewSceneAgent : PreviewsInjection.UVPreviewAgent <UVAgentPreviewSceneServiceProtocol> {
    void /* unknown type, empty encoding */ serviceConnection;
    void /* unknown type, empty encoding */ scene;
    void /* unknown type, empty encoding */ sceneBehavior;
    void /* unknown type, empty encoding */ sceneMessenger;
    void /* unknown type, empty encoding */ currentUpdateResult;
}

- (id)init;
- (void).cxx_destruct;
- (void)generateStaticOutput:(id /* block */)a0;
- (void)performUpdate:(id)a0 sceneContext:(id)a1 replyHandler:(id /* block */)a2;

@end
