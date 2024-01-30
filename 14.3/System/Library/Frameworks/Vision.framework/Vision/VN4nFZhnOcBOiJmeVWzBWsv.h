@interface VN4nFZhnOcBOiJmeVWzBWsv : VNDetector {
    struct unique_ptr<vision::mod::ImageAnalyzer, std::__1::default_delete<vision::mod::ImageAnalyzer> > { struct __compressed_pair<vision::mod::ImageAnalyzer *, std::__1::default_delete<vision::mod::ImageAnalyzer> > { struct ImageAnalyzer *__value_; } __ptr_; } _imageAnalyzer;
}

@property (class, readonly) struct CGSize { double x0; double x1; } networkRequiredInputImageSize;

- (void).cxx_destruct;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;
- (BOOL)_performAnalysisOnPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)_imageNeuralHashprintObservationsForRequestRevision:(unsigned long long)a0 error:(id *)a1;
- (id).cxx_construct;
- (id)supportedImageSizeSetForProcessingOptions:(id)a0;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)supportsProcessingDevice:(id)a0;

@end
