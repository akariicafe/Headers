@class MPSCNNFullyConnected;

@interface VCPCNNFullConnectionBlockGPU : VCPCNNFullConnectionBlock {
    MPSCNNFullyConnected *_mpsFullConn;
}

- (void).cxx_destruct;
- (int)forward;
- (int)convVCPNeuronTypeToMPS:(int)a0;
- (int)shuffleWeights:(float *)a0 fromSrc:(float *)a1 inputChannels:(int)a2 inputHeight:(int)a3 inputWidth:(int)a4 outputChannels:(int)a5;
- (int)setupMPS;
- (int)loadWeights:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 inputDim:(int)a1 outputDim:(int)a2 quantFactor:(int)a3;

@end
