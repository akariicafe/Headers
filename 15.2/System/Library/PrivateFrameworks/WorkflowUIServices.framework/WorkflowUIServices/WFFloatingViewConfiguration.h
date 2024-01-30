@interface WFFloatingViewConfiguration : NSObject

@property (nonatomic) long long gradientDirection;
@property (nonatomic) BOOL usePillCornerRadius;
@property (nonatomic) double cornerRadius;
@property (nonatomic) float shadowOpacity;
@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (nonatomic) double shadowRadius;
@property (nonatomic) BOOL colorizesShadow;
@property (nonatomic) double scalingFactor;

+ (id)paletteColorConfiguration;
+ (id)lightMaterialWorkflowConfiguration;
+ (id)darkMaterialWorkflowConfiguration;
+ (id)widgetWorkflowConfiguration;
+ (id)bannerImageConfiguration;

- (id)init;

@end
