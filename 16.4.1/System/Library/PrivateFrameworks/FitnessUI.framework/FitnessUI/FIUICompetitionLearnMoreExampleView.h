@class UIColor, NSString, UIImageView, UILabel, UIView, NSNumber;

@interface FIUICompetitionLearnMoreExampleView : UIView {
    UIImageView *_moveRingView;
    UIImageView *_exerciseRingView;
    UIImageView *_standRingView;
    UILabel *_movePercentLabel;
    UILabel *_exercisePercentLabel;
    UILabel *_standPercentLabel;
    UIView *_separatorView;
    UILabel *_totalPointsLabel;
    NSNumber *_previousLayoutWidth;
}

@property (retain, nonatomic) UIColor *separatorViewColor;
@property (retain, nonatomic) UIColor *totalPointsLabelColor;
@property (retain, nonatomic) NSString *totalPointsLabelText;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)layoutForWidth:(double)a0;
- (id)_ringPercentageLabelForPercentage:(double)a0 withMetricColors:(id)a1;
- (id)_ringViewOfType:(long long)a0 withMetricColors:(id)a1 percentage:(double)a2;

@end
