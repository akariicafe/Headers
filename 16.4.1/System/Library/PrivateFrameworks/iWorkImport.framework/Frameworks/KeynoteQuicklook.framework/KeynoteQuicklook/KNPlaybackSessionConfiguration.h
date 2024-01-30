@protocol KNPlaybackLayerHost;

@interface KNPlaybackSessionConfiguration : NSObject

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } boundsSize;
@property (readonly, nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly, nonatomic) BOOL isWideGamut;
@property (readonly, nonatomic) double pixelAspectRatio;
@property (readonly, nonatomic) BOOL isRealtime;
@property (readonly, nonatomic) BOOL isMetalEnabled;
@property (readonly, nonatomic) BOOL isSceneRenderingEnabled;
@property (readonly, nonatomic) id<KNPlaybackLayerHost> layerHost;

+ (BOOL)canEnableMetal;
+ (id)configurationWithLayerHost:(id)a0 renderingMode:(long long)a1;
+ (id)configurationWithOffscreenCGContextBoundsSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)isColorSpaceWideGamut:(struct CGColorSpace { } *)a0;

- (double)canvasViewScaleForUnscaledSize:(struct CGSize { double x0; double x1; })a0;
- (id)configurationWithUpdatedLayerScreenEnvironment;
- (id)initSuperclass;

@end
