@interface MLPPoolingLayer : MLPConvolutionBase

- (id)backward:(id)a0 inputGradient:(id)a1;
- (void)createKernel;
- (id)forward:(id)a0 input:(id)a1 labels:(id)a2 runInference:(BOOL)a3;
- (id)generateNode:(id)a0 model:(id)a1 weightIter:(unsigned long long *)a2;
- (id)initWithName:(id)a0 inputLength:(unsigned long long)a1 inputChannels:(unsigned long long)a2 kernelWidth:(unsigned long long)a3 kernelHeight:(unsigned long long)a4 kernelStride:(unsigned long long)a5;
- (id)initWithName:(id)a0 parameters:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7[8]; unsigned long long x8; int x9[8][4]; int x10[4][4]; int x11[16]; float x12[16]; void *x13[16]; void *x14[16]; } *)a1;
- (id)initWithName:(id)a0 previousLayer:(id)a1 kernelWidth:(unsigned long long)a2 kernelHeight:(unsigned long long)a3 kernelStride:(unsigned long long)a4;

@end
