@class NSString, NSMutableData;
@protocol MDLMeshBufferZone, MDLMeshBufferAllocator;

@interface CUIMeshBuffer : NSObject <MDLMeshBuffer> {
    NSMutableData *_data;
}

@property (readonly, nonatomic) unsigned long long length;
@property (readonly, retain, nonatomic) id<MDLMeshBufferAllocator> allocator;
@property (readonly, retain, nonatomic) id<MDLMeshBufferZone> zone;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)map;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithBytes:(void *)a0 andLength:(unsigned long long)a1 ofType:(unsigned long long)a2;
- (void)fillData:(id)a0 offset:(unsigned long long)a1;

@end
