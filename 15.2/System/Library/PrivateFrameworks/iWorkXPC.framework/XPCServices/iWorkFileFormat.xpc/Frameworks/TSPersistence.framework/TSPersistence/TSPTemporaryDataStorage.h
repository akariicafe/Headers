@class TSPTemporaryDataStorageURL;
@protocol TSPCryptoInfo;

@interface TSPTemporaryDataStorage : TSPFileDataStorage {
    TSPTemporaryDataStorageURL *_temporaryDataStorageURL;
    id<TSPCryptoInfo> _decryptionInfo;
    BOOL _leakTemporaryFile;
    BOOL _gilligan_isRemote;
}

@property (readonly, nonatomic) BOOL isMissingOriginalData;
@property (readonly, nonatomic) BOOL isMissingData;

- (unsigned long long)length;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (void)performReadWithAccessor:(id /* block */)a0;
- (id)initWithTemporaryDataStorageURL:(id)a0 decryptionInfo:(id)a1;
- (id)decryptionInfo;
- (BOOL)linkOrCopyToURL:(id)a0 encryptionInfo:(id)a1 canLink:(BOOL)a2;
- (void)leakTemporaryFile;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(void *)a2 preferredFilename:(id)a3 shouldRemoveData:(BOOL)a4 error:(id *)a5;
- (BOOL)gilligan_isRemote;
- (id)initWithTemporaryDataStorageURL:(id)a0 decryptionInfo:(id)a1 isMissingOriginalData:(BOOL)a2 isMissingData:(BOOL)a3;
- (void)setGilligan_isRemote:(BOOL)a0;
- (id)initWithTemporaryDataStorageURL:(id)a0 decryptionInfo:(id)a1 isMissingOriginalData:(BOOL)a2 isMissingData:(BOOL)a3 gilligan_isRemote:(BOOL)a4;

@end
