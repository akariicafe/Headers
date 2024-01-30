@class UILabel, UIActivityIndicatorView;

@interface MFMessageContentProgressLayer : UIView {
    UIActivityIndicatorView *_progressIndicator;
    UILabel *_loadingText;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
