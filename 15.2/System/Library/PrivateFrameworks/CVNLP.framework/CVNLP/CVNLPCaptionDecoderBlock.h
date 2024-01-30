@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CVNLPCaptionDecoderBlock : CVNLPCaptionModelBase

@property (nonatomic) unsigned long long modelIndex;
@property (nonatomic) void *decoderPlan;
@property (nonatomic) void *decoderCtx;
@property (nonatomic) struct { void *plan; int network_index; } decoderNet;
@property (nonatomic) struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } attFeatsPlaceholderBlob;
@property (nonatomic) struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } scaleInput;
@property (nonatomic) struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } positionInput;
@property (nonatomic) struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } maskInput;
@property (nonatomic) struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } blockInput;
@property (nonatomic) struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } blockOutput;
@property (nonatomic) struct map<std::string, std::vector<float>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<float>>>> { struct __tree<std::__value_type<std::string, std::vector<float>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<float>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<float>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<float>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<float>>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } stateOutputEspressoBuffers;
@property (nonatomic) struct map<std::string, std::vector<float>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<float>>>> { struct __tree<std::__value_type<std::string, std::vector<float>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<float>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<float>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<float>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<float>>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } stateInputEspressoBuffers;
@property (nonatomic) struct map<std::string, std::vector<unsigned long>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<unsigned long>>>> { struct __tree<std::__value_type<std::string, std::vector<unsigned long>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<unsigned long>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<unsigned long>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<unsigned long>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<unsigned long>>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } stateInputEspressoBuffersShape;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *decoderQueue;
@property (retain, nonatomic) CVNLPCaptionDecoderBlock *nextBlock;
@property (retain, nonatomic) NSString *metricString;
@property (retain, nonatomic) NSString *metricCopyString;
@property (nonatomic) struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *__value_; } __end_cap_; } decoderInputNames;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (BOOL)_loadNetwork:(id)a0 modelIndex:(unsigned long long)a1;
- (void)_runBlockWithCopyOutputBlock:(id /* block */)a0;
- (void)runBlockWithCopyInput:(float *)a0 copyOutputBlock:(id /* block */)a1;
- (id)initWithOptions:(id)a0 modelIndex:(unsigned long long)a1 runTimeParams:(id)a2;
- (void)buildNetworkForSequenceLength:(unsigned long long)a0 imageFeatures:(id)a1;
- (void)copyInputState:(id)a0;
- (void)copyOutputState:(id)a0;
- (void)runBlockWithCopyInputBlock:(id /* block */)a0 copyOutputBlock:(id /* block */)a1;

@end
