@class NSMutableArray, NSMutableDictionary, ABPK2DDetectionConfiguration, ABPK2DPoseEstimation;

@interface ABPKGestureDetectionPipeline : NSObject {
    unsigned int _fps;
    ABPK2DDetectionConfiguration *_config2D;
    ABPK2DPoseEstimation *_poseEstimation2D;
    NSMutableDictionary *_joints2DBufferDict;
    NSMutableArray *_previousGestureDetectionResult;
    unsigned long long _lastTrackingId;
    unsigned int _maxPreviousPoses;
    unsigned int _raisingMaxPreviousPoses;
    unsigned int _wavingMinPeriodicFrames;
    unsigned int _wavingAngleChangeLastFrames;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithFrequency:(unsigned int)a0;
- (void)_endGestureDetection2DDetectionMLSignpostWithTimestamp:(double)a0;
- (void)_endGestureDetection2DDetectionPostProcessingSignpostWithTimestamp:(double)a0;
- (void)_endGestureDetectionAlgorithmSignpostWithTimestamp:(double)a0;
- (void)_endGestureDetectionImagePreProcessingSignpostWithTimestamp:(double)a0;
- (void)_endGestureDetectionPersonTrackingSignpostWithTimestamp:(double)a0;
- (void)_endGestureDetectionRunWithInputSignpostWithTimestamp:(double)a0;
- (void)_endInitABPKSignpost;
- (void)_startGestureDetection2DDetectionMLSignpostWithTimestamp:(double)a0;
- (void)_startGestureDetection2DDetectionPostProcessingSignpostWithTimestamp:(double)a0;
- (void)_startGestureDetectionAlgorithmSignpostWithTimestamp:(double)a0;
- (void)_startGestureDetectionImagePreProcessingSignpostWithTimestamp:(double)a0;
- (void)_startGestureDetectionPersonTrackingSignpostWithTimestamp:(double)a0;
- (void)_startGestureDetectionRunWithInputSignpostWithTimestamp:(double)a0;
- (void)_startInitABPKSignpost;
- (struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *x0; } **x0; })extractDataForJointIdx:(unsigned long long)a0 fromPoseTimeArray:(id)a1;
- (BOOL)overlayResult:(id)a0 OnImage:(struct __CVBuffer { } *)a1 andGenerateOverlayImage:(struct __CVBuffer { } *)a2;
- (void)runGestureDetection:(id)a0 withTrackingId:(unsigned int)a1 andResult:(id)a2;
- (int)runPoseEstimationWithInput:(struct __CVBuffer { } *)a0 abpkDeviceOrientation:(long long)a1 atTimeStamp:(double)a2 andOutput:(id)a3;
- (int)runPoseEstimationWithInput:(struct __CVBuffer { } *)a0 deviceOrientation:(long long)a1 atTimeStamp:(double)a2 andOutput:(id)a3;
- (int)runWithInput:(struct __CVBuffer { } *)a0 abpkDeviceOrientation:(long long)a1 atTimeStamp:(double)a2 andOutput:(id)a3;
- (int)runWithInput:(struct __CVBuffer { } *)a0 deviceOrientation:(long long)a1 atTimeStamp:(double)a2 andOutput:(id)a3;

@end
