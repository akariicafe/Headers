@class MTKMeshBufferZone, NSString, MTKMeshBufferAllocator;
@protocol MTLBuffer;

@interface MTKMeshBuffer : NSObject <MDLMeshBuffer, MDLNamed>

@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) MTKMeshBufferAllocator *allocator;
@property (readonly, nonatomic) MTKMeshBufferZone *zone;
@property (readonly, nonatomic) id<MTLBuffer> buffer;
@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)map;
- (void)dealloc;
- (void)fillData:(id)a0 offset:(unsigned long long)a1;
- (id)_initWithLength:(unsigned long long)a0 allocator:(id)a1 type:(unsigned long long)a2;
- (id)_newMap;
- (id)_initWithBytes:(const void *)a0 length:(unsigned long long)a1 offset:(unsigned long long)a2 allocator:(id)a3 zone:(id)a4 type:(unsigned long long)a5;
- (id)_initWithData:(id)a0 allocator:(id)a1 type:(unsigned long long)a2;
- (id)_initWithLength:(unsigned long long)a0 offset:(unsigned long long)a1 zone:(id)a2 type:(unsigned long long)a3;

@end
