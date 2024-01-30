@interface VNImageSignatureDetector : VNDetector {
    struct unique_ptr<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float>, std::__1::default_delete<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float> > > { struct __compressed_pair<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float> *, std::__1::default_delete<vision::mod::ImageDescriptorProcessorHyperplaneLSH<float> > > { struct ImageDescriptorProcessorHyperplaneLSH<float> *__value_; } __ptr_; } _hyperplaneLSHProcessor;
}

@property (readonly, nonatomic) unsigned long long imageSignatureprintType;
@property (readonly, nonatomic) unsigned long long imageSignatureHashType;

+ (id)configurationOptionKeysForDetectorKey;

- (void).cxx_destruct;
- (struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })_calculateImageSignatureprintDescriptorFromOptions:(id)a0 error:(id *)a1;
- (struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })_calculateImageSignatureHashDescriptorFrom:(const struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; } *)a0 options:(id)a1 error:(id *)a2;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;
- (id).cxx_construct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)supportsProcessingDevice:(id)a0;
- (BOOL)needsMetalContext;

@end
