@interface VNScreenGazeDetector : VNEspressoModelFileBasedDetector {
    struct shared_ptr<vision::mod::ScreenGazePredictor> { struct ScreenGazePredictor *__ptr_; struct __shared_weak_count *__cntrl_; } _predictor;
}

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
