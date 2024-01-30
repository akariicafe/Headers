@class NSLayoutConstraint;

@interface HKDynamicButton : UIButton

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;

- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (void)_updateForCurrentSizeCategory;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (double)_buttonLabelHeight;

@end
