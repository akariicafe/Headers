@class NSLayoutConstraint;

@interface HKDynamicButton : UIButton

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateForCurrentSizeCategory;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (double)_buttonLabelHeight;

@end
