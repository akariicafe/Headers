@class NSLayoutConstraint, _HKDateContentLayout, NSTimer, _HKAnnotationColumnLayout, _HKBodyMarginsLayout, UIButton;
@protocol HKInteractiveChartAnnotationViewDataSource, HKInteractiveChartAnnotationViewDelegate;

@interface HKInteractiveChartAnnotationView : UIView

@property (retain, nonatomic) _HKAnnotationColumnLayout *columnLayout;
@property (retain, nonatomic) _HKDateContentLayout *dateContentLayout;
@property (retain, nonatomic) _HKBodyMarginsLayout *bodyMarginsLayout;
@property (retain, nonatomic) UIButton *infoButton;
@property (nonatomic) long long context;
@property (retain, nonatomic) NSLayoutConstraint *leadingMarginConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingMarginConstraint;
@property (weak, nonatomic) NSTimer *deferredNoDataTimer;
@property (weak, nonatomic) id<HKInteractiveChartAnnotationViewDataSource> dataSource;
@property (weak, nonatomic) id<HKInteractiveChartAnnotationViewDelegate> delegate;
@property (nonatomic) BOOL showsInfoButton;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)reloadData;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithContext:(long long)a0;
- (void)_invalidateLayout;
- (void).cxx_destruct;
- (void)_configureLayout;
- (double)_leadingMargin;
- (void)infoButtonPressed:(id)a0;
- (id)_buildInfoButton;
- (void)_buildStandardAnnotationViews;
- (void)_cancelDeferredDataReload;
- (BOOL)_dataSourceHasNoData;
- (void)_removeViewsForRebuild;
- (void)_updateRightMarginViewWithInfoButton;
- (void)handleCurrentTimeGesture:(id)a0;
- (void)scheduleDeferredDataReload;
- (void)showNoDataStatus;

@end
