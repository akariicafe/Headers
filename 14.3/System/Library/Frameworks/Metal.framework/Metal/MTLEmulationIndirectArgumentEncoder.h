@class _MTLIndirectArgumentBufferLayout, NSString, MTLEmulationIndirectArgumentBufferLayout;
@protocol MTLDevice;

@interface MTLEmulationIndirectArgumentEncoder : _MTLIndirectArgumentEncoder <MTLArgumentEncoderSPI> {
    char *_destination;
    MTLEmulationIndirectArgumentBufferLayout *_emulationLayout;
}

@property (readonly) unsigned long long encodedLength;
@property (readonly, nonatomic) _MTLIndirectArgumentBufferLayout *layout;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long alignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)dealloc;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setArgumentBuffer:(id)a0 offset:(unsigned long long)a1;
- (void *)constantDataAtIndex:(unsigned long long)a0;
- (void)setSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setRenderPipelineState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setRenderPipelineStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setComputePipelineState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setComputePipelineStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)newArgumentEncoderForBufferAtIndex:(unsigned long long)a0;
- (id)initWithLayout:(id)a0 device:(id)a1;
- (void)setFunctionPointer:(id)a0 atIndex:(unsigned long long)a1;
- (void)setFunctionPointers:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
