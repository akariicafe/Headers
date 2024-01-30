@interface PRMutablePosterRenderingConfiguration : PRPosterRenderingConfiguration

@property (nonatomic, getter=isDepthEffectDisabled) BOOL depthEffectDisabled;
@property (nonatomic, getter=isParallaxEnabled) BOOL parallaxEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDepthEffectDisabled:(BOOL)a0 parallaxEnabled:(BOOL)a1;

@end
