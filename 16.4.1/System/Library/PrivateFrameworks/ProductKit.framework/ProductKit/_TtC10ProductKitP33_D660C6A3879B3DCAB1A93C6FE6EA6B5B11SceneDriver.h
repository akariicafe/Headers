@interface _TtC10ProductKitP33_D660C6A3879B3DCAB1A93C6FE6EA6B5B11SceneDriver : NSObject <SCNSceneRendererDelegate> {
    void /* unknown type, empty encoding */ scene;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ camera;
    void /* unknown type, empty encoding */ personalizedAssetMaterial;
    void /* unknown type, empty encoding */ token;
    void /* unknown type, empty encoding */ timeObserverToken;
    void /* unknown type, empty encoding */ textureCache;
    void /* unknown type, empty encoding */ videoMaterial;
    void /* unknown type, empty encoding */ currentPlaybackState;
    void /* unknown type, empty encoding */ featureStartedHandler;
    void /* unknown type, empty encoding */ featureCompletedHandler;
    void /* unknown type, empty encoding */ engageDuration;
    void /* unknown type, empty encoding */ loopDuration;
    void /* unknown type, empty encoding */ croppedVideoSize;
    void /* unknown type, empty encoding */ originalVideoSize;
    void /* unknown type, empty encoding */ yOffset;
    void /* unknown type, empty encoding */ currentIOSurface;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)renderer:(id)a0 didRenderScene:(id)a1 atTime:(double)a2;
- (void)handlePlayerItemFinished:(id)a0;

@end
