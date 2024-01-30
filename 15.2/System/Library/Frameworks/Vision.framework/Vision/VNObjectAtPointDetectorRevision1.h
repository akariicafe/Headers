@interface VNObjectAtPointDetectorRevision1 : VNEspressoModelFileBasedDetector {
    struct shared_ptr<vision::mod::TapToBox> { struct TapToBox *__ptr_; struct __shared_weak_count *__cntrl_; } _tapToBox;
}

+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)a0;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)a0;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
