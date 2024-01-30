@class NSString, NSData, MDLMeshBufferZoneDefault, NSMutableData;
@protocol MDLMeshBufferZone, MDLMeshBufferAllocator;

@interface MDLMeshBufferData : NSObject <MDLMeshBuffer> {
    MDLMeshBufferZoneDefault *_zone;
    MDLMeshBufferZoneDefault *_zoneDefault;
    NSMutableData *_data;
    unsigned long long _length;
    id<MDLMeshBufferAllocator> _allocator;
    unsigned long long _type;
    NSString *_name;
}

@property (readonly, retain, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, retain, nonatomic) id<MDLMeshBufferAllocator> allocator;
@property (readonly, retain, nonatomic) id<MDLMeshBufferZone> zone;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setName:(id)a0;
- (id)map;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 data:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (void)dealloc;
- (void)fillData:(id)a0 offset:(unsigned long long)a1;
- (id)initWithType:(unsigned long long)a0 length:(unsigned long long)a1;
- (id)initWithLength:(unsigned long long)a0 data:(id)a1 allocator:(id)a2 zone:(id)a3;

@end
