@class HKElectrocardiogramAxisView, UIScrollView, HKElectrocardiogramChartView, HKElectrocardiogramInfoView;

@interface HKElectrocardiogramChartTableViewCell : UITableViewCell

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) HKElectrocardiogramChartView *chartView;
@property (retain, nonatomic) HKElectrocardiogramAxisView *axisView;
@property (retain, nonatomic) HKElectrocardiogramInfoView *infoView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } gridSize;

- (void)layoutMarginsDidChange;
- (void).cxx_destruct;
- (void)_setUpScrollViewContent;
- (void)_setUpUI;
- (void)_updateMargins;
- (id)initWithGridSize:(struct CGSize { double x0; double x1; })a0 reuseIdentifier:(id)a1;

@end
