@class UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface MCLTextView : UITextView

@property (readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)onLongPress:(id)a0;
- (void)onTap:(id)a0;

@end
