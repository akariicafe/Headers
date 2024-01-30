@class UIColor, UIView;

@interface UIKeyboardFloatingTransitionState : NSObject

@property (retain, nonatomic) UIView *inputView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inputViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } platterViewFrame;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } platterInsets;
@property (nonatomic) struct CGPoint { double x; double y; } scale;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } initialInputViewTransform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } finalInputViewTransform;
@property (nonatomic) double borderWidth;
@property (copy, nonatomic) UIColor *borderColor;
@property (nonatomic) double cornerRadius;

- (void).cxx_destruct;

@end
