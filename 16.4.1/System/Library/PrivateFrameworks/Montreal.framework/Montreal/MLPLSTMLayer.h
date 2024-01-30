@class NSArray, MPSRNNMatrixTrainingLayer, NSString, NSMutableArray, MPSLSTMDescriptor;

@interface MLPLSTMLayer : MLPLayer <MLPLayerOptimizerProtocol>

@property unsigned long long inputSize;
@property unsigned long long outputSize;
@property int inputGateActivation;
@property int forgetGateActivation;
@property int cellGateActivation;
@property int outputGateActivation;
@property int cellToOutputActivation;
@property (retain) MPSLSTMDescriptor *lstmDesc;
@property (retain) MPSRNNMatrixTrainingLayer *filter;
@property (retain) NSMutableArray *optimizers;
@property (retain) NSMutableArray *weights;
@property (retain) NSMutableArray *weightGradients;
@property (retain) NSMutableArray *trainingStates;
@property float *initialWeights_0;
@property float *initialWeights_1;
@property float *initialBias_0;
@property float *initialBias_1;
@property unsigned long long weightAttributes;
@property (retain) NSArray *srcMatrices;
@property (readonly) NSArray *mlpOptimizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)seqForwardCombinedMatrix:(id)a0 input:(id)a1;
- (void)createKernel;
- (void)exportWeightsWithWeightMatrix:(id)a0 weightID:(unsigned long long)a1 destination:(float *)a2 recurrent:(BOOL)a3;
- (id)generateNode:(id)a0 model:(id)a1 weightIter:(unsigned long long *)a2;
- (id)initWithName:(id)a0 inputSize:(unsigned long long)a1 outputSize:(unsigned long long)a2 weightAttributes:(unsigned long long)a3;
- (id)initWithName:(id)a0 parameters:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7[8]; unsigned long long x8; int x9[8][4]; int x10[4][4]; int x11[16]; float x12[16]; void *x13[16]; void *x14[16]; } *)a1;
- (id)matrixIDToString:(unsigned long long)a0;
- (void)populateActivation:(int *)a0 montrealActivationType:(long long)a1;
- (id)seqBackward:(id)a0 dataBatch:(id)a1 inputGradient:(id)a2;
- (id)seqBackwardCombinedMatrix:(id)a0 inputGradient:(id)a1;
- (id)seqBackwardDifferentMatrices:(id)a0 inputGradient:(id)a1;
- (id)seqForward:(id)a0 input:(id)a1 dataBatch:(id)a2 runInference:(BOOL)a3;
- (id)seqForwardDifferentMatrices:(id)a0 input:(id)a1;
- (void)updateSourceMatrix:(id)a0 inference:(BOOL)a1;

@end
