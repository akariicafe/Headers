@class FigWiredMemory;
@protocol MTLBuffer;

@interface FigStillImageSharedProcessingResources : NSObject {
    BOOL _resourcesAllocated;
    int _resourceAllocationError;
    id<MTLBuffer> _sharedMetalBuffer;
    FigWiredMemory *_sharedRegWarpBuffer;
}

@property (readonly, nonatomic) unsigned long long sharedMetalBufferLengthInMB;
@property (readonly, nonatomic) unsigned long long sharedRegWarpBufferLengthInMB;
@property (readonly, nonatomic) id<MTLBuffer> sharedMetalBuffer;
@property (readonly, nonatomic) FigWiredMemory *sharedRegWarpBuffer;

+ (void)initialize;

- (id)description;
- (void)dealloc;
- (id)initWithSharedMetalBufferLengthInMB:(unsigned long long)a0 sharedRegWarpBufferLengthInMB:(unsigned long long)a1;
- (int)ensureAllocatedSync;

@end
