@class NSString, AGXA11FamilyDevice, AGXA11FamilyBuffer;
@protocol MTLDevice;

@interface AGXA11FamilyIndirectArgumentEncoder : IOGPUMetalIndirectArgumentEncoder <MTLArgumentEncoder> {
    struct IndirectArgumentEncoder { AGXA11FamilyDevice *device; struct IndirectArgumentLayout *layout; char *arguments; AGXA11FamilyBuffer *current_argument_buffer; } _impl;
}

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long encodedLength;
@property (readonly) unsigned long long alignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;
- (void)setSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setFunctionTable:(id)a0 atIndex:(unsigned long long)a1;
- (void)setVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (id).cxx_construct;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setFunctionTables:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void)setArgumentBuffer:(id)a0 offset:(unsigned long long)a1;
- (void *)constantDataAtIndex:(unsigned long long)a0;
- (void)setVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setRenderPipelineState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setRenderPipelineStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setComputePipelineState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setComputePipelineStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setIndirectCommandBuffer:(id)a0 atIndex:(unsigned long long)a1;
- (void)setIndirectCommandBuffers:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)newArgumentEncoderForBufferAtIndex:(unsigned long long)a0;
- (id)initWithLayout:(id)a0 device:(id)a1;

@end
