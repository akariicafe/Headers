@class NSString, VCPCNNModelEspresso, VCPHumanPoseImageRequest, NSMutableArray;

@interface VCPVideoHumanActionClassifier : VCPVideoAnalyzer {
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
    NSString *_resConfig;
    int _inputWidth;
    int _inputHeight;
    int _inputChannels;
    int _inputSize;
    NSString *_action;
    float _confidence;
    VCPHumanPoseImageRequest *_poseRequest;
    NSMutableArray *_bodyArray;
    BOOL _valid;
    NSMutableArray *_results;
    NSMutableArray *_keyPersonResults;
}

- (id)results;
- (int)createModel;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)privateResults;
- (int)prepareData:(id)a0;
- (int)detect;
- (id)keypointsFromObservations:(id)a0;
- (id)analyzeBodyArray:(id)a0;

@end
