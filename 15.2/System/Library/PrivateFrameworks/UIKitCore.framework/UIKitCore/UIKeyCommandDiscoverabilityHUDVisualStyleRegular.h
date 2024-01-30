@class UIColor;

@interface UIKeyCommandDiscoverabilityHUDVisualStyleRegular : UIKeyCommandDiscoverabilityHUDVisualStyle

@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *inputColor;
@property (retain, nonatomic) UIColor *dividerColor;

- (void).cxx_destruct;
- (id)init;
- (id)summaryFont;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })HUDViewInsets;
- (double)summaryXPadding;
- (double)summaryYPadding;
- (double)summaryLineHeight;
- (double)summaryLineSpacing;
- (double)summaryModifiersSpacing;
- (double)summaryDescriptionToModifiersSpacing;
- (double)minimumFontScaleBeforeTruncation;
- (double)maxHUDWidthForWidth:(double)a0;
- (double)maxHUDHeightForHeight:(double)a0;
- (double)columnDividerWidth;
- (double)HUDPageControlBottomMargin;
- (double)columnDividerHeightForHUDHeight:(double)a0;

@end
