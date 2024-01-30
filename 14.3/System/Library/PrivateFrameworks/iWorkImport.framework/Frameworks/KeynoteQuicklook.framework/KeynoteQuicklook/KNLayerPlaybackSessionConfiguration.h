@class KNAnimationScreenEnvironment;
@protocol KNPlaybackLayerHost;

@interface KNLayerPlaybackSessionConfiguration : KNPlaybackSessionConfiguration {
    KNAnimationScreenEnvironment *_screenEnvironment;
    BOOL _isMetalEnabled;
    BOOL _isSceneRenderingEnabled;
    id<KNPlaybackLayerHost> _layerHost;
}

- (struct CGColorSpace { } *)colorSpace;
- (id)layerHost;
- (void).cxx_destruct;
- (id)description;
- (double)pixelAspectRatio;
- (BOOL)isMetalEnabled;
- (BOOL)isSceneRenderingEnabled;
- (id)configurationWithUpdatedLayerScreenEnvironment:(id)a0;
- (struct CGSize { double x0; double x1; })boundsSize;
- (id)initWithLayerHost:(id)a0 screenEnvironment:(id)a1 isMetalEnabled:(BOOL)a2 isSceneRenderingEnabled:(BOOL)a3;

@end
