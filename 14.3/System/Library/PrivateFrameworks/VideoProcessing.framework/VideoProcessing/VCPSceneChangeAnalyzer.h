@class VCPSceneChangeSegment, NSMutableArray;

@interface VCPSceneChangeAnalyzer : VCPVideoAnalyzer {
    float _sceneDeltaBuffer[10];
    struct FrameBuffer { int frame_count_; struct Frame { int frame_idx_; struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp_; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration_; struct Translation { float x_; float y_; float z_; } ave_motion_; struct Translation { float x_; float y_; float z_; } org_motion_; float quality_score_; unsigned long long distortion_; float distortion_norm_; struct Translation { float x_; float y_; float z_; } motion_change_; unsigned int compressed_bytes_; BOOL blur_; struct Translation { float x_; float y_; float z_; } acc_var_; float texture_; struct MotionResult { float significant_values_[6]; float confidence_[6]; float fine_action_score_; float action_score_; float track_score_; float rotation_angle_; float subtle_motion_score_; BOOL is_stable_; int action_blocks_; float action_motion_; BOOL valid_mb_; BOOL valid_submb_; int support_size_; float residual_var_; float gmv_[2]; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration_; float scene_delta_; float scene_delta_ratio_; struct Vector<ma::Object *> { struct __CFArray *vector_; } objects_; struct Vector<ma::Object *> { struct __CFArray *vector_; } detect_objects_; struct Vector<ma::Object *> { struct __CFArray *vector_; } imported_objects_; } motion_result_; float interestingness_; float obstruction_; float colorfulness_score_; struct Histogram { float extremities_; float overexposes_; int *histogram_[3]; int *moments_hist_[2]; } histogram_; } buffer_[35]; } _frameBuffer;
    VCPSceneChangeSegment *_activeSegment;
    NSMutableArray *_sceneSegments;
    BOOL _verbose;
    BOOL _firstFrame;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _frameTimeRange;
    BOOL _currentStatus;
    BOOL _isSegmentPoint;
}

- (id)init;
- (void).cxx_destruct;
- (id)results;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (id).cxx_construct;
- (void)ComputeSceneDelta:(struct Frame { int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct Translation { float x0; float x1; float x2; } x3; struct Translation { float x0; float x1; float x2; } x4; float x5; unsigned long long x6; float x7; struct Translation { float x0; float x1; float x2; } x8; unsigned int x9; BOOL x10; struct Translation { float x0; float x1; float x2; } x11; float x12; struct MotionResult { float x0[6]; float x1[6]; float x2; float x3; float x4; float x5; float x6; BOOL x7; int x8; float x9; BOOL x10; BOOL x11; int x12; float x13; float x14[2]; struct { long long x0; int x1; unsigned int x2; long long x3; } x15; float x16; float x17; struct Vector<ma::Object *> { struct __CFArray *x0; } x18; struct Vector<ma::Object *> { struct __CFArray *x0; } x19; struct Vector<ma::Object *> { struct __CFArray *x0; } x20; } x13; float x14; float x15; float x16; struct Histogram { float x0; float x1; int *x2[3]; int *x3[2]; } x17; } *)a0;
- (BOOL)decideLensSwitchPoint:(struct Frame { int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct Translation { float x0; float x1; float x2; } x3; struct Translation { float x0; float x1; float x2; } x4; float x5; unsigned long long x6; float x7; struct Translation { float x0; float x1; float x2; } x8; unsigned int x9; BOOL x10; struct Translation { float x0; float x1; float x2; } x11; float x12; struct MotionResult { float x0[6]; float x1[6]; float x2; float x3; float x4; float x5; float x6; BOOL x7; int x8; float x9; BOOL x10; BOOL x11; int x12; float x13; float x14[2]; struct { long long x0; int x1; unsigned int x2; long long x3; } x15; float x16; float x17; struct Vector<ma::Object *> { struct __CFArray *x0; } x18; struct Vector<ma::Object *> { struct __CFArray *x0; } x19; struct Vector<ma::Object *> { struct __CFArray *x0; } x20; } x13; float x14; float x15; float x16; struct Histogram { float x0; float x1; int *x2[3]; int *x3[2]; } x17; } *)a0;
- (void)PrintSegments;
- (int)finalizeAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (BOOL)isSegmentPoint;

@end
