@class FigMetalUtils;
@protocol MTLHeap;

@interface FigMetalHeapAllocator : NSObject <FigMetalAllocatorImpl> {
    id<MTLHeap> _heap;
}

@property (readonly, nonatomic) unsigned long long alignment;
@property (readonly, nonatomic) unsigned long long memSize;
@property (readonly, nonatomic) FigMetalUtils *utils;

- (void)purgeResources;
- (id)description;
- (void).cxx_destruct;
- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (id)initWithMetalUtils:(id)a0;
- (int)setupWithDescriptor:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; })getSizeAndAlignForDescriptor:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; })getSizeAndAlignForBufferDescriptor:(id)a0;
- (id)newBufferWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (unsigned long long)textureOffset:(id)a0;
- (unsigned long long)bufferOffset:(id)a0;
- (BOOL)hasCreatedTexture:(id)a0;

@end
