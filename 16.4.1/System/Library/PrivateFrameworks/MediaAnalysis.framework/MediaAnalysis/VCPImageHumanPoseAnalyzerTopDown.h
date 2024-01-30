@class VCPCNNPersonKeypointsDetector, NSMutableArray, VCPCNNPersonDetector;

@interface VCPImageHumanPoseAnalyzerTopDown : VCPImageAnalyzer {
    int _maxNumRegions;
    int _inputWidth;
    int _inputHeight;
    VCPCNNPersonDetector *_personDetector;
    VCPCNNPersonKeypointsDetector *_personKeypointsDetector;
    NSMutableArray *_results;
}

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (id)initWithMaxNumRegions:(int)a0 forceCPU:(BOOL)a1 sharedModel:(BOOL)a2 inputConfig:(id)a3;
- (int)preferredInputFormat:(int *)a0 height:(int *)a1 format:(unsigned int *)a2;

@end
