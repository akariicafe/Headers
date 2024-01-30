@class NSArray;

@interface VCPImageLivePhotoBlurAnalyzer : VCPBlurAnalyzer {
    NSArray *_movingObjects;
}

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (id)initWithMovingObjectsResults:(id)a0;

@end
