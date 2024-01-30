@interface ABPK2DDetectionPostprocess : NSObject

- (int)extract2DSkeletonfromBuffers:(id)a0 withImagePreProcessingParams:(id)a1 atTimestamp:(double)a2 previousSkeleton3D:(id)a3;
- (id)get2DDetectionResultforRotation:(long long)a0 croppedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)getAligned3DSkeleton;
- (id)getRaw2DDetectionResultforRotation:(long long)a0 croppedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_endExtract2DSkeletonSignpostWithTimestamp:(double)a0;
- (void)_endExtractHumanSignpostWithTimestamp:(double)a0;
- (void)_endExtrapolationSignpostWithTimestamp:(double)a0;
- (void)_endMaxFilterSignpostWithTimestamp:(double)a0;
- (void)_startExtract2DSkeletonSignpostWithTimestamp:(double)a0;
- (void)_startExtractHumanSignpostWithTimestamp:(double)a0;
- (void)_startExtrapolationSignpostWithTimestamp:(double)a0;
- (void)_startMaxFilterSignpostWithTimestamp:(double)a0;
- (void)getRawTrackedHumanForLiftingSkeleton:(id)a0;
- (void)getRawTrackedHumanSkeleton:(id)a0;
- (void)getRawTrackedHumanSkeletonVector:(id)a0;
- (void)getTrackedHumanForLiftingSkeleton:(id)a0;
- (void)getTrackedHumanSkeleton:(id)a0;
- (id)initWithInputJoints:(unsigned long long)a0 andOutputJoints:(unsigned long long)a1 use3DSkeletonForExtrapolation:(BOOL)a2 shouldPush3DSupportSkeleton:(BOOL)a3 withExtrapolationTime:(double)a4;

@end
