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

- (id)initWithContext:(long long)a0;
- (void)reloadData;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)infoButtonPressed:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (double)_leadingMargin;
- (double)_trailingMargin;
- (void)_invalidateLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_buildInfoButton;
- (void)_configureLayout;
- (void)_cancelDeferredDataReload;
- (void)_removeViewsForRebuild;
- (BOOL)_dataSourceHasNoData;
- (void)showNoDataStatus;
- (void)_buildStandardAnnotationViews;
- (void)handleCurrentTimeGesture:(id)a0;
- (void)scheduleDeferredDataReload;

@end
