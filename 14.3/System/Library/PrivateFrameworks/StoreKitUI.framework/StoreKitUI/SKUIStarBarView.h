@class UIColor, UIImage;

@interface SKUIStarBarView : UIView {
    UIImage *_emptyStarImage;
    UIImage *_filledStarImage;
}

@property (copy, nonatomic) UIColor *emptyColor;
@property (copy, nonatomic) UIColor *filledColor;
@property (nonatomic) long long numberOfStars;
@property (nonatomic) double value;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setColoringUsingStyle:(id)a0;

@end
