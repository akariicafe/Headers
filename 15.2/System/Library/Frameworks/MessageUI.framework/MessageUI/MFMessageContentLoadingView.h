@class UILabel, NSString, UIActivityIndicatorView;

@interface MFMessageContentLoadingView : UIView

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (nonatomic, getter=isLoadingIndicatorVisible) BOOL loadingIndicatorVisible;
@property (copy, nonatomic) NSString *loadingTitle;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setLoadingIndicatorVisible:(BOOL)a0 animated:(BOOL)a1;

@end
