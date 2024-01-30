@protocol AXPIFingerAppearanceDelegate;

@interface AXPIPinchChainView : UIView

@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (weak, nonatomic) id<AXPIFingerAppearanceDelegate> appearanceDelegate;

- (void).cxx_destruct;
- (BOOL)isUserInteractionEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
