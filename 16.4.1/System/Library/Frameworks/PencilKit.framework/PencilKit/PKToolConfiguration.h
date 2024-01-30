@class UIColor, NSString, UIBezierPath, UIImage, NSDictionary, PKFloatRange;

@interface PKToolConfiguration : NSObject <NSCopying> {
    PKFloatRange *_cachedStrokeWeightRange;
}

@property (readonly, nonatomic) BOOL shouldShowOpacityInColorPicker;
@property (readonly, nonatomic) long long inkVersion;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) UIImage *baseImage;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) UIBezierPath *shadowPath;
@property (readonly, nonatomic) BOOL supportsColor;
@property (readonly, nonatomic) UIColor *defaultColor;
@property (readonly, nonatomic) BOOL supportsOpacity;
@property (readonly, nonatomic) BOOL isEraserTool;
@property (nonatomic) double opacityLabelVerticalOffset;
@property (copy, nonatomic) UIImage *bandMaskImage;
@property (copy, nonatomic) UIImage *bandContourImage;
@property (nonatomic) double bandVerticalOffset;
@property (readonly, nonatomic) UIImage *tipMaskImage;
@property (copy, nonatomic) UIImage *tipContourImage;
@property (readonly, nonatomic) UIBezierPath *shadowPathIncludingTip;
@property (readonly, nonatomic) BOOL supportsStrokeWeight;
@property (copy, nonatomic) NSDictionary *strokeWeightsToButtonImages;
@property (readonly, nonatomic) double minimumBandThickness;
@property (readonly, nonatomic) double maximumBandThickness;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } strokeWeightButtonSize;
@property (readonly, nonatomic) UIColor *weightButtonTintColorOverride;
@property (copy, nonatomic) id /* block */ viewControllerProvider;

+ (id)_configurationForFountainPen;
+ (id)_configurationForMonoline;
+ (id)_configurationForWatercolor;
+ (id)_deepCopyStrokeWeightDictionary:(id)a0;
+ (id)defaultColorForInkingToolWithIdentifier:(id)a0;
+ (id)defaultConfigurationForToolWithIdentifier:(id)a0;
+ (id)defaultConfigurationForToolWithIdentifier:(id)a0 inkVersion:(long long)a1;
+ (id)p_assetImageForToolIdentifier:(id)a0 weight:(double)a1 bundle:(id)a2;
+ (id)p_bitmapEraserImageWithWeight:(double)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (id)p_objectEraserImageWithWeight:(double)a0 imageSize:(struct CGSize { double x0; double x1; })a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (double)bandThicknessForStrokeWeight:(double)a0;
- (void)clearTipMaskImageAndShadowPathIncludingTip;
- (id)initWithLocalizedName:(id)a0 baseImage:(id)a1 shadowPath:(id)a2;
- (id)p_strokeWeightRange;
- (void)setMinimumBandThickness:(double)a0 andMaximumBandThickness:(double)a1;
- (void)setSupportsColor:(BOOL)a0 andOpacity:(BOOL)a1;
- (void)setSupportsColor:(BOOL)a0 andOpacity:(BOOL)a1 defaultColor:(id)a2;
- (void)setTipMaskImage:(id)a0 withShadowPathIncludingTip:(id)a1;

@end
