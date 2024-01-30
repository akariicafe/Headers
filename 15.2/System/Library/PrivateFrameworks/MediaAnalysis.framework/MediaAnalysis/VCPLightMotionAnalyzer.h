@class NSObject;
@protocol OS_dispatch_queue;

@interface VCPLightMotionAnalyzer : VCPVideoAnalyzer {
    void *_encodeAnalysis;
    NSObject<OS_dispatch_queue> *_queue;
    struct Frame { int frame_idx_; struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp_; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration_; struct Translation { float x_; float y_; float z_; } ave_motion_; struct Translation { float x_; float y_; float z_; } org_motion_; float quality_score_; unsigned long long distortion_; float distortion_norm_; struct Translation { float x_; float y_; float z_; } motion_change_; unsigned int compressed_bytes_; BOOL blur_; struct Translation { float x_; float y_; float z_; } acc_var_; float texture_; struct MotionResult { float significant_values_[6]; float confidence_[6]; float fine_action_score_; float action_score_; float track_score_; float rotation_angle_; float subtle_motion_score_; BOOL is_stable_; int action_blocks_; float action_motion_; BOOL valid_mb_; BOOL valid_submb_; int support_size_; float residual_var_; float gmv_[2]; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration_; float scene_delta_; float scene_delta_ratio_; struct Vector<ma::Object *> { struct __CFArray *vector_; } objects_; struct Vector<ma::Object *> { struct __CFArray *vector_; } detect_objects_; struct Vector<ma::Object *> { struct __CFArray *vector_; } imported_objects_; } motion_result_; float *flow_; float interestingness_; float obstruction_; float colorfulness_score_; struct Histogram { float extremities_; float overexposes_; int *histogram_[3]; int *moments_hist_[2]; } histogram_; } _frame;
    struct EncodeStatsHW { void /* function */ **x0; BOOL *x1; BOOL *x2; struct MotionVector *x3; struct MotionVector *x4; struct MotionVector *x5; struct MotionVector *x6; unsigned short *x7; unsigned short *x8; unsigned int *x9; unsigned short *x10; unsigned short *x11; unsigned short *x12; unsigned short *x13; unsigned short *x14; unsigned short *x15; unsigned short *x16; unsigned short *x17; unsigned short *x18; unsigned short *x19; unsigned short *x20; unsigned int x21; BOOL x22; BOOL x23; BOOL x24; int x25; int x26; int x27; struct OpaqueVTCompressionSession *x28; struct __CFData *x29; struct { long long x0; int x1; unsigned int x2; long long x3; } x30; int x31; int x32; BOOL x33; } *_stats;
    float _cameraMotionParams[6][5];
    float _cameraMotionConfidences[6][5];
    unsigned long long _flags;
    BOOL _turbo;
}

@property (readonly) float actionScore;

+ (float)autoLiveMotionScore:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (int)cameraMotionDetection:(void *)a0;
- (int)generateThresholds:(float[6])a0 withConfidences:(float[6])a1;
- (id)initWithQueue:(id)a0 turbo:(BOOL)a1;
- (int)prewarmWithWidth:(int)a0 height:(int)a1;
- (void)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completion:(id /* block */)a3;

@end
