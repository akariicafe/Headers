@class UILabel, UIActivityIndicatorView;

@interface LoadingLabel : UIView {
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
}

- (void)sizeToFit;
- (void)setHidden:(BOOL)a0;
- (id)text;
- (id)init;
- (void).cxx_destruct;
- (void)setText:(id)a0 showingActivity:(BOOL)a1;

@end
