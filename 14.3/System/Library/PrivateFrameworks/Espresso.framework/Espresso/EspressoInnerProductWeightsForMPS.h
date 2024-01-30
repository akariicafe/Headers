@class NSString;

@interface EspressoInnerProductWeightsForMPS : NSObject <MPSCNNConvolutionDataSource> {
    struct inner_product_uniforms { unsigned int nC; unsigned int nB; int has_biases; int has_relu; int has_tanh; float tanh_alpha; float tanh_beta; int has_prelu; int is_lookup; int quantization_mode; BOOL nd_mode; int add_to_output; int use_raw_buffers; int fused_activation_mode; float fused_activation_alpha; float fused_activation_beta; unsigned int m; unsigned int k; unsigned int n; unsigned int Abytes; unsigned int Bbytes; unsigned int k4; unsigned int n4; unsigned int n8; unsigned int n8_splitk; int argmax_tree_n_clusters; int argmax_tree_n_clusters_keep; int sparse_block_size_x; int sparse_block_size_y; int low_precision_accumulation; int compute_every; int is_lookup_rounds_to_nearest; } params;
    struct shared_ptr<Espresso::blob<float, 2> > { struct blob<float, 2> *__ptr_; struct __shared_weak_count *__cntrl_; } weights_blob;
    struct shared_ptr<Espresso::blob<unsigned short, 2> > { struct blob<unsigned short, 2> *__ptr_; struct __shared_weak_count *__cntrl_; } weights_f16_blob;
    struct shared_ptr<Espresso::blob<unsigned char, 2> > { struct blob<unsigned char, 2> *__ptr_; struct __shared_weak_count *__cntrl_; } quantized_weights_blob;
    struct shared_ptr<Espresso::blob<float, 1> > { struct blob<float, 1> *__ptr_; struct __shared_weak_count *__cntrl_; } biases_blob;
    struct shared_ptr<Espresso::blob<float __attribute__((ext_vector_type(2))), 1> > { struct blob<float __attribute__((ext_vector_type(2))), 1> *__ptr_; struct __shared_weak_count *__cntrl_; } quantization_ranges;
    struct shared_ptr<Espresso::blob<float, 1> > { struct blob<float, 1> *__ptr_; struct __shared_weak_count *__cntrl_; } quantization_lut;
    unsigned int data_type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)ready;
- (void)purge;
- (id)initWithParams:(struct inner_product_uniforms { unsigned int x0; unsigned int x1; int x2; int x3; int x4; float x5; float x6; int x7; int x8; int x9; BOOL x10; int x11; int x12; int x13; float x14; float x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; int x25; int x26; int x27; int x28; int x29; int x30; int x31; })a0;
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
