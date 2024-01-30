@class UIView, NSString, NSArray, STDashedVerticalDivider, UIImage, UIImageView, STUsageReportGraphDataSet, STPaddleView, UILayoutGuide, NSLayoutConstraint, UILabel, STBarView;

@interface STUsageGraphViewController : UIViewController <UIGestureRecognizerDelegate>

@property (readonly) UIView *titleView;
@property (retain) STPaddleView *paddleView;
@property (retain) UIView *paddleConnectorView;
@property (retain) NSLayoutConstraint *paddleViewCenterXConstraint;
@property (retain) NSLayoutConstraint *paddleViewConnectorCenterXConstraint;
@property (copy) NSArray *verticalDividers;
@property (copy) NSArray *horizontalDividers;
@property (copy) NSArray *barViews;
@property (copy) NSArray *barIndicators;
@property (copy) NSArray *barViewHeightConstraints;
@property (copy) NSArray *verticalLayoutGuides;
@property (retain) UILayoutGuide *graphLayoutGuide;
@property (retain) UILayoutGuide *xAxisLabelSectionLayoutGuide;
@property (retain) UILayoutGuide *yAxisLabelSectionLayoutGuide;
@property (retain) UILayoutGuide *barSectionLayoutGuide;
@property (retain) NSLayoutConstraint *yAxisLabelSectionWidthConstraint;
@property (retain) UIImageView *weeklyAverageLine;
@property (retain) UILabel *weeklyAverageLabel;
@property (retain) UILayoutGuide *weeklyAverageLayoutGuide;
@property (retain) NSLayoutConstraint *weeklyAverageHeightConstraint;
@property (retain) NSLayoutConstraint *weeklyAverageTrailingConstraint;
@property (retain) UIView *vibrancyEffectContentView;
@property (retain) STBarView *selectedBarView;
@property (retain) STDashedVerticalDivider *selectedVerticalDivider;
@property (retain, nonatomic) STBarView *pressedBarView;
@property (readonly) UIImage *dashedAverageLineImage;
@property (readonly) double graphHeight;
@property (readonly) BOOL includePaddle;
@property (readonly) BOOL useVibrancy;
@property (retain, nonatomic) STUsageReportGraphDataSet *dataSet;
@property (nonatomic) long long selectedWeekday;
@property (readonly) double maximumYAxisLabelWidth;
@property unsigned long long week;
@property unsigned long long day;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)_selectBarView:(id)a0;
- (id)_closestBarViewToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleLongPressGestureForBarSelection:(id)a0;
- (void)_handleLongPressGestureForPaddle:(id)a0;
- (void)_setUpHorizontalDividerLabels;
- (void)_showPaddleForBarView:(id)a0;
- (void)_stUsageGraphViewControllerCommonInit;
- (void)_updateBarViewsAndIndicators;
- (id)createBarIndicatorWithImageName:(id)a0 barView:(id)a1;
- (id)createBarViewWithDataPoint:(id)a0 layoutGuide:(id)a1 previousView:(id)a2 previousLayoutGuide:(id)a3 layoutGuideWidthMultiplier:(double)a4;
- (id)createDividerWithView:(id)a0 layoutGuide:(id)a1 previousLayoutGuide:(id)a2 layoutGuideWidthMultiplier:(double)a3;
- (id)createFirstDivider;
- (id)createWeeklyAverageLineWithLayoutGuide:(id)a0;
- (id)initWithTitleView:(id)a0 graphHeight:(double)a1 includePaddle:(BOOL)a2 useVibrancy:(BOOL)a3;
- (void)setDataSet:(id)a0 animated:(BOOL)a1;
- (void)setUpBarViewHeightContraints;
- (void)setUpGraphWithLabelFormatter:(id)a0;
- (void)setUpWeeklyAverageLine:(BOOL)a0;
- (void)setYAxisLabelSectionWidth:(double)a0;

@end
