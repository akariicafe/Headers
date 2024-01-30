@interface _UIFocusEngineFakePanGestureRecognizer : NSObject

@property (nonatomic) long long state;
@property (nonatomic) struct CGPoint { double x; double y; } digitizerLocation;
@property (nonatomic) struct CGPoint { double x; double y; } velocity;

- (struct CGPoint { double x0; double x1; })velocityInView:(id)a0;
- (struct CGPoint { double x0; double x1; })_digitizerLocation;

@end
