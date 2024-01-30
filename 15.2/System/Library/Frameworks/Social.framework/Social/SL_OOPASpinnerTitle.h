@class NSString, UILabel, UIActivityIndicatorView;

@interface SL_OOPASpinnerTitle : UIView {
    UILabel *_titleView;
    UIActivityIndicatorView *_spinner;
}

@property (copy, nonatomic) NSString *title;

- (void)layoutSubviews;
- (void)stopAnimating;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)startAnimating;
- (id)init;
- (void)dealloc;

@end
