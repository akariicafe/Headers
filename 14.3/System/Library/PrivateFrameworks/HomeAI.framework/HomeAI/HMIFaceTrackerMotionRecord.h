@class NSArray;

@interface HMIFaceTrackerMotionRecord : NSObject

@property (readonly) NSArray *motionVectors;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionOfInterest;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;

- (void).cxx_destruct;
- (id)initWithMotionVectors:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

@end
