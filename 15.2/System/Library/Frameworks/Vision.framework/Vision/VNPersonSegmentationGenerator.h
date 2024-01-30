@class NSString, CIContext;

@interface VNPersonSegmentationGenerator : VNEspressoModelFileBasedDetector {
    CIContext *_ciContext;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _espressoMaskInputBuffer;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _espressoMaskOutputBuffer;
}

@property (class, readonly, nonatomic) NSString *inputImageBlobName;
@property (class, readonly, nonatomic) NSString *inputMaskBlobName;
@property (class, readonly, nonatomic) NSString *outputMaskBlobName;
@property (class, readonly, nonatomic) BOOL rotateImageToMatchNetworkOrientation;
@property (class, readonly, nonatomic) BOOL inputMaskRequired;

+ (id)configurationOptionKeysForDetectorKey;
+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
