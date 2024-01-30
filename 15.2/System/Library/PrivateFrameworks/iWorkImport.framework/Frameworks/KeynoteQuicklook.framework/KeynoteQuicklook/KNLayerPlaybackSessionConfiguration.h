@class KNAnimationScreenEnvironment;
@protocol KNPlaybackLayerHost;

@interface KNLayerPlaybackSessionConfiguration : KNPlaybackSessionConfiguration {
    KNAnimationScreenEnvironment *_screenEnvironment;
    BOOL _isMetalEnabled;
    BOOL _isSceneRenderingEnabled;
    id<KNPlaybackLayerHost> _layerHost;
    struct CGSize { double width; double height; } _boundsSize;
}

- (struct CGColorSpace { } *)colorSpace;
- (id)description;
- (double)pixelAspectRatio;
- (void).cxx_destruct;
- (id)layerHost;
- (BOOL)isMetalEnabled;
- (BOOL)isSceneRenderingEnabled;
- (id)configurationWithUpdatedLayerScreenEnvironment;
- (struct CGSize { double x0; double x1; })boundsSize;
- (id)initWithLayerHost:(id)a0 isMetalEnabled:(BOOL)a1 isSceneRenderingEnabled:(BOOL)a2;

@end
