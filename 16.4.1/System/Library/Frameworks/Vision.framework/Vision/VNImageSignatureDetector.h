@interface VNImageSignatureDetector : VNDetector {
    struct unique_ptr<vision::mod::ImageDescriptorProcessorHyperplaneLSH, std::default_delete<vision::mod::ImageDescriptorProcessorHyperplaneLSH>> { struct __compressed_pair<vision::mod::ImageDescriptorProcessorHyperplaneLSH *, std::default_delete<vision::mod::ImageDescriptorProcessorHyperplaneLSH>> { struct ImageDescriptorProcessorHyperplaneLSH *__value_; } __ptr_; } _hyperplaneLSHProcessor;
}

@property (readonly, nonatomic) unsigned long long imageSignatureprintType;
@property (readonly, nonatomic) unsigned long long imageSignatureHashType;

+ (id)configurationOptionKeysForDetectorKey;

- (id).cxx_construct;
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 warningRecorder:(id)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })_calculateImageSignatureHashDescriptorFrom:(const void *)a0 options:(id)a1 error:(id *)a2;
- (struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })_calculateImageSignatureprintDescriptorFromOptions:(id)a0 error:(id *)a1;
- (BOOL)needsMetalContext;
- (BOOL)supportsProcessingDevice:(id)a0;

@end
