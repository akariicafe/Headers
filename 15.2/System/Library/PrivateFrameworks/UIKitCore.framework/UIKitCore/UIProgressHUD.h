@class UIWindow, UIImageView, UIActivityIndicatorView, UILabel;

@interface UIProgressHUD : UIView {
    UIActivityIndicatorView *_progressIndicator;
    UILabel *_progressMessage;
    UIImageView *_doneView;
    UIWindow *_parentWindow;
    struct { unsigned char isShowing : 1; unsigned char isShowingText : 1; unsigned char fixedFrame : 1; unsigned int reserved : 30; } _progressHUDFlags;
}

- (void)done;
- (void)show:(BOOL)a0;
- (void)layoutSubviews;
- (id)initWithWindow:(id)a0;
- (void)setFontSize:(int)a0;
- (void)setShowsText:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showInView:(id)a0;
- (void)setText:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hide;
- (void)dealloc;

@end
