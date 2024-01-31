@interface UIImageAccessibility : __UIImageAccessibility_super

+ (id)imageWithContentsOfFile:(id)a0;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;
+ (id)imageAtPath:(id)a0;
+ (id)imageNamed:(id)a0 inBundle:(id)a1 compatibleWithTraitCollection:(id)a2;
+ (id)imageWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(long long)a2;
+ (id)kitImageNamed:(id)a0;
+ (BOOL)_isSerializableAccessibilityElement;

- (id)accessibilityLabel;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)a0;
- (struct CGImage { } *)CGImage;
- (void)encodeWithCoder:(id)a0;
- (id)accessibilityIdentifier;
- (id)initWithCoder:(id)a0;
- (id)_bezeledImageWithShadowRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 fillRed:(double)a4 green:(double)a5 blue:(double)a6 alpha:(double)a7 drawShadow:(BOOL)a8;
- (id)_doubleBezeledImageWithExteriorShadowRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 interiorShadowRed:(double)a4 green:(double)a5 blue:(double)a6 alpha:(double)a7 fillRed:(double)a8 green:(double)a9 blue:(double)a10 alpha:(double)a11;
- (id)_flatImageWithColor:(id)a0;
- (id)_flatImageWithWhite:(double)a0 alpha:(double)a1;
- (id)_imageScaledToProportion:(double)a0 interpolationQuality:(int)a1;
- (id)_imageTintedWithColor:(id)a0 renderingMode:(long long)a1 withUpdatedCGImage:(BOOL)a2;
- (id)imageFlippedForRightToLeftLayoutDirection;
- (id)imageWithAlignmentRectInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)imageWithRenderingMode:(long long)a0;
- (id)initWithContentsOfFile:(id)a0 cache:(BOOL)a1;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 resizingMode:(long long)a1;
- (id)_accessibilityPhotoDescription;

@end
