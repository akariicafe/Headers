@class FigMetalTextureDescriptor, NSString, FigMetalBufferDescriptor, FigMetalUtils;
@protocol FigMetalAllocatorImpl;

@interface FigMetalAllocator : NSObject {
    id<FigMetalAllocatorImpl> _storage;
    struct MTLRangeAllocator { struct MTLRangeAllocatorElement *elements; unsigned int numElements; unsigned long long capacity; unsigned long long capacityIncrement; unsigned long long defaultAlignmentMask; } _rangeAllocator;
    FigMetalUtils *_utils;
    FigMetalTextureDescriptor *_texDesc;
    FigMetalBufferDescriptor *_bufDesc;
    BOOL _isExternalMemory;
    FigMetalAllocator *subAllocator[5];
    BOOL _allowFallBack;
    NSString *_label;
}

@property (readonly, nonatomic) unsigned long long memSize;
@property (readonly, nonatomic) unsigned long long usedSize;
@property (readonly, nonatomic) unsigned long long largestOccupiedOffset;
@property (readonly, nonatomic) int allocatorType;
@property (readonly, nonatomic) unsigned long long resourceOptions;
@property (readonly, nonatomic) int compressionLevel;
@property (readonly, nonatomic) unsigned long long maxContiguousFreeSize;

- (void)purgeResources;
- (void)reset:(unsigned int)a0;
- (id)description;
- (void).cxx_destruct;
- (id)newTextureWithDescriptor:(id)a0;
- (void)dealloc;
- (void)reset;
- (id)newTextureDescriptor;
- (id)newBufferWithDescriptor:(id)a0;
- (void)purgeResources:(unsigned int)a0;
- (id)newBufferDescriptor;
- (void)makeTextureAliasable:(id *)a0;
- (void)makeBufferAliasable:(id *)a0;
- (int)setupWithDescriptor:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; })getSizeAndAlignForDescriptor:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; })getSizeAndAlignForBufferDescriptor:(id)a0;
- (id)initWithDevice:(id)a0 allocatorType:(int)a1;
- (id)newTextureDescriptor:(unsigned int)a0;
- (id)newBufferDescriptor:(unsigned int)a0;
- (int)addExternalMetalBuffer:(id)a0 atSubAllocatorID:(unsigned int)a1;
- (id)newTextureWithDescriptor:(id)a0 subAllocatorID:(unsigned int)a1;
- (id)newBufferWithDescriptor:(id)a0 subAllocatorID:(unsigned int)a1;
- (unsigned long long)usedSize:(unsigned int)a0;
- (unsigned long long)largestOccupiedOffset:(unsigned int)a0;
- (unsigned long long)memSize:(unsigned int)a0;
- (unsigned long long)usedSizeAll;

@end
