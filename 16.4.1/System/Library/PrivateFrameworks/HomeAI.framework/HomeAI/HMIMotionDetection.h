@class NSArray;

@interface HMIMotionDetection : HMFObject

@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly) NSArray *motionVectors;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) float motionScore;
@property (readonly) unsigned long long motionMode;

+ (id)firstMotionDetectionInArray:(id)a0 withMode:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)classPaddingMap;
- (BOOL)applyEventTypeAndCheckIfSubBoundingIsStatic:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 eventClass:(Class)a1 confidence:(float)a2;
- (id)classMotionScoreMap;
- (id)initWithBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 size:(struct CGSize { double x0; double x1; })a1 motionVectors:(id)a2 motionScore:(float)a3 motionMode:(unsigned long long)a4;
- (float)scoreForSubBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 eventClass:(Class)a1 confidence:(float)a2;

@end
