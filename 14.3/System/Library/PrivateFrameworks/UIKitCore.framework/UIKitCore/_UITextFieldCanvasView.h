@protocol _UITextFieldCanvasViewContext;

@interface _UITextFieldCanvasView : _UITextCanvasView

@property (weak, nonatomic) id<_UITextFieldCanvasViewContext> context;

- (BOOL)_enableAutoConstraining;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
