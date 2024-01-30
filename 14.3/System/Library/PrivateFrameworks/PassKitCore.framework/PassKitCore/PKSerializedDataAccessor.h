@class NSData;

@interface PKSerializedDataAccessor : PKFileDataAccessor {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSData *_archiveData;
}

- (id)initWithData:(id)a0 error:(id *)a1 outputURL:(id)a2;
- (void)downloadRemoteAssetsWithScreenScale:(double)a0 suffix:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 error:(id *)a1 coordinator:(id)a2;
- (void)downloadRemoteAssetsWithScreenScale:(double)a0 suffix:(id)a1 cloudStoreCoordinatorDelegate:(id)a2 completion:(id /* block */)a3;
- (id)initWithFileURL:(id)a0 error:(id *)a1;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)archiveData;

@end
