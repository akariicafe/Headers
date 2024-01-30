@class NSArray, UIColor;

@interface DOCChainedTagsView : UIView

@property (retain, nonatomic) NSArray *tagColors;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double knockOutBorderWidth;
@property (nonatomic) unsigned long long spacing;
@property (nonatomic) double tagDimension;
@property (nonatomic) struct CGPoint { double x; double y; } alignmentOffset;

+ (double)horizontalSpacingForSpace:(unsigned long long)a0 tagDiameter:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeForDiameter:(double)a0 horizontalSpacing:(unsigned long long)a1 tags:(id)a2;
+ (void)drawTagsInContext:(struct CGContext { } *)a0 diameter:(double)a1 horizontalSpacing:(unsigned long long)a2 layoutDirection:(long long)a3 tagColors:(id)a4 ringColor:(id)a5 borderColor:(id)a6 knockOutBorderWidth:(double)a7;

- (void)_commonInit;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (void)sizeToFit;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)horizontalSpacing;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setknockOutBorderWidth:(double)a0;

@end
