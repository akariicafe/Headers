@class NSArray;

@interface HMISparseOpticalFlowMotionDetection : HMIMotionDetection

@property (readonly) NSArray *motionVectors;
@property (readonly) struct CGSize { double width; double height; } size;

- (void).cxx_destruct;
- (BOOL)applyEventTypeAndCheckIfSubBoundingIsStatic:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forMetric:(long long)a1 eventType:(long long)a2 confidence:(float)a3;
- (id)classMotionScoreMap;
- (id)classPaddingMap;
- (float)scoreForSubBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forMetric:(long long)a1 eventType:(long long)a2 confidence:(float)a3;
- (id)initWithBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 size:(struct CGSize { double x0; double x1; })a1 motionVectors:(id)a2;

@end
