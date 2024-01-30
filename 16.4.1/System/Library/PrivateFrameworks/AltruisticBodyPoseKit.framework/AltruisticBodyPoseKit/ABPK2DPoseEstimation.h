@class ABPK2DDetection, ABPK2DDetectionConfiguration, ABPK2DDetectionPostprocess;

@interface ABPK2DPoseEstimation : NSObject {
    ABPK2DDetectionConfiguration *_config2D;
    ABPK2DDetection *_detection2dAlgorithm;
    ABPK2DDetectionPostprocess *_postprocess2d;
}

- (void).cxx_destruct;
- (void)getRawTrackedHumanForLiftingSkeleton:(id)a0;
- (void)getRawTrackedHumanSkeleton:(id)a0;
- (void)getRawTrackedHumanSkeletonVector:(id)a0;
- (void)getTrackedHumanForLiftingSkeleton:(id)a0;
- (void)getTrackedHumanSkeleton:(id)a0;
- (id)initWith2DDetectionConfig:(id)a0 use3DSkeletonForExtrapolation:(BOOL)a1 shouldPush3DSupportSkeleton:(BOOL)a2;
- (int)runWithMLImageData:(id)a0 rotationOfResultTensor:(long long)a1;

@end
