@interface KNOffscreenCGContextPlaybackSessionConfiguration : KNPlaybackSessionConfiguration {
    struct CGSize { double width; double height; } _boundsSize;
}

- (struct CGColorSpace { } *)colorSpace;
- (id)layerHost;
- (id)description;
- (double)pixelAspectRatio;
- (BOOL)isMetalEnabled;
- (BOOL)isSceneRenderingEnabled;
- (id)configurationWithUpdatedLayerScreenEnvironment:(id)a0;
- (struct CGSize { double x0; double x1; })boundsSize;
- (id)initWithOffscreenCGContextBoundsSize:(struct CGSize { double x0; double x1; })a0;

@end
