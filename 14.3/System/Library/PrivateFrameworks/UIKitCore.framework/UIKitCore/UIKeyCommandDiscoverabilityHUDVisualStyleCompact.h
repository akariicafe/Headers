@class UIFont;

@interface UIKeyCommandDiscoverabilityHUDVisualStyleCompact : UIKeyCommandDiscoverabilityHUDVisualStyleRegular {
    UIFont *_summaryFont;
}

- (void).cxx_destruct;
- (id)summaryFont;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })HUDViewInsets;
- (double)summaryXPadding;
- (double)summaryModifiersSpacing;
- (double)summaryDescriptionToModifiersSpacing;
- (double)maxHUDWidthForWidth:(double)a0;
- (double)HUDPageControlBottomMargin;

@end
