@class UILabel, NSString, UIActivityIndicatorView;

@interface PXContentLoadingPlaceholderView : UIView

@property (retain, nonatomic) UILabel *statusLabel;
@property (readonly, nonatomic) UIActivityIndicatorView *spinner;
@property (copy, nonatomic) NSString *statusMessage;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_setupSubviews;
- (void)_updateStatusLabel;

@end
