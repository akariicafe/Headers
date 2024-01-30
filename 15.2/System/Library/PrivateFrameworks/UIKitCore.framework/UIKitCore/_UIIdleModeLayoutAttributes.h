@interface _UIIdleModeLayoutAttributes : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } centerOffset;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (nonatomic) double alphaOffset;
@property (nonatomic) BOOL wantsDimmingOverlay;

- (id)init;

@end
