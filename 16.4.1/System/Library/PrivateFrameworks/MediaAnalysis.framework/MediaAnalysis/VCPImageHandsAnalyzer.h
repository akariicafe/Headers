@class NSString, VCPCNNHandKeypointsDetector, VCPCNNHandsDetector, NSMutableArray;

@interface VCPImageHandsAnalyzer : VCPImageAnalyzer {
    int _maxNumRegions;
    int _inputWidth;
    int _inputHeight;
    VCPCNNHandsDetector *_handsDetector;
    VCPCNNHandKeypointsDetector *_handsKeypointsDetector;
    NSMutableArray *_results;
    NSString *_resConfig;
}

- (id)init;
- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (int)configForAspectRatio:(id)a0;
- (int)convertSingleResultToDict:(struct CGPoint { double x0; double x1; }[21])a0 keypointConfidence:(float *)a1 box:(id)a2 results:(id)a3;
- (long long)getClosestAspectRatio:(id)a0;
- (id)initWithKeypointsOption:(int)a0 forceCPU:(BOOL)a1 sharedModel:(BOOL)a2 aspectRatio:(id)a3 modelName:(id)a4 revision:(int)a5;
- (int)preferredInputFormat:(int *)a0 height:(int *)a1 format:(unsigned int *)a2;
- (int)updateModelForAspectRatio:(id)a0;

@end
