@interface HMIMotionVector : HMFObject

@property (readonly) struct CGPoint { double x; double y; } origin;
@property (readonly) struct CGPoint { double x0; double x1; } target;
@property (readonly) struct CGPoint { double x0; double x1; } midpoint;
@property (readonly) struct CGVector { double dx; double dy; } motion;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBox;
@property (retain) Class eventClass;

- (double)distance;
- (void).cxx_destruct;
- (id)initWithOrigin:(struct CGPoint { double x0; double x1; })a0 motion:(struct CGVector { double x0; double x1; })a1;

@end
