@interface EKUITableViewCellWithPrimaryAndSecondaryFonts : EKUITableViewCell

+ (void)initialize;
+ (void)_clearFontCaches;
+ (id)scalablePrimaryTextLabelFont;
+ (id)constrainedPrimaryTextLabelFont;
+ (BOOL)allowLargestFontSizesForWidth:(double)a0;
+ (id)timeLabelsFont;
+ (id)secondaryTextLabelFont;
+ (id)primaryTextLabelFontForWidth:(double)a0;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (id)timeLabelsFont;
- (id)primaryTextLabelFont;
- (id)secondaryTextLabelFont;

@end
