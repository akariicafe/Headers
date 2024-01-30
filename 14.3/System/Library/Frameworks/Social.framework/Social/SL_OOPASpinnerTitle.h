@class NSString, UILabel, UIActivityIndicatorView;

@interface SL_OOPASpinnerTitle : UIView {
    UILabel *_titleView;
    UIActivityIndicatorView *_spinner;
}

@property (copy, nonatomic) NSString *title;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)stopAnimating;
- (void)startAnimating;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
