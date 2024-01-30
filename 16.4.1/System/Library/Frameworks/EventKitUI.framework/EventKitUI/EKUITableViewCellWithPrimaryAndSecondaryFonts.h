@interface EKUITableViewCellWithPrimaryAndSecondaryFonts : EKUITableViewCell

+ (void)initialize;
+ (id)constrainedPrimaryTextLabelFont;
+ (void)_clearFontCaches;
+ (BOOL)allowLargestFontSizesForWidth:(double)a0;
+ (id)primaryTextLabelFontForWidth:(double)a0;
+ (id)scalablePrimaryTextLabelFont;
+ (id)secondaryTextLabelFont;
+ (id)timeLabelsFont;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (id)primaryTextLabelFont;
- (id)secondaryTextLabelFont;
- (id)timeLabelsFont;

@end
