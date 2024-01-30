@protocol MTLBuffer;

@interface EspressoTrainingConvolutionWeightsForMPS : EspressoConvolutionWeightsForMPS {
    BOOL is_training;
}

@property (retain) id<MTLBuffer> weightsBuffer;
@property (retain) id<MTLBuffer> biasesBuffer;

- (BOOL)ready;
- (unsigned int)weightsLayout;
- (id)initWithParams:(struct convolution_uniforms { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; int x10; int x11; int x12; int x13; int x14; int x15; float x16; float x17; struct padding_params_t { short x0; short x1; float x2; short x3; short x4; short x5; short x6; short x7; short x8; } x18; short x19; short x20; short x21; short x22; unsigned short x23; unsigned short x24; int x25; int x26; int x27; int x28; int x29; unsigned short x30; unsigned short x31; unsigned short x32; unsigned short x33; unsigned short x34; short x35; int x36; int x37; int x38; int x39; int x40; short x41; })a0 forMode:(BOOL)a1;
- (void).cxx_destruct;
- (void *)weights;
- (float *)biasTerms;

@end
