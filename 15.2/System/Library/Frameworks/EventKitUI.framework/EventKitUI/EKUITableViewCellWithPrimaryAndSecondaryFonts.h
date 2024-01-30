@interface EKUITableViewCellWithPrimaryAndSecondaryFonts : EKUITableViewCell

+ (void)initialize;
+ (id)secondaryTextLabelFont;
+ (id)primaryTextLabelFontForWidth:(double)a0;
+ (id)timeLabelsFont;
+ (void)_clearFontCaches;
+ (id)scalablePrimaryTextLabelFont;
+ (id)constrainedPrimaryTextLabelFont;
+ (BOOL)allowLargestFontSizesForWidth:(double)a0;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (id)primaryTextLabelFont;
- (id)secondaryTextLabelFont;
- (id)timeLabelsFont;

@end
