@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CVNLPCaptionDecoderBlock : CVNLPCaptionModelBase

@property (nonatomic) unsigned long long modelIndex;
@property (nonatomic) void *decoderPlan;
@property (nonatomic) void *decoderCtx;
@property (nonatomic) struct { void *plan; int network_index; } decoderNet;
@property (nonatomic) struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } attFeatsPlaceholderBlob;
@property (nonatomic) struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } blockInput;
@property (nonatomic) struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } blockOutput;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *decoderQueue;
@property (retain, nonatomic) CVNLPCaptionDecoderBlock *nextBlock;
@property (retain, nonatomic) NSString *metricString;
@property (retain, nonatomic) NSString *metricCopyString;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_loadNetwork:(id)a0 modelIndex:(unsigned long long)a1;
- (void)_runBlockWithCopyOutputBlock:(id /* block */)a0;
- (void)runBlockWithCopyInput:(float *)a0 copyOutputBlock:(id /* block */)a1;
- (id)initWithOptions:(id)a0 modelIndex:(unsigned long long)a1 runTimeParams:(id)a2;
- (void)runBlockWithCopyInputBlock:(id /* block */)a0 copyOutputBlock:(id /* block */)a1;

@end
