@class NSArray;

@interface VCPImageFaceExpressionAnalyzer : VCPImageAnalyzer {
    NSArray *_faces;
}

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (id)initWithFaceResults:(id)a0;

@end
