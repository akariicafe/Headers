@class UILabel, PKPayLaterInstallmentsMonth;

@interface PKPayLaterCalendarMonthHeaderView : UIView {
    PKPayLaterInstallmentsMonth *_installmentsMonth;
    UILabel *_totalDueLabel;
    UILabel *_totalDueAmountLabel;
    UILabel *_totalPaidLabel;
    UILabel *_totalPaidAmountLabel;
}

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)_layoutLabelsSideBySide:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (double)_layoutLabelsStacked:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (id)initWithInstallmentsMonth:(id)a0;

@end
