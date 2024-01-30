@class NSString, NSMutableOrderedSet, MTKMeshBufferAllocator;
@protocol MTLBuffer;

@interface MTKMeshBufferZone : NSObject <MDLMeshBufferZone> {
    NSMutableOrderedSet *_buffers;
    BOOL _destroyInvoked;
}

@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) MTKMeshBufferAllocator *allocator;
@property (readonly, nonatomic) id<MTLBuffer> buffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
