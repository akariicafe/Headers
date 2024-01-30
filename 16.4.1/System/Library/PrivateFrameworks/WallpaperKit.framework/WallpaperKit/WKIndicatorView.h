@class _UIBackdropView, UILabel, UIActivityIndicatorView;

@interface WKIndicatorView : UIView

@property (nonatomic) BOOL _hasBeenConfigured;
@property (retain, nonatomic) _UIBackdropView *_backdropView;
@property (retain, nonatomic) UIActivityIndicatorView *_activityIndicatorView;
@property (retain, nonatomic) UILabel *_label;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_configureViewIfNeeded;
- (void)hideViewAndRemoveFromHostingView;
- (void)showViewWithMessage:(id)a0 inHostingView:(id)a1;

@end
