@interface PVVideoCompositingExporter : PVVideoCompositing

- (id)init;
- (id)requiredPixelBufferAttributesForRenderContext;
- (void)setupTextureFactories;
- (void)setupEffectScheduler;
- (id)preferredDestinationPixelBufferFormat;

@end
