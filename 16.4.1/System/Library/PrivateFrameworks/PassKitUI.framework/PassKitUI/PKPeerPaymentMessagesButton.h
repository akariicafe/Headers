@class UIColor, UIActivityIndicatorView;

@interface PKPeerPaymentMessagesButton : UIButton {
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIActivityIndicatorView *_spinner;
}

@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) BOOL showsActivityIndicator;

+ (struct CGSize { double x0; double x1; })referenceSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usePlatterColor:(BOOL)a1;

@end
