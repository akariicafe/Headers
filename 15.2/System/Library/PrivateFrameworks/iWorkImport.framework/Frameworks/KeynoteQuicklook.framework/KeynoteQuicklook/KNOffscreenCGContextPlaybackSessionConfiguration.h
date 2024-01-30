@interface KNOffscreenCGContextPlaybackSessionConfiguration : KNPlaybackSessionConfiguration {
    struct CGSize { double width; double height; } _boundsSize;
}

- (struct CGColorSpace { } *)colorSpace;
- (id)description;
- (double)pixelAspectRatio;
- (id)layerHost;
- (BOOL)isMetalEnabled;
- (BOOL)isSceneRenderingEnabled;
- (id)configurationWithUpdatedLayerScreenEnvironment;
- (struct CGSize { double x0; double x1; })boundsSize;
- (id)initWithOffscreenCGContextBoundsSize:(struct CGSize { double x0; double x1; })a0;

@end
