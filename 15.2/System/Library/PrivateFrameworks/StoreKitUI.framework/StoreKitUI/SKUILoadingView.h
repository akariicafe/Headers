@class SKUIColorScheme, NSString, UIActivityIndicatorView, UILabel;

@interface SKUILoadingView : UIView {
    UILabel *_label;
    UIActivityIndicatorView *_spinner;
}

@property (copy, nonatomic) SKUIColorScheme *colorScheme;
@property (copy, nonatomic) NSString *loadingText;

+ (id)defaultLoadingTextWithClientContext:(id)a0;

- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;

@end
