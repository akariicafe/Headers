@class UIViewPropertyAnimator, NSNumberFormatter;

@interface ASVPercentLozenge : UILabel

@property (retain, nonatomic) NSNumberFormatter *percentageFormatter;
@property (retain, nonatomic) UIViewPropertyAnimator *percentLozengeAnimator;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)setText:(id)a0;
- (void)setHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setPercentage:(float)a0;
- (id)lozengeFont;

@end
