@class NSMutableArray, ABPK2DDetectionConfiguration, ABPK2DPoseEstimation;

@interface ABPKMultiPerson2DTracking : NSObject {
    ABPK2DDetectionConfiguration *_config2D;
    ABPK2DPoseEstimation *_poseEstimation2D;
    NSMutableArray *_previousMultiPerson2DResult;
    unsigned long long _lastTrackingId;
}

- (id)init;
- (void).cxx_destruct;
- (void)_startMultiPerson2DTrackingPersonTrackingSignpostWithTimestamp:(double)a0;
- (void)_endInitABPKSignpost;
- (void)_endMultiPerson2DTracking2DDetectionMLSignpostWithTimestamp:(double)a0;
- (void)_endMultiPerson2DTracking2DDetectionPostProcessingSignpostWithTimestamp:(double)a0;
- (void)_endMultiPerson2DTrackingImagePreProcessingSignpostWithTimestamp:(double)a0;
- (void)_endMultiPerson2DTrackingPersonTrackingSignpostWithTimestamp:(double)a0;
- (void)_endMultiPerson2DTrackingRunWithInputSignpostWithTimestamp:(double)a0;
- (void)_startInitABPKSignpost;
- (void)_startMultiPerson2DTracking2DDetectionMLSignpostWithTimestamp:(double)a0;
- (void)_startMultiPerson2DTracking2DDetectionPostProcessingSignpostWithTimestamp:(double)a0;
- (void)_startMultiPerson2DTrackingImagePreProcessingSignpostWithTimestamp:(double)a0;
- (void)_startMultiPerson2DTrackingRunWithInputSignpostWithTimestamp:(double)a0;
- (BOOL)overlayResult:(id)a0 OnImage:(struct __CVBuffer { } *)a1 andGenerateOverlayImage:(struct __CVBuffer { } *)a2;
- (int)runPoseEstimationWithInput:(struct __CVBuffer { } *)a0 abpkDeviceOrientation:(long long)a1 atTimeStamp:(double)a2 andOutput:(id)a3;
- (int)runPoseEstimationWithInput:(struct __CVBuffer { } *)a0 deviceOrientation:(long long)a1 atTimeStamp:(double)a2 andOutput:(id)a3;
- (int)runWithInput:(struct __CVBuffer { } *)a0 abpkDeviceOrientation:(long long)a1 atTimeStamp:(double)a2 andOutput:(id)a3;
- (int)runWithInput:(struct __CVBuffer { } *)a0 deviceOrientation:(long long)a1 atTimeStamp:(double)a2 andOutput:(id)a3;

@end
