@class NSArray, UIImage, UIColor;

@interface _TVStarHistogram : UIView

@property (copy, nonatomic) NSArray *starBars;
@property (retain, nonatomic) UIImage *starImage;
@property (retain, nonatomic) UIColor *barEmptyColor;
@property (retain, nonatomic) UIColor *barFillColor;
@property (nonatomic) double lineSpacing;

+ (id)_histogramViewWithElement:(id)a0 existingView:(id)a1;
+ (id)histogramViewWithElement:(id)a0 existingView:(id)a1;

- (BOOL)canBecomeFocused;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
