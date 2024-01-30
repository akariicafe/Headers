@class NSString, MDLMeshBufferViewAllocator;
@protocol MDLMeshBufferZone, MDLMeshBufferAllocator;

@interface MDLMeshBufferView : MDLBufferView <MDLMeshBuffer> {
    unsigned long long _type;
    MDLMeshBufferViewAllocator *_allocator;
}

@property (readonly, nonatomic) const void *data;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, retain, nonatomic) id<MDLMeshBufferAllocator> allocator;
@property (readonly, retain, nonatomic) id<MDLMeshBufferZone> zone;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
