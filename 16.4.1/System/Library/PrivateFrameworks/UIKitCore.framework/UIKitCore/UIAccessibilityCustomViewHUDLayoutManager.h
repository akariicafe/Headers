@interface UIAccessibilityCustomViewHUDLayoutManager : UIAccessibilityHUDLayoutManager

- (void)layoutSubviewsOfHUD:(id)a0;
- (struct CGSize { double x0; double x1; })minimumUnscaledSizeForHUD:(id)a0 preferredLabelSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })preferredSizeForLabelInHUD:(id)a0 maximumWidth:(double)a1;

@end
