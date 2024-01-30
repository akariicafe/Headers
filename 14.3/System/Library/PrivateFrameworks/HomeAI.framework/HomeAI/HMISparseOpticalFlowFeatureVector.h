@interface HMISparseOpticalFlowFeatureVector : HMFObject

@property (readonly) struct CGPoint { double x; double y; } origin;
@property (readonly) struct CGPoint { double x0; double x1; } target;
@property (readonly) struct CGPoint { double x0; double x1; } midpoint;
@property (readonly) struct CGVector { double dx; double dy; } motion;
@property long long eventType;

- (double)distance;
- (id)initWithOrigin:(struct CGPoint { double x0; double x1; })a0 motion:(struct CGVector { double x0; double x1; })a1;

@end
