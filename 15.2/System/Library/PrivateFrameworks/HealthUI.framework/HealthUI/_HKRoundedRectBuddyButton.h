@interface _HKRoundedRectBuddyButton : UIButton

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setUpConstraints;
- (void)_updateForContentSizeCategory:(id)a0;

@end
