@class MTLRenderPassDescriptor;

@interface MTLDebugParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {
    unsigned int _unknownStoreActions;
    struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__1::__cxx_atomic_base_impl<unsigned long long> > { _Atomic unsigned long long __a_value; } __a_; } _attachmentWriteMask;
}

@property (readonly, copy, nonatomic) MTLRenderPassDescriptor *descriptor;

- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (id)renderCommandEncoder;
- (void)setStencilStoreActionOptions:(unsigned long long)a0;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)a0 lastBatch:(unsigned int)a1 filterIndex:(unsigned int)a2;
- (void)setDepthStoreActionOptions:(unsigned long long)a0;
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a0 capacity:(unsigned long long)a1;
- (id)description;
- (void)setColorStoreAction:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setDepthStoreAction:(unsigned long long)a0;
- (void)setColorStoreActionOptions:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)endEncoding;
- (void)setStencilStoreAction:(unsigned long long)a0;
- (id)initWithBaseRenderPass:(id)a0 commandBuffer:(id)a1 descriptor:(id)a2;
- (void)mergeAttachmentWriteMask:(unsigned long long)a0;

@end
