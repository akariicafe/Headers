@interface UIImageAccessibility : __UIImageAccessibility_super

+ (id)imageWithContentsOfFile:(id)a0;
+ (id)imageWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(long long)a2;
+ (Class)safeCategoryBaseClass;
+ (id)kitImageNamed:(id)a0;
+ (id)safeCategoryTargetClassName;
+ (id)imageAtPath:(id)a0;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)imageNamed:(id)a0 inBundle:(id)a1 compatibleWithTraitCollection:(id)a2;
+ (BOOL)_isSerializableAccessibilityElement;

- (id)_doubleBezeledImageWithExteriorShadowRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 interiorShadowRed:(double)a4 green:(double)a5 blue:(double)a6 alpha:(double)a7 fillRed:(double)a8 green:(double)a9 blue:(double)a10 alpha:(double)a11;
- (id)_bezeledImageWithShadowRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 fillRed:(double)a4 green:(double)a5 blue:(double)a6 alpha:(double)a7 drawShadow:(BOOL)a8;
- (id)_imageTintedWithColor:(id)a0 flatten:(BOOL)a1 renderingMode:(long long)a2 withUpdatedCGImage:(BOOL)a3;
- (void)encodeWithCoder:(id)a0;
- (id)_imageScaledToProportion:(double)a0 interpolationQuality:(int)a1;
- (id)initWithContentsOfFile:(id)a0;
- (id)accessibilityIdentifier;
- (id)imageFlippedForRightToLeftLayoutDirection;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 resizingMode:(long long)a1;
- (struct CGImage { } *)CGImage;
- (id)initWithCoder:(id)a0;
- (id)_accessibilityPhotoDescription;
- (id)_flatImageWithWhite:(double)a0 alpha:(double)a1;
- (void)dealloc;
- (id)imageWithAlignmentRectInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)accessibilityLabel;
- (id)initWithContentsOfFile:(id)a0 cache:(BOOL)a1;
- (id)_flatImageWithColor:(id)a0;
- (id)imageWithRenderingMode:(long long)a0;

@end
