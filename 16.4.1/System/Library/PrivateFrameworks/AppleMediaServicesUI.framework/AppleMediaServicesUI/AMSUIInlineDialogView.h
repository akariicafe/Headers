@interface AMSUIInlineDialogView : AMSUICommonView

- (id)_contentView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (BOOL)_layoutHeightDependsOnWidth;
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
- (void)_setLocalOverrideTraitCollection:(id)a0;

@end
