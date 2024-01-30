@class FigMetalUtils;

@interface FigMetalNoAliasingAllocator : NSObject <FigMetalAllocatorImpl>

@property (readonly, nonatomic) unsigned long long alignment;
@property (readonly, nonatomic) unsigned long long memSize;
@property (readonly, nonatomic) FigMetalUtils *utils;

- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithMetalUtils:(id)a0;
- (int)setupWithDescriptor:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; })getSizeAndAlignForDescriptor:(id)a0;
- (unsigned long long)textureOffset:(id)a0;
- (BOOL)hasCreatedTexture:(id)a0;
- (id)description;
- (void)purgeResources;

@end
