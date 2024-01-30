@class UILabel, UIActivityIndicatorView;

@interface LoadingLabel : UIView {
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
}

- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)text;
- (void)sizeToFit;
- (void)setText:(id)a0 showingActivity:(BOOL)a1;

@end
