@class NSData;

@interface PKSerializedDataAccessor : PKFileDataAccessor {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSData *_archiveData;
}

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)archiveData;
- (id)initWithFileDescriptor:(int)a0 error:(id *)a1;
- (id)initWithFileURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)_downloadRemoteAssetsWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (id)_initWithFileURL:(id)a0 data:(id)a1 error:(id *)a2;
- (id)initWithData:(id)a0 error:(id *)a1 outputURL:(id)a2;
- (id)initWithFileDescriptor:(int)a0 error:(id *)a1 outputURL:(id)a2;
- (id)initWithFileURL:(id)a0 error:(id *)a1 coordinator:(id)a2;

@end
