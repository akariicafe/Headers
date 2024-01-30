@interface UIAlertControllerVisualStyleAlertCar : UIAlertControllerVisualStyleAlert

- (double)maximumWidth;
- (id)titleLabelColor;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForContainerView:(id)a0;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (double)marginBelowMessageLabelLastBaseline;
- (long long)maximumNumberOfLinesInMessageLabel;
- (long long)maximumNumberOfLinesInTitleLabel;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (BOOL)placementAvoidsKeyboard;
- (id)titleLabelFont;

@end
