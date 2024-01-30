@interface VNImageSignatureDetector : VNDetector {
    struct unique_ptr<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float>, std::default_delete<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float>>> { struct __compressed_pair<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float> *, std::default_delete<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float>>> { void *__value_; } __ptr_; } _hyperplaneLSHProcessor;
}

@property (readonly, nonatomic) unsigned long long imageSignatureprintType;
@property (readonly, nonatomic) unsigned long long imageSignatureHashType;

+ (id)configurationOptionKeysForDetectorKey;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (BOOL)supportsProcessingDevice:(id)a0;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)needsMetalContext;
- (struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })_calculateImageSignatureHashDescriptorFrom:(const void *)a0 options:(id)a1 error:(id *)a2;
- (id).cxx_construct;
- (struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })_calculateImageSignatureprintDescriptorFromOptions:(id)a0 error:(id *)a1;

@end
