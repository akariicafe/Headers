@class NSLayoutConstraint;

@interface HKDynamicButton : UIButton

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;

- (void)_updateForCurrentSizeCategory;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (double)_buttonLabelHeight;

@end
