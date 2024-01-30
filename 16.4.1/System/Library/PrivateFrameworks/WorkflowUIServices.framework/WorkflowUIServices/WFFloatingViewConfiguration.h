@interface WFFloatingViewConfiguration : NSObject

@property (nonatomic) long long gradientDirection;
@property (nonatomic) BOOL usePillCornerRadius;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL appliesCornerRadiusDuringTouchDownOnly;
@property (nonatomic) float shadowOpacity;
@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (nonatomic) double shadowRadius;
@property (nonatomic) BOOL colorizesShadow;
@property (nonatomic) double scalingFactor;

+ (id)bannerImageConfiguration;
+ (id)darkMaterialWorkflowConfiguration;
+ (id)lightMaterialWorkflowConfiguration;
+ (id)paletteColorConfiguration;
+ (id)widgetWorkflowConfiguration;

- (id)init;

@end
