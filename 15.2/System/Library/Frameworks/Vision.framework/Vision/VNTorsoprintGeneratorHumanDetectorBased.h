@interface VNTorsoprintGeneratorHumanDetectorBased : VNTorsoprintGeneratorBase {
    struct shared_ptr<vision::mod::TorsoprintGenerator> { struct TorsoprintGenerator *__ptr_; struct __shared_weak_count *__cntrl_; } _torsoprintGenerator;
}

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (const void *)modelVersionForOptions:(id)a0;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)torsoprintForImageBuffer:(struct __CVBuffer { } *)a0 requestRevision:(unsigned long long)a1 error:(id *)a2;

@end
