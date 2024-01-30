@class UILabel, UIActivityIndicatorView;

@interface LoadingLabel : UIView {
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
}

- (id)init;
- (void).cxx_destruct;
- (void)sizeToFit;
- (id)text;
- (void)setHidden:(BOOL)a0;
- (void)setText:(id)a0 showingActivity:(BOOL)a1;

@end
