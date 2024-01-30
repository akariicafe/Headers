@class PRXLabel, UIActivityIndicatorView, NSLayoutConstraint;

@interface PRXActivityStatusView : UIView

@property (readonly, nonatomic) NSLayoutConstraint *activityIndicatorVerticalConstraint;
@property (readonly, nonatomic) PRXLabel *statusLabel;
@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
