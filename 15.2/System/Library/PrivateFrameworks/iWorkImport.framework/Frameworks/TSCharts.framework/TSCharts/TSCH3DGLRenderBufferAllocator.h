@class NSString, TSCH3DRenderBufferStorage;

@interface TSCH3DGLRenderBufferAllocator : NSObject <TSCH3DRenderBufferAllocator> {
    TSCH3DRenderBufferStorage *_storage;
}

@property (readonly, nonatomic) BOOL isTexturable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocator;
+ (id)allocatorWithStorage:(id)a0;

- (id)initWithStorage:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)bufferWithAllocatorInfo:(id)a0 internalFormat:(unsigned int)a1 attachment:(unsigned int)a2;
- (id)colorbufferWithAllocatorInfo:(id)a0;
- (id)depthbufferWithAllocatorInfo:(id)a0;

@end
