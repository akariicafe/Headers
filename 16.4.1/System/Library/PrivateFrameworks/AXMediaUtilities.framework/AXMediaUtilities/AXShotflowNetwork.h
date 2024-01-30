@class NSArray, __end_cap_, __end_;

@interface AXShotflowNetwork : NSObject {
    void *_espressoPlan;
    void *_espressoContext;
    struct { void *plan; int network_index; } _espressoNetwork;
    struct vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>> { void *__value_; } __end_cap_; } _logitsPosOutputs;
    struct vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>> { void *__value_; } __end_cap_; } _logitsNegOutputs;
    struct vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>> { void *__value_; } __end_cap_; } _offsetsOutputs;
    struct vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>> { void *__value_; } __end_cap_; } _rollOutputs;
    struct vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<espresso_buffer_t> *, std::allocator<std::shared_ptr<espresso_buffer_t>>> { void *__value_; } __end_cap_; } _yawOutputs;
    unsigned long long _currentNetworkWidth;
    unsigned long long _currentNetworkHeight;
    int _maxout_layers;
    int _bins_neg_maxout;
    BOOL _has_pose;
    BOOL _pose_square;
    BOOL _extra_default_boxes;
    int _num_pos_classes;
    struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } _important_classes;
    struct vector<NSString *, std::allocator<NSString *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<NSString *__strong *, std::allocator<NSString *>> { id *__value_; } x1; } _model_labels;
    int _num_ratios;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _ratios;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _default_boxes_sides;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _default_boxes_sides_normalized;
    NSArray *_filterThreshold;
    float _defaultBoxSizes[6][20][2];
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _cell_starts_x;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _cell_starts_y;
    float _input_aspect_ratio;
    BOOL _keep_aspect_ratio;
    BOOL _can_rotate;
    float _input_height;
}

@property (readonly, nonatomic) unsigned long long preferredSmallSide;
@property (nonatomic) float threshold;
@property (nonatomic) int version;
@property (nonatomic) long long modelType;

+ (id)cpuNetworkWithModelPath:(id)a0 configuration:(id)a1 version:(int)a2 modelType:(long long)a3;
+ (id)gpuNetworkWithModelPath:(id)a0 configuration:(id)a1 preferredMetalDeviceID:(int)a2 version:(int)a3 modelType:(long long)a4;

- (id)resizeAndProcessVImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 inputIsBGR:(BOOL)a1;
- (void)runNetwork:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 inputIsBGR:(BOOL)a1;
- (id).cxx_construct;
- (void)dealloc;
- (id)processVImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 inputIsBGR:(BOOL)a1;
- (int)setInputShape:(unsigned long long)a0 height:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)processCIImage:(id)a0;
- (id)initWithModelPath:(id)a0 espressoEngineID:(int)a1 espressoDeviceID:(int)a2 configuration:(id)a3 version:(int)a4 modelType:(long long)a5;

@end
