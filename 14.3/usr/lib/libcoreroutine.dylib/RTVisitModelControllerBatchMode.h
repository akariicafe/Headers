@class RTVisitTrajectorySequenceClassifierBatchMode, NSString, RTVisitHyperParameter;

@interface RTVisitModelControllerBatchMode : NSObject <RTVisitModelController> {
    void *_espressoContext;
    void *_espressoPlan;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _inputBuffer;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _outputBuffer;
    RTVisitHyperParameter *_hyperParameter;
}

@property (readonly, nonatomic) RTVisitTrajectorySequenceClassifierBatchMode *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHyperParameter:(id)a0;
- (const float *)batchProcess:(const float *)a0 featureVectorStride:(unsigned long long)a1 firstSequenceIndex:(unsigned long long)a2 firstSequenceLength:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (const float *)predictFromInput:(const float *)a0 featureVectorStride:(unsigned long long)a1 firstSequenceIndex:(unsigned long long)a2 firstSequenceLength:(unsigned long long)a3 batchSize:(unsigned long long)a4;

@end
