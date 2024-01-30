@class NSString;
@protocol MDLMeshBufferAllocator;

@interface MDLMeshBufferZoneDefault : NSObject <MDLMeshBufferZone> {
    unsigned long long _usedCapacity;
}

@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly, retain, nonatomic) id<MDLMeshBufferAllocator> allocator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
