@class NSMutableArray, FigMetalContext;
@protocol MTLHeap, MTLBuffer;

@interface ToneMapSmoothingResources : NSObject {
    FigMetalContext *_metalContext;
    id<MTLHeap> _internalHeap;
    struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *_dimensions;
    unsigned int _mtlSubAllocatorID;
}

@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned long long maxNPyramidLevels;
@property (readonly, nonatomic) NSMutableArray *masksPyramid;
@property (readonly, nonatomic) NSMutableArray *referencePyramidOdd;
@property (readonly, nonatomic) NSMutableArray *referencePyramidEven;
@property (readonly, nonatomic) NSMutableArray *outputPyramidOdd;
@property (readonly, nonatomic) NSMutableArray *outputPyramidEven;
@property (readonly, nonatomic) id<MTLBuffer> srlGlobalStatsBuffer;
@property (readonly, nonatomic) id<MTLBuffer> srlFaceStatsBuffer;
@property (readonly, nonatomic) id<MTLBuffer> srlCoeffsBuffer;
@property (readonly, nonatomic) int srlVersion;
@property (readonly, nonatomic) id<MTLBuffer> sffDescriptorsBuffer;
@property (readonly, nonatomic) id<MTLBuffer> sffNThreadGroupsBuffer;
@property (readonly, nonatomic) id<MTLBuffer> mstmTuningParams;
@property (readonly, nonatomic) id<MTLBuffer> srlOnMSTMTuningParams;

+ (unsigned long long)calcMaxNPyramidLevelsForWidth:(unsigned long long)a0 height:(unsigned long long)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)calcPyramidDimensions;
- (id)initWithMetalContext:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 mtlSubAllocatorID:(unsigned int)a3 srlVersion:(int)a4;
- (int)allocateResourcesForWidth:(unsigned long long)a0 height:(unsigned long long)a1 useMaskPyramid:(BOOL)a2;
- (void)makeResourcesAliasable;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })computeSizeForLevel:(unsigned long long)a0 xDivisor:(unsigned long long)a1 yDivisor:(unsigned long long)a2;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })computeSizeForOddEvenLevel:(unsigned long long)a0 xDivisor:(unsigned long long)a1 yDivisor:(unsigned long long)a2;

@end
