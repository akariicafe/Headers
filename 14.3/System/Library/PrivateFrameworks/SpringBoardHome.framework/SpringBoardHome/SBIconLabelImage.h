@class UIImage, SBIconLabelImageParameters;

@interface SBIconLabelImage : UIImage {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _alignmentRectInsets;
    double _baselineOffsetFromBottom;
}

@property (retain, nonatomic) UIImage *legibilityImage;
@property (readonly, copy, nonatomic) SBIconLabelImageParameters *parameters;

+ (BOOL)needsLegibilityImageForParameters:(id)a0;
+ (BOOL)attributedText:(id)a0 fitsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 textRect:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
+ (id)imageWithParameters:(id)a0 pool:(id)a1 legibilityPool:(id)a2;
+ (id)legibilityImageForIconLabelImage:(id)a0 parameters:(id)a1 pool:(id)a2;
+ (void)applyKerning:(double)a0 whitespaceKerning:(double)a1 toAttributedString:(id)a2;
+ (struct CGSize { double x0; double x1; })_maxLegibilityImageSizeForLabelSize:(struct CGSize { double x0; double x1; })a0;
+ (id)imageWithParameters:(id)a0;
+ (double)legibilityStrengthForLegibilityStyle:(long long)a0;

- (void).cxx_destruct;
- (double)baselineOffsetFromBottom;
- (id)_initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(long long)a2 parameters:(id)a3 alignmentRectInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4 baselineOffsetFromBottom:(double)a5;
- (id)description;
- (BOOL)hasBaseline;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;

@end
