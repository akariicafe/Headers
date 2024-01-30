@class UITextGestureTuning, UITextModernLoupeView, UIView;

@interface UITextModernLoupeSession : NSObject

@property (weak, nonatomic) UIView *interactionView;
@property (retain, nonatomic) UITextModernLoupeView *loupeView;
@property (retain, nonatomic) UITextGestureTuning *gestureTuning;

+ (id)beginLoupeSessionAtPoint:(struct CGPoint { double x0; double x1; })a0 withCaretRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fromView:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })_locationInContainerCoordinateSpace:(struct CGPoint { double x0; double x1; })a0;
- (void)didMoveToPoint:(struct CGPoint { double x0; double x1; })a0 withCaretRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 tracksCaret:(BOOL)a2;

@end
