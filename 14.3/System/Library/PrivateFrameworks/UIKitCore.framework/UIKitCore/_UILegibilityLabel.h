@class NSString, UIFont;

@interface _UILegibilityLabel : _UILegibilityView

@property (copy, nonatomic) NSString *string;
@property (retain, nonatomic) UIFont *font;
@property (readonly, nonatomic) BOOL usesSecondaryColor;
@property (readonly, nonatomic) double baselineOffset;

- (void)updateImage;
- (id)initWithSettings:(id)a0 strength:(double)a1 string:(id)a2 font:(id)a3 options:(long long)a4;
- (id)initWithSettings:(id)a0 strength:(double)a1 string:(id)a2 font:(id)a3;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
