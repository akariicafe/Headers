@class NSData;

@interface PKSerializedDataAccessor : PKFileDataAccessor {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSData *_archiveData;
}

- (void)downloadRemoteAssetsWithScreenScale:(double)a0 suffix:(id)a1 completion:(id /* block */)a2;
- (id)initWithFileDescriptor:(int)a0 error:(id *)a1;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithFileURL:(id)a0 error:(id *)a1 coordinator:(id)a2;
- (id)archiveData;
- (void)downloadRemoteAssetsWithScreenScale:(double)a0 suffix:(id)a1 cloudStoreCoordinatorDelegate:(id)a2 seids:(id)a3 completion:(id /* block */)a4;
- (id)initWithFileURL:(id)a0 error:(id *)a1;
- (id)_initWithFileURL:(id)a0 data:(id)a1 error:(id *)a2;
- (id)initWithFileDescriptor:(int)a0 error:(id *)a1 outputURL:(id)a2;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id *)a1 outputURL:(id)a2;

@end
