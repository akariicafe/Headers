@class VCPCNNPetsDetector;

@interface VCPImagePetsAnalyzer : VCPImageAnalyzer {
    int _maxNumRegions;
    VCPCNNPetsDetector *_petsDetector;
}

- (id)initWithMaxNumRegions:(int)a0;
- (void).cxx_destruct;
- (int)convertResultsToDict:(id)a0 results:(id)a1;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;

@end
