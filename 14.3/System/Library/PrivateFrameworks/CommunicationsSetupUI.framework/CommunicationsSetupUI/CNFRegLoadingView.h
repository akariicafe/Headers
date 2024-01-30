@class NSString, UILabel, UIActivityIndicatorView;

@interface CNFRegLoadingView : UIView {
    UILabel *_label;
    UIActivityIndicatorView *_spinner;
}

@property (copy, nonatomic) NSString *message;

- (void)setMessage:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)message;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
