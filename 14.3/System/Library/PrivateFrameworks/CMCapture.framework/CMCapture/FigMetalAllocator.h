@class NSString, FigMetalTextureDescriptor, FigMetalUtils;
@protocol FigMetalAllocatorImpl;

@interface FigMetalAllocator : NSObject {
    id<FigMetalAllocatorImpl> _storage;
    struct MTLRangeAllocator { struct MTLRangeAllocatorElement *elements; unsigned int numElements; unsigned long long capacity; unsigned long long capacityIncrement; unsigned long long defaultAlignmentMask; } _rangeAllocator;
    FigMetalUtils *_utils;
    FigMetalTextureDescriptor *_texDesc;
    BOOL _isExternalMemory;
    FigMetalAllocator *subAllocator[5];
    NSString *_label;
}

@property (readonly, nonatomic) unsigned long long memSize;
@property (readonly, nonatomic) unsigned long long usedSize;
@property (readonly, nonatomic) unsigned long long largestOccupiedOffset;
@property (readonly, nonatomic) BOOL dryRun;
@property (readonly, nonatomic) int allocatorType;
@property (readonly, nonatomic) unsigned long long resourceOptions;

- (void).cxx_destruct;
- (void)purgeResources:(unsigned int)a0;
- (void)reset:(unsigned int)a0;
- (void)reset;
- (void)dealloc;
- (void)makeTextureAliasable:(id *)a0;
- (int)setupWithDescriptor:(id)a0;
- (id)initWithDevice:(id)a0 allocatorType:(int)a1;
- (int)addExternalMetalBuffer:(id)a0 atSubAllocatorID:(unsigned int)a1;
- (id)newTextureWithDescriptor:(id)a0 subAllocatorID:(unsigned int)a1;
- (unsigned long long)usedSize:(unsigned int)a0;
- (unsigned long long)largestOccupiedOffset:(unsigned int)a0;
- (unsigned long long)usedSizeAll;
- (id)description;
- (void)purgeResources;
- (id)newTextureWithDescriptor:(id)a0;
- (unsigned long long)memSize:(unsigned int)a0;

@end
