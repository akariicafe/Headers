@interface UIAlertControllerVisualStyleAlertCar : UIAlertControllerVisualStyleAlert

- (double)maximumWidth;
- (double)marginBelowLastLabelLastBaseline;
- (long long)maximumNumberOfLinesInTitleLabel;
- (double)marginAboveTitleLabelFirstBaseline;
- (long long)maximumNumberOfLinesInMessageLabel;
- (double)marginBelowMessageLabelLastBaseline;
- (id)titleLabelFont;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForContainerView:(id)a0;
- (id)messageLabelFont;
- (id)titleLabelColor;
- (id)messageLabelColor;
- (BOOL)placementAvoidsKeyboard;

@end
