@interface WKHoverPlatterParameters : PTSettings

@property (nonatomic) BOOL platterEnabledForMouse;
@property (nonatomic) BOOL platterEnabledForHover;
@property (nonatomic) double platterCornerRadius;
@property (nonatomic) double platterPadding;
@property (nonatomic) double platterShadowOpacity;
@property (nonatomic) double platterShadowRadius;
@property (nonatomic) unsigned int platterInflationSize;
@property (nonatomic) BOOL animateBetweenPlatters;
@property (nonatomic) double springMass;
@property (nonatomic) double springStiffness;
@property (nonatomic) double springDamping;
@property (nonatomic) double duration;
@property (nonatomic) double useSpring;
@property (nonatomic) double platterThickness;
@property (nonatomic) double platterZOffset;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
