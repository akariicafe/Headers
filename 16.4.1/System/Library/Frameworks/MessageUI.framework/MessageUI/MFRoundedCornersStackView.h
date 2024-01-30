@interface MFRoundedCornersStackView : UIStackView

@property (nonatomic) double cornerRadius;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mf_addArrangedSubviews:(id)a0;
- (void)updateRoundedCorners;

@end
