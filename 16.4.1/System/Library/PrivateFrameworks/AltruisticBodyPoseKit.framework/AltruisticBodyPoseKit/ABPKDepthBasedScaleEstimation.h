@interface ABPKDepthBasedScaleEstimation : NSObject {
    double _last_detection_timestamp;
    struct array<float, 2UL> { float __elems_[2]; } _depth_scaler_num_den;
    unsigned long long _depth_scaler_observation_count;
}

- (void)resetState;
- (id)init;
- (float)estimateScaleFromDepthData:(struct __CVBuffer { } *)a0 depthConfidenceData:(struct __CVBuffer { } *)a1 timestamp:(double)a2 imageResolution:(struct CGSize { double x0; double x1; })a3 imageIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a4 cameraFromBodyPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a5 liftingResult:(id)a6;
- (float)estimateScaleFromJasperCloud:(id)a0 cameraFromBodyPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 liftingResult:(id)a2;

@end
