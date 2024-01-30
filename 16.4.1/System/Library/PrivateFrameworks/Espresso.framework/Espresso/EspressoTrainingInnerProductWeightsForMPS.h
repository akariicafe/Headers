@protocol MTLBuffer;

@interface EspressoTrainingInnerProductWeightsForMPS : EspressoInnerProductWeightsForMPS

@property (retain) id<MTLBuffer> weightsBuffer;
@property (retain) id<MTLBuffer> biasesBuffer;

- (id)initWithParams:(struct inner_product_uniforms { unsigned int x0; unsigned int x1; int x2; int x3; int x4; float x5; float x6; int x7; int x8; int x9; BOOL x10; int x11; int x12; int x13; float x14; float x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; int x25; int x26; int x27; int x28; int x29; int x30; int x31; int x32; })a0 forMode:(BOOL)a1;
- (float *)biasTerms;
- (void *)weights;
- (BOOL)ready;
- (void).cxx_destruct;

@end
