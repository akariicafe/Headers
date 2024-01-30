@protocol _UITextFieldCanvasContext;

@interface _UITextFieldCanvasView : _UITextCanvasView

@property (weak, nonatomic) id<_UITextFieldCanvasContext> context;

- (id)initWithCoder:(id)a0;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (BOOL)_enableAutoConstraining;

@end
