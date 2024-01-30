@class UIDictationView;

@interface UIKBDictationDisplayView : UIKBKeyView

@property (retain, nonatomic) UIDictationView *dictationView;

- (void)prepareForDisplay;
- (void)updateForKeyplane:(id)a0 key:(id)a1;
- (void)updateDictationColor;
- (void)setRenderConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyplane:(id)a1 key:(id)a2;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)dealloc;

@end
