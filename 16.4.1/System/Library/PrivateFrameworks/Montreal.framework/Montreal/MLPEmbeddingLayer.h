@class NSString, NSArray, MLPOptimizer, MPSVector, MPSMatrixCopy, MPSMatrixSum, MPSMatrixNeuron, MPSMatrix;

@interface MLPEmbeddingLayer : MLPLayer <MLPLayerOptimizerProtocol> {
    struct vector<std::map<unsigned int, std::vector<unsigned int>>, std::allocator<std::map<unsigned int, std::vector<unsigned int>>>> { void *__begin_; void *__end_; struct __compressed_pair<std::map<unsigned int, std::vector<unsigned int>> *, std::allocator<std::map<unsigned int, std::vector<unsigned int>>>> { void *__value_; } __end_cap_; } wordIDRepetitions;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } weightsInitial;
}

@property unsigned long long vocabSize;
@property unsigned long long embeddingDimension;
@property (retain) MPSMatrixCopy *matrixCopy;
@property const void *initialWeights;
@property (retain) MPSMatrix *weights;
@property (retain) MPSMatrix *weightGradients;
@property (retain) MLPOptimizer *optimizer;
@property (retain) MPSMatrix *weights_mom;
@property (retain) MPSMatrix *weights_vel;
@property (retain) MPSMatrixNeuron *zeroFilter;
@property (retain) MPSMatrixSum *sumFilter;
@property (retain) MPSMatrixCopy *matrixCopyFilter;
@property (retain) MPSVector *offsetVector;
@property (readonly) NSArray *mlpOptimizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)createKernel;
- (id)forward:(id)a0 input:(id)a1 labels:(id)a2 runInference:(BOOL)a3;
- (id)generateNode:(id)a0 model:(id)a1 weightIter:(unsigned long long *)a2;
- (id)initWithName:(id)a0 inputLength:(unsigned long long)a1 vocabSize:(unsigned long long)a2 embeddingDimension:(unsigned long long)a3;
- (id)initWithName:(id)a0 parameters:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7[8]; unsigned long long x8; int x9[8][4]; int x10[4][4]; int x11[16]; float x12[16]; void *x13[16]; void *x14[16]; } *)a1;
- (id)seqBackward:(id)a0 dataBatch:(id)a1 inputGradient:(id)a2;
- (void)seqBackward:(id)a0 inputGradientMatrix:(id)a1 matrixIter:(unsigned long long)a2;
- (id)seqForward:(id)a0 input:(id)a1 dataBatch:(id)a2 runInference:(BOOL)a3;

@end
