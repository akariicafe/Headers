@class JFXTextEffectEditorTextView;

@interface JFXTextEffectEditorTransformView : UIView

@property (readonly, nonatomic) JFXTextEffectEditorTextView *textView;

- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textView:(id)a1;

@end
