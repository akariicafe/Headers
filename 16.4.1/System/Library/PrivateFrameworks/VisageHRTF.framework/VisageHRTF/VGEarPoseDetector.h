@interface VGEarPoseDetector : NSObject {
    struct unique_ptr<cv3d::visage::ear_frame_selection::EarDetector, std::default_delete<cv3d::visage::ear_frame_selection::EarDetector>> { struct __compressed_pair<cv3d::visage::ear_frame_selection::EarDetector *, std::default_delete<cv3d::visage::ear_frame_selection::EarDetector>> { struct EarDetector *__value_; } __ptr_; } _ear_detector;
    float _earPresenceConfidence;
    float _earVisibility;
    float _bboxVisibility;
    float _landmarkVisibility;
    float _percentileDetectionConfidence;
    unsigned int _sameSideFrameCount;
    int _prevSide;
    void /* unknown type, empty encoding */ _earNormalAvg;
    float _expAvgWeight;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *x0; } **x0; })findROIPoints:(const float *)a0 side:(int)a1 captureData:(id)a2;
- (float)_calculateFaceYawWithRotationMatrix:(const struct float4x4 { void /* unknown type, empty encoding */ x0[4]; } *)a0;
- (int)checkEarQualityForFrame:(id)a0 detections:(const void *)a1;
- (void /* unknown type, empty encoding */)computeEarPlaneNormal:(const float *)a0 side:(int)a1 captureData:(id)a2;
- (int)detectPose:(void *)a0 FromCaptureData:(id)a1;
- (id)initWithCaptureOptions:(id)a0;

@end
