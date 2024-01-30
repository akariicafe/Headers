@class NSMutableDictionary;

@interface MLPMatrixLayer : MLPLayer

@property unsigned long long numInputs;
@property unsigned long long numOutputs;
@property (retain) NSMutableDictionary *inputMatrixToSecondKernel;
@property (retain) NSMutableDictionary *inputMatrixToFirstKernel;

- (void).cxx_destruct;
- (void)allocateInputDictionaries;
- (id)initWithLayerType:(unsigned long long)a0 name:(id)a1 neuronType:(int)a2 neuronParams:(id)a3;
- (id)initWithLayerType:(unsigned long long)a0 name:(id)a1 parameters:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7[8]; unsigned long long x8; int x9[8][4]; int x10[4][4]; int x11[16]; float x12[16]; void *x13[16]; void *x14[16]; } *)a2;
- (void)updateInputMatrixToFirstKernel:(id)a0 index:(id)a1 inference:(BOOL)a2;
- (void)updateInputMatrixToSecondKernel:(id)a0 index:(id)a1 inference:(BOOL)a2;

@end
