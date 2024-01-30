@interface PreviewsInjection.UVPreviewSceneAgent : PreviewsInjection.UVPreviewAgent <UVAgentPreviewSceneServiceProtocol> {
    void /* unknown type, empty encoding */ serviceConnection;
    void /* unknown type, empty encoding */ scene;
    void /* unknown type, empty encoding */ sceneBehavior;
    void /* unknown type, empty encoding */ sceneMessenger;
    void /* unknown type, empty encoding */ currentUpdateResult;
}

- (void).cxx_destruct;
- (id)init;
- (void)performUpdate:(id)a0 sceneContext:(id)a1 replyHandler:(id /* block */)a2;
- (void)generateStaticOutput:(id /* block */)a0;

@end
