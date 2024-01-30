@class NSString, NSObject;
@protocol MTLDevice, MTLTexture, MTLCommandQueue, OS_dispatch_queue;

@interface EspressoImage2Image : NSObject {
    void *ctx;
    void *plan;
    struct { void *plan; int network_index; } net;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } output_layer_name;
    id<MTLCommandQueue> queue;
    id<MTLDevice> device;
    NSObject<OS_dispatch_queue> *dispatch_queue;
    BOOL is_temporal_model;
    unsigned long long dim[5];
    unsigned long long dim_small[5];
    int defaultWidth;
    int defaultHeight;
    float t0;
    int scale_ratio;
    id<MTLTexture> smallOldResultTexture;
    struct map<std::string, float, std::less<std::string>, std::allocator<std::pair<const std::string, float>>> { struct __tree<std::__value_type<std::string, float>, std::__map_value_compare<std::string, std::__value_type<std::string, float>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, float>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, float>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, float>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } tweaks;
    struct postprocessing_settings_t { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } name; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } network; int do_blend; float blend_alpha; int grayscale_i0; int grayscale_i1; float temporal_alpha; float gamma; float saturation; float contrast; float brightness; int color_transfer_mode; int width; int height; int width_fast; int height_fast; int width_capture; int height_capture; int width_miniature; int height_miniature; int width_fullscreen; int height_fullscreen; int width_hd; int height_hd; float old_frame_scale; float noise_strength; int dyn_noise; float noise_speed; float preprocessing_bias_b; float preprocessing_bias_g; float preprocessing_bias_r; float preprocessing_scale; float preprocessing_old_frame_bias_scale; BOOL high_quality_scaling; } current_postprocessing_settings;
    struct shared_ptr<Espresso::V9Engine::v9_noise_kernel> { struct v9_noise_kernel *__ptr_; struct __shared_weak_count *__cntrl_; } noise_k;
    struct shared_ptr<Espresso::generic_load_constant_kernel> { struct generic_load_constant_kernel *__ptr_; struct __shared_weak_count *__cntrl_; } noise_load_constant_kernel;
    NSString *currentNetworkPath;
    long long currentResolutionPreset;
    struct shared_ptr<Espresso::blob<float, 1>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } precomputed_noise;
    id<MTLTexture> tmpDestinationTexture;
}

@property (nonatomic) int rotation_degrees;
@property (nonatomic) int flip_y;

+ (int)featureVersion;
+ (id)getStylesKeys;
+ (void)gpuSync:(id)a0 tex:(id)a1;
+ (BOOL)loadStylesConfigAtDefaultsKey:(id)a0;
+ (BOOL)loadStylesConfigAtPath:(id)a0;
+ (void)setDefaultOption:(id)a0 toValue:(id)a1;
+ (void)tuneNetworks:(id)a0;
+ (void)tuneNetworksWGWindowSize:(id)a0;

- (int)load:(id)a0;
- (int)width;
- (id).cxx_construct;
- (int)height;
- (int)reload;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)styleName;
- (id)setupWithQueue:(id)a0;
- (void)_resetTemporalState;
- (int)_reshapeToResolutionPreset:(long long)a0;
- (int)_reshapeToWidth:(int)a0 andHeight:(int)a1;
- (void)_tune;
- (void)addNoiseLayer;
- (void)aggregateWisdom:(void *)a0;
- (float)benchmark;
- (int)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2 cropRect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3;
- (int)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2 cropRect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 destinationRect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a4;
- (struct { void *x0; int x1; })getEspressoNetwork;
- (id)getInternalDataForKey:(id)a0;
- (int)load:(id)a0 resolutionPreset:(long long)a1;
- (id)newOutputTexture;
- (void)postProcess:(id)a0 cameraSourceTexture:(id)a1 inputTexture:(id)a2 destinationTexture:(id)a3;
- (void)resetTemporalState;
- (int)reshapeToResolutionPreset:(long long)a0;
- (int)reshapeToResolutionPreset:(long long)a0 aspectRatio:(float)a1;
- (int)reshapeToWidth:(int)a0 andHeight:(int)a1;
- (struct pair<int, int> { int x0; int x1; })resolutionForPreset:(long long)a0;
- (void)simpleLinearResize:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2;
- (int)submitToQueueWithSourceTexture:(id)a0 destinationTexture:(id)a1;
- (int)submitToQueueWithSourceTexture:(id)a0 destinationTexture:(id)a1 cropRect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2;
- (void)tune;
- (void)tweak:(id)a0 value:(float)a1;
- (int)wasReshaped;

@end
