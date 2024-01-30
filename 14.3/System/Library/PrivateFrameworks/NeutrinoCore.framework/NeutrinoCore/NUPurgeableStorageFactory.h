@class NSString, NUPurgeableStoragePool;

@interface NUPurgeableStorageFactory : NSObject <NUStorageFactory> {
    Class _storageClass;
    NUPurgeableStoragePool *_storagePool;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithStorageClass:(Class)a0;
- (id)newStorageWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (void)returnStorage:(id)a0;
- (id)initWithStoragePool:(id)a0;
- (id)initWithStorageClass:(Class)a0 storagePool:(id)a1;

@end
