@class NSMutableArray;

@interface BackendDNNEspressoModel : DNNEspressoModel

@property (nonatomic) struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } depthInputBlob;
@property (nonatomic) struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } imageInputBlob;
@property (nonatomic) struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } depthMaskIinputBlob;
@property struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } resultsOutputBlob;
@property (retain, nonatomic) NSMutableArray *outputFeatureVectorDim;

- (void).cxx_destruct;
- (BOOL)initializeInputOutputBlobs;
- (int)processImage:(struct __CVBuffer { } *)a0 depthImage:(struct __CVBuffer { } *)a1 depthMaskImage:(float *)a2 result:(float *)a3;
- (int)feedNetwork:(float *)a0 inputDepthBuffer:(float *)a1 inputDepthMaskBuffer:(float *)a2 width:(int)a3 height:(int)a4;

@end
