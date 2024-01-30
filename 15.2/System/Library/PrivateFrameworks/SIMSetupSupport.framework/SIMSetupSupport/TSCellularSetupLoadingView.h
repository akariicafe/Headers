@class UILabel, UIActivityIndicatorView;

@interface TSCellularSetupLoadingView : UIView

@property (retain, nonatomic) UILabel *firstLabel;
@property (retain, nonatomic) UILabel *secondLabel;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (nonatomic) BOOL isRemotePlan;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setupLabels;
- (void)_setupActivityIndicator;
- (void)spinnerStopAnimating;
- (void)spinnerStartAnimating;

@end
