@class GLKMeshBufferAllocator, NSString, GLKMeshBufferZone;

@interface GLKMeshBuffer : NSObject <MDLMeshBuffer> {
    unsigned int _mapCount;
    void *_mapPtr;
    unsigned int _target;
}

@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) GLKMeshBufferAllocator *allocator;
@property (readonly, nonatomic) unsigned int glBufferName;
@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) GLKMeshBufferZone *zone;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)map;
- (void)dealloc;
- (void).cxx_destruct;
- (void)fillData:(id)a0 offset:(unsigned long long)a1;
- (id)_initWithLength:(unsigned long long)a0 allocator:(id)a1 type:(unsigned long long)a2;
- (id)_initWithBytes:(const void *)a0 length:(unsigned long long)a1 offset:(unsigned long long)a2 allocator:(id)a3 zone:(id)a4 type:(unsigned long long)a5;
- (id)_initWithData:(id)a0 allocator:(id)a1 type:(unsigned long long)a2;
- (id)_initWithLength:(unsigned long long)a0 offset:(unsigned long long)a1 zone:(id)a2 type:(unsigned long long)a3;

@end
