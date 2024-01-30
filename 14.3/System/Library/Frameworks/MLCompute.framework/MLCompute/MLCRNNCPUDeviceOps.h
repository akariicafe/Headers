@class NSData, NSMutableArray;

@interface MLCRNNCPUDeviceOps : MLCCPUDeviceOps

@property (nonatomic) BOOL batchFirst;
@property (nonatomic) BOOL hasPeephole;
@property (nonatomic) BOOL returnsSequences;
@property (nonatomic) BOOL biDirectional;
@property (retain, nonatomic) NSData *lstmDeltaParams;
@property (retain, nonatomic) NSMutableArray *weightAndBiasGateDeltaBuffers;
@property (retain, nonatomic) NSData *trainingCache;
@property (retain, nonatomic) NSMutableArray *combinedGateWeightsAndBias;
@property (retain, nonatomic) NSMutableArray *combinedInputsBuffer;
@property (retain, nonatomic) NSMutableArray *combinedOutputsBuffer;
@property (nonatomic) unsigned long long numLayers;
@property (nonatomic) unsigned long long inputSize;
@property (nonatomic) unsigned long long hiddenSize;
@property (nonatomic) unsigned long long numAccumulatorsPerParameter;
@property (nonatomic) unsigned long long numParametersForSingleLSTM;

+ (id)deviceOpsWithType:(int)a0 params:(id)a1 inDeltaData:(id)a2 outDeltaData:(id)a3 weightsDeltaData:(id)a4 biasDeltaData:(id)a5 weightsMomentumData:(id)a6 biasMomentumData:(id)a7;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithType:(int)a0 params:(id)a1 inDeltaData:(id)a2 outDeltaData:(id)a3 weightsDeltaData:(id)a4 biasDeltaData:(id)a5 weightsMomentumData:(id)a6 biasMomentumData:(id)a7 betaDeltaData:(id)a8 gammaDeltaData:(id)a9 betaMomentumData:(id)a10 gammaMomentumData:(id)a11;

@end
