@interface PRImmutablePosterRenderingConfiguration : PRPosterRenderingConfiguration {
    BOOL _depthEffectDisabled;
    BOOL _parallaxEnabled;
}

- (BOOL)isParallaxEnabled;
- (id)initWithDepthEffectDisabled:(BOOL)a0 parallaxEnabled:(BOOL)a1;
- (BOOL)isDepthEffectDisabled;

@end
