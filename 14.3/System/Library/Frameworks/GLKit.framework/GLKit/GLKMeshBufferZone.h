@class GLKMeshBufferAllocator, NSString, NSMutableOrderedSet;

@interface GLKMeshBufferZone : NSObject <MDLMeshBufferZone> {
    NSMutableOrderedSet *_buffers;
    BOOL _destroyInvoked;
}

@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) GLKMeshBufferAllocator *allocator;
@property (readonly, nonatomic) unsigned int glBufferName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)a0 allocator:(id)a1;
- (id)newBufferWithLength:(unsigned long long)a0 type:(unsigned long long)a1;
- (void)destroyBuffer:(id)a0;

@end
