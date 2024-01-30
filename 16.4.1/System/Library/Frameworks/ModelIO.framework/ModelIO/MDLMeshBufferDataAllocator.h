@class NSString;

@interface MDLMeshBufferDataAllocator : NSObject <MDLMeshBufferAllocator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newBuffer:(unsigned long long)a0 type:(unsigned long long)a1;
- (id)newBufferFromZone:(id)a0 data:(id)a1 type:(unsigned long long)a2;
- (id)newBufferFromZone:(id)a0 length:(unsigned long long)a1 type:(unsigned long long)a2;
- (id)newBufferWithData:(id)a0 type:(unsigned long long)a1;
- (id)newZone:(unsigned long long)a0;
- (id)newZoneForBuffersWithSize:(id)a0 andType:(id)a1;

@end
