@class VCPCNNPetsDetector;

@interface VCPImagePetsAnalyzer : VCPImageAnalyzer {
    int _maxNumRegions;
    VCPCNNPetsDetector *_petsDetector;
}

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (int)convertResultsToDict:(id)a0 results:(id)a1;
- (id)initWithMaxNumRegions:(int)a0;

@end
