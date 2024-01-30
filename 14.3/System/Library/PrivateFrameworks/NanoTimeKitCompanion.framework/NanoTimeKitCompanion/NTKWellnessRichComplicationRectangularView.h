@class NSArray, UIImageView, NTKColoringLabel, UIView, NSLayoutConstraint, NTKWellnessRichComplicationChartView;

@interface NTKWellnessRichComplicationRectangularView : NTKRichComplicationRectangularBaseView

@property (retain, nonatomic) UIView *chartTitleView;
@property (retain, nonatomic) NTKColoringLabel *titleLabel;
@property (retain, nonatomic) NTKColoringLabel *moveLabel;
@property (retain, nonatomic) UIImageView *moveGlyphView;
@property (retain, nonatomic) NSLayoutConstraint *moveGlyphTitleLabelTrailingConstraint;
@property (retain, nonatomic) NTKColoringLabel *exerciseLabel;
@property (retain, nonatomic) UIImageView *exerciseGlyphView;
@property (retain, nonatomic) NTKColoringLabel *standLabel;
@property (retain, nonatomic) UIImageView *standGlyphView;
@property (retain, nonatomic) NTKWellnessRichComplicationChartView *chartView;
@property (retain, nonatomic) NSArray *flatViews;
@property (retain, nonatomic) NSArray *accentViews;

- (void)setNeedsLayout;
- (void)_setupViews;
- (id)init;
- (void).cxx_destruct;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_setAccentViewsVisibility:(BOOL)a0;
- (void)_updateViews:(id)a0 withFilter:(id)a1;

@end
