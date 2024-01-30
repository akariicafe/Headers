@class UIView;

@interface UIPrinterSetupPINScrollView : UIScrollView

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double visibleHeight;

- (id)initWithContentView:(id)a0;
- (void).cxx_destruct;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)keyboardDidChangeFrame:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;

@end
