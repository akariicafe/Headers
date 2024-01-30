@class NSArray, MLModel, __end_cap_, __end_;

@interface AXMindNetNetwork : NSObject {
    MLModel *_mindNetModel;
    long long _modelType;
    int _num_pos_classes;
    struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } _important_classes;
    struct vector<NSString *, std::allocator<NSString *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<NSString *__strong *, std::allocator<NSString *>> { id *__value_; } x1; } _model_labels;
    int _num_ratios;
    NSArray *_filterThreshold;
    float _input_aspect_ratio;
    BOOL _keep_aspect_ratio;
    BOOL _can_rotate;
    float _input_height;
    float _screenshot_width;
    float _screenshot_height;
}

@property (readonly, nonatomic) unsigned long long preferredSmallSide;
@property (nonatomic) float threshold;
@property (nonatomic) int version;
@property (nonatomic) float nmsThreshold;
@property (readonly, nonatomic) NSArray *filterThresholds;

+ (id)networkWithModelPath:(id)a0 configuration:(id)a1 modelType:(long long)a2;

- (id)resizeAndProcessVImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 inputIsBGR:(BOOL)a1;
- (id).cxx_construct;
- (id)processVImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 inputIsBGR:(BOOL)a1;
- (void).cxx_destruct;
- (id)processCIImage:(id)a0;
- (id)initWithModelPath:(id)a0 configuration:(id)a1 modelType:(long long)a2;

@end
