@class NSString;

@interface EspressoConvolutionWeightsForMPS : NSObject <MPSCNNConvolutionDataSource> {
    struct convolution_uniforms { int W; int H; int Winput; int Hinput; int start_channel_low_priority_split; int output_row_bytes; int fused_relu; int fused_tanh; int has_biases; float leaky_relu_alpha; int C; int K; int Nx; int Ny; int backward_stride; int fused_activation_mode; float fused_activation_alpha; float fused_activation_beta; struct padding_params_t { short pad_mode; short fill_mode; float value; short l; short r; short t; short b; short front; short back; } pad; short stride_x; short stride_y; short dilation_x; short dilation_y; unsigned short mtl_pad_l; unsigned short mtl_pad_t; int has_8bit_weights; int do_ncc; int has_batch_norm; int n_groups; int n_parallel; unsigned short start_channel_bottom; unsigned short start_channel_top; unsigned short total_channel_bottom; unsigned short total_channel_top; unsigned short split_K_channels_low_priority_split; short n_batch; int deconv_out_width; int deconv_out_height; int low_precision_accumulation; int hint_use_winograd_win_size; int Nt; short stride_t; } params;
    struct shared_ptr<Espresso::blob<unsigned char, 4> > { struct blob<unsigned char, 4> *__ptr_; struct __shared_weak_count *__cntrl_; } quantized_weights_blob;
    struct shared_ptr<Espresso::blob<float, 4> > { struct blob<float, 4> *__ptr_; struct __shared_weak_count *__cntrl_; } weights_blob;
    struct shared_ptr<Espresso::blob<unsigned short, 4> > { struct blob<unsigned short, 4> *__ptr_; struct __shared_weak_count *__cntrl_; } weights_f16_blob;
    struct shared_ptr<Espresso::blob<float, 1> > { struct blob<float, 1> *__ptr_; struct __shared_weak_count *__cntrl_; } biases_blob;
    struct shared_ptr<Espresso::blob<float __attribute__((ext_vector_type(2))), 1> > { struct blob<float __attribute__((ext_vector_type(2))), 1> *__ptr_; struct __shared_weak_count *__cntrl_; } quantization_ranges;
    struct shared_ptr<Espresso::blob<float, 1> > { struct blob<float, 1> *__ptr_; struct __shared_weak_count *__cntrl_; } quantization_lut;
    struct shared_ptr<Espresso::blob<float, 1> > { struct blob<float, 1> *__ptr_; struct __shared_weak_count *__cntrl_; } scale_factor_batch_norm;
    unsigned int data_type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)ready;
- (void)purge;
- (id)initWithParams:(struct convolution_uniforms { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; int x10; int x11; int x12; int x13; int x14; int x15; float x16; float x17; struct padding_params_t { short x0; short x1; float x2; short x3; short x4; short x5; short x6; short x7; short x8; } x18; short x19; short x20; short x21; short x22; unsigned short x23; unsigned short x24; int x25; int x26; int x27; int x28; int x29; unsigned short x30; unsigned short x31; unsigned short x32; unsigned short x33; unsigned short x34; short x35; int x36; int x37; int x38; int x39; int x40; short x41; })a0;
- (void *)rangesForUInt8Kernel;
- (float *)lookupTableForUInt8Kernel;
- (BOOL)load;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptor;
- (unsigned int)dataType;
- (id).cxx_construct;
- (id)label;
- (void *)weights;
- (float *)biasTerms;

@end
