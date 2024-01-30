@class _UIBackdropView, UILabel, UIActivityIndicatorView;

@interface WKIndicatorView : UIView

@property (nonatomic) BOOL _hasBeenConfigured;
@property (retain, nonatomic) _UIBackdropView *_backdropView;
@property (retain, nonatomic) UIActivityIndicatorView *_activityIndicatorView;
@property (retain, nonatomic) UILabel *_label;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureViewIfNeeded;
- (void)showViewWithMessage:(id)a0 inHostingView:(id)a1;
- (void)hideViewAndRemoveFromHostingView;

@end
