@interface MDLPhysicallyPlausibleLight : MDLLight

@property (nonatomic) float attenuationFalloffExponent;
@property (nonatomic) struct CGColor { } *color;
@property (nonatomic) float lumens;
@property (nonatomic) float innerConeAngle;
@property (nonatomic) float outerConeAngle;
@property (nonatomic) float attenuationStartDistance;
@property (nonatomic) float attenuationEndDistance;

- (id)init;
- (void)setColorByTemperature:(float)a0;

@end
