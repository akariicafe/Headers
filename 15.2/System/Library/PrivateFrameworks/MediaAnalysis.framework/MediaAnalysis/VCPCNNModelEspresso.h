@class NSString, NSArray, NSURL, VCPCNNEspressoContext;

@interface VCPCNNModelEspresso : NSObject {
    struct { void *plan; int network_index; } _net;
    void *_plan;
    NSURL *_netFileUrl;
    NSArray *_inputNames;
    NSArray *_outputNames;
    VCPCNNEspressoContext *_context;
}

@property (nonatomic) struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> { struct *__begin_; struct *__end_; struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> { struct *__value_; } __end_cap_; } inputBlobs;
@property (nonatomic) struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> { struct *__begin_; struct *__end_; struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> { struct *__value_; } __end_cap_; } outputBlobs;
@property (nonatomic) struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } inputBlob;
@property (nonatomic) struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } outputBlob;
@property (readonly, nonatomic) NSString *resConfig;

- (int)softmax;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithParameters:(id)a0 inputNames:(id)a1 outputNames:(id)a2 properties:(id)a3;
- (int)espressoForward:(float *)a0;
- (int)prepareModelWithConfig:(id)a0;
- (void)normalization:(float *)a0;
- (int)getPlanPhase;
- (int)prepareModelInput:(float *)a0;
- (int)prepareModelInputs:(struct vector<float *, std::allocator<float *>> { float **x0; float **x1; struct __compressed_pair<float **, std::allocator<float *>> { float **x0; } x2; })a0;
- (int)espressoForwardInputs:(struct vector<float *, std::allocator<float *>> { float **x0; float **x1; struct __compressed_pair<float **, std::allocator<float *>> { float **x0; } x2; })a0;
- (void *)getEspressoContext;

@end
