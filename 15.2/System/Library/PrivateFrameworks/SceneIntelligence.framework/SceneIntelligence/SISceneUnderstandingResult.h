@interface SISceneUnderstandingResult : NSObject {
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _labelsTensor;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _probabilitiesTensor;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _normalsTensor;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } resolution;
@property (readonly, nonatomic) struct _SITensorDim { unsigned long long value[4]; } labelTensorDimensions;
@property (readonly, nonatomic) struct _SITensorDim { unsigned long long value[4]; } normalTensorDimensions;
@property (readonly, nonatomic) struct _SITensorDim { unsigned long long value[4]; } probabilitiesTensorDimensions;

+ (struct CGSize { double x0; double x1; })outputDimensions;

- (void)dealloc;
- (id)initWithModel:(id)a0;
- (struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)labelsTensor;
- (struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)normalsTensor;
- (struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)probabilitiesTensor;
- (long long)writeNormals:(struct __CVBuffer { } *)a0 orientation:(long long)a1;
- (long long)writeProbabilities:(struct __CVBuffer { } *)a0;
- (long long)writeLabels:(struct __CVBuffer { } *)a0;

@end
