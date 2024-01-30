@interface HMIMotionDetection : HMFObject

@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;

- (id)initWithBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)applyEventTypeAndCheckIfSubBoundingIsStatic:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forMetric:(long long)a1 eventType:(long long)a2 confidence:(float)a3;

@end
