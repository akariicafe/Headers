@protocol AXPIFingerAppearanceDelegate;

@interface AXPIFingerLayer : CAShapeLayer

@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (nonatomic) unsigned long long shape;
@property (weak, nonatomic) id<AXPIFingerAppearanceDelegate> appearanceDelegate;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outerFrame;

- (void).cxx_destruct;
- (id)initWithAppearanceDelegate:(id)a0;

@end
