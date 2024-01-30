@class PKSpendingSummaryChartView, UIImageView, UIImage, UILabel, PKSpendingSummary;

@interface PKSpendingSummaryView : UIView {
    UILabel *_totalAmount;
    UILabel *_spendingLabel;
    UIImageView *_upOrDownImage;
    UILabel *_percentageLabel;
    PKSpendingSummaryChartView *_chartView;
    PKSpendingSummaryChartView *_chartViewToFadeOut;
    BOOL _isTemplateLayout;
    PKSpendingSummary *_summary;
}

@property (retain, nonatomic) UIImage *upImage;
@property (retain, nonatomic) UIImage *downImage;
@property (nonatomic, getter=isVisible) BOOL visible;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_createSubviews;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithSummary:(id)a0 presentationStyle:(unsigned long long)a1;
- (BOOL)_needsLayoutWithSummary:(id)a0;

@end
