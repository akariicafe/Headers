@class UIViewPropertyAnimator, NSNumberFormatter;

@interface ASVPercentLozenge : UILabel

@property (retain, nonatomic) NSNumberFormatter *percentageFormatter;
@property (retain, nonatomic) UIViewPropertyAnimator *percentLozengeAnimator;

- (void)sizeToFit;
- (void)setText:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setPercentage:(float)a0;
- (id)lozengeFont;

@end
