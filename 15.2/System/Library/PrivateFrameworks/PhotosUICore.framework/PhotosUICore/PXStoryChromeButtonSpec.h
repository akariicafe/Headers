@class UIColor, NSDictionary, PXExtendedTraitCollection;

@interface PXStoryChromeButtonSpec : NSObject

@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly, nonatomic) struct CGSize { double width; double height; } defaultImageSize;
@property (readonly, nonatomic) double systemImageSizeWithoutBackground;
@property (readonly, nonatomic) double systemImageSizeWithBackground;
@property (readonly, nonatomic) long long systemImageWeightWithoutBackground;
@property (readonly, nonatomic) long long systemImageWeightWithBackground;
@property (readonly, nonatomic) long long systemImageScale;
@property (readonly, nonatomic) struct CGSize { double width; double height; } badgeImageSize;
@property (readonly, nonatomic) long long badgeSystemImageWeight;
@property (readonly, nonatomic) UIColor *defaultTintColor;
@property (readonly, nonatomic) UIColor *defaultFocusedTintColor;
@property (readonly, nonatomic) NSDictionary *labelAttributes;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } labelPadding;
@property (readonly, nonatomic) long long blurEffectStyle;
@property (readonly, nonatomic) long long highlightedBlurEffectStyle;
@property (readonly, nonatomic) long long textOnlyBlurEffectStyle;
@property (readonly, nonatomic) double roundedRectCornerRadius;
@property (readonly, nonatomic) double shadowRadius;
@property (readonly, nonatomic) struct CGSize { double width; double height; } focusedShadowOffset;
@property (readonly, nonatomic) double focusedShadowOpacity;
@property (readonly, nonatomic) BOOL shouldDimWhenHighlighted;

- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0;
- (id)init;

@end
