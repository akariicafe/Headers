@class FigMetalUtils, NSString;
@protocol FigMetalAllocatorImpl;

@interface FigMetalAllocatorBackend : NSObject {
    id<FigMetalAllocatorImpl> _storage;
    struct MTLRangeAllocator { struct MTLRangeAllocatorElement *elements; unsigned int numElements; unsigned long long capacity; unsigned long long capacityIncrement; unsigned long long defaultAlignmentMask; } _rangeAllocator;
    FigMetalUtils *_utils;
    BOOL _isExternalMemory;
    NSString *_label;
}

@property (readonly, nonatomic) unsigned long long memSize;
@property (readonly, nonatomic) unsigned long long usedSize;
@property (readonly, nonatomic) unsigned long long largestOccupiedOffset;
@property (readonly, nonatomic) int allocatorType;
@property (readonly, nonatomic) unsigned long long resourceOptions;
@property (readonly, nonatomic) unsigned long long maxContiguousFreeSize;

- (void)dealloc;
- (void)purgeResources;
- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithDevice:(id)a0 allocatorType:(int)a1;
- (int)setupWithDescriptor:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; })getSizeAndAlignForBufferDescriptor:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; })getSizeAndAlignForDescriptor:(id)a0;
- (BOOL)hasCreatedResource:(id)a0;
- (void)makeBufferAliasable:(id *)a0;
- (void)makeTextureAliasable:(id *)a0;
- (id)newBufferWithDescriptor:(id)a0 sizeAlign:(struct { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)newTextureWithDescriptor:(id)a0 sizeAlign:(struct { unsigned long long x0; unsigned long long x1; } *)a1;
- (int)setupWithDescriptor:(id)a0 allocatorBackend:(id)a1;
- (unsigned long long)usedSizeAll;

@end
