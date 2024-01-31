@class NSString, __end_cap_, NSObject, __end_;
@protocol OS_dispatch_queue, MTLDevice;

@interface AGXA10FamilyThreadedRenderPass : IOGPUMetalParallelRenderCommandEncoder <MTLParallelRenderCommandEncoderSPI> {
    void *_impl;
    NSObject<OS_dispatch_queue> *dispatchQueue;
    struct vector<AGXA10FamilyRenderContext *, std::allocator<AGXA10FamilyRenderContext *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<AGXA10FamilyRenderContext **, std::allocator<AGXA10FamilyRenderContext *>> { id *__value_; } x1; } _subOBJCRenderCommandEncoders;
    struct vector<AGX::G9::RenderContext *, std::allocator<AGX::G9::RenderContext *>> { struct RenderContext **__begin_; struct RenderContext **__end_; struct __compressed_pair<AGX::G9::RenderContext **, std::allocator<AGX::G9::RenderContext *>> { struct RenderContext **__value_; } __end_cap_; } _subRenderCommandEncoders;
}

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDepthStoreAction:(unsigned long long)a0;
- (void)dealloc;
- (void)setStencilStoreAction:(unsigned long long)a0;
- (id).cxx_construct;
- (void)setColorStoreAction:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isMemorylessRender;
- (void)endEncoding;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)a0 lastBatch:(unsigned int)a1 filterIndex:(unsigned int)a2;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;
- (id)renderCommandEncoder;
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a0 capacity:(unsigned long long)a1;
- (BOOL)setMTLCounterSampleLocationWithBuffer:(id)a0 startIndex:(unsigned int)a1 endIndex:(unsigned int)a2;

@end
