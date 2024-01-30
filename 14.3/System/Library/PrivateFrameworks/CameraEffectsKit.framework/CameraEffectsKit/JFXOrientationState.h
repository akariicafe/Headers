@interface JFXOrientationState : NSObject

@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) long long statusBarOrientation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } windowBounds;

- (id)initWithInterfaceOrientation:(long long)a0 deviceOrientation:(long long)a1 statusBarOrientation:(long long)a2 windowBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
