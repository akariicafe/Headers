@class NSString, VCPCNNModelEspresso, NSURL, NSMutableArray;

@interface VCPImageHumanPoseAnalyzer : VCPImageAnalyzer {
    VCPCNNModelEspresso *_modelEspresso;
    NSURL *_netFileUrl;
    float *_inputData;
    NSString *_resConfig;
    NSMutableArray *_persons;
    NSMutableArray *_results;
    BOOL _saveKeypoints;
    int _inputWidth;
    int _inputHeight;
    float *_heatmapNms;
    BOOL _forceCPU;
    BOOL _sharedModel;
    BOOL _flushModel;
}

@property BOOL trackingMode;

+ (BOOL)saveKeypoints;
+ (id)sharedModel:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (int)createModelWithHeight:(int)a0 srcWidth:(int)a1;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (int)configForAspectRatio:(id)a0;
- (int)copyImage:(struct __CVBuffer { } *)a0 toData:(float *)a1 withChannels:(int)a2;
- (int)createInput:(float *)a0 withBuffer:(struct __CVBuffer { } *)a1 modelInputHeight:(int)a2 modelInputWidth:(int)a3;
- (int)generateHumanPose:(struct __CVBuffer { } *)a0;
- (id)initWithKeypointsOption:(BOOL)a0 aspectRatio:(id)a1 lightweight:(BOOL)a2 forceCPU:(BOOL)a3 sharedModel:(BOOL)a4 flushModel:(BOOL)a5;
- (int)parsePersons:(float)a0 width:(int)a1 height:(int)a2;
- (int)preferredInputFormat:(int *)a0 height:(int *)a1 format:(unsigned int *)a2;
- (int)processPersons:(float)a0 width:(int)a1 height:(int)a2;
- (int)reInitModel;
- (int)updateModelForAspectRatio:(id)a0;

@end
