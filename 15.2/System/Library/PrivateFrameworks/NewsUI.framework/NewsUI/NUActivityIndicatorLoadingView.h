@class UILabel, NSString, UIActivityIndicatorView;

@interface NUActivityIndicatorLoadingView : UIView <NULoadingViewProviding>

@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (readonly, nonatomic) UILabel *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithActivityIndicatorStyle:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)loadingViewStartAnimating;
- (void)loadingViewStopAnimating;
- (id)initWithText:(id)a0 activityIndicatorStyle:(long long)a1;

@end
