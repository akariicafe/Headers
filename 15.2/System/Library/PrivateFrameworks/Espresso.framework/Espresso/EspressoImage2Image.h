@class NSString, NSObject;
@protocol MTLDevice, MTLTexture, MTLCommandQueue, OS_dispatch_queue;

@interface EspressoImage2Image : NSObject {
    void *ctx;
    void *plan;
    struct { void *plan; int network_index; } net;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } output_layer_name;
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
    struct postprocessing_settings_t { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } name; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } network; int do_blend; float blend_alpha; int grayscale_i0; int grayscale_i1; float temporal_alpha; float gamma; float saturation; float contrast; float brightness; int color_transfer_mode; int width; int height; int width_fast; int height_fast; int width_capture; int height_capture; int width_miniature; int height_miniature; int width_fullscreen; int height_fullscreen; int width_hd; int height_hd; float old_frame_scale; float noise_strength; int dyn_noise; float noise_speed; float preprocessing_bias_b; float preprocessing_bias_g; float preprocessing_bias_r; float preprocessing_scale; float preprocessing_old_frame_bias_scale; BOOL high_quality_scaling; } current_postprocessing_settings;
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
+ (void)setDefaultOption:(id)a0 toValue:(id)a1;
+ (BOOL)loadStylesConfigAtPath:(id)a0;
+ (BOOL)loadStylesConfigAtDefaultsKey:(id)a0;
+ (id)getStylesKeys;
+ (void)gpuSync:(id)a0 tex:(id)a1;
+ (void)tuneNetworks:(id)a0;
+ (void)tuneNetworksWGWindowSize:(id)a0;

- (id)initWithQueue:(id)a0;
- (void)tune;
- (int)reload;
- (int)load:(id)a0;
- (void)_tune;
- (id)styleName;
- (int)height;
- (int)width;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (struct { void *x0; int x1; })getEspressoNetwork;
- (id)getInternalDataForKey:(id)a0;
- (id)setupWithQueue:(id)a0;
- (void)addNoiseLayer;
- (int)wasReshaped;
- (void)_resetTemporalState;
- (void)resetTemporalState;
- (int)load:(id)a0 resolutionPreset:(long long)a1;
- (int)reshapeToResolutionPreset:(long long)a0;
- (struct pair<int, int> { int x0; int x1; })resolutionForPreset:(long long)a0;
- (int)reshapeToResolutionPreset:(long long)a0 aspectRatio:(float)a1;
- (int)_reshapeToResolutionPreset:(long long)a0;
- (int)reshapeToWidth:(int)a0 andHeight:(int)a1;
- (int)_reshapeToWidth:(int)a0 andHeight:(int)a1;
- (int)submitToQueueWithSourceTexture:(id)a0 destinationTexture:(id)a1;
- (void)tweak:(id)a0 value:(float)a1;
- (int)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2 cropRect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 destinationRect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a4;
- (int)submitToQueueWithSourceTexture:(id)a0 destinationTexture:(id)a1 cropRect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2;
- (int)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2 cropRect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3;
- (void)simpleLinearResize:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2;
- (void)postProcess:(id)a0 cameraSourceTexture:(id)a1 inputTexture:(id)a2 destinationTexture:(id)a3;
- (id)newOutputTexture;
- (void)aggregateWisdom:(void *)a0;
- (float)benchmark;
- (id).cxx_construct;

@end
