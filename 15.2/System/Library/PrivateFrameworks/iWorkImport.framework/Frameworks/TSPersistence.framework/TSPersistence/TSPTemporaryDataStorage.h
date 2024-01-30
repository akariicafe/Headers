@class TSPTemporaryDataStorageURL;
@protocol TSPCryptoInfo;

@interface TSPTemporaryDataStorage : TSPFileDataStorage {
    TSPTemporaryDataStorageURL *_temporaryDataStorageURL;
    BOOL _leakTemporaryFile;
    BOOL _isUnmaterializedDueToPartiallyDownloadedDocument;
    id<TSPCryptoInfo> _decryptionInfo;
}

@property (readonly, nonatomic) BOOL isMissingOriginalData;
@property (readonly, nonatomic) BOOL isMissingData;

- (unsigned long long)length;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (void)performReadWithAccessor:(id /* block */)a0;
- (unsigned long long)fileFormatVersion;
- (id)initWithTemporaryDataStorageURL:(id)a0 decryptionInfo:(id)a1;
- (id)decryptionInfo;
- (BOOL)isUnmaterializedDueToPartiallyDownloadedDocument;
- (BOOL)linkOrCopyToURL:(id)a0 encryptionInfo:(id)a1 canLink:(BOOL)a2;
- (id)initWithTemporaryDataStorageURL:(id)a0 decryptionInfo:(id)a1 isMissingOriginalData:(BOOL)a2 isMissingData:(BOOL)a3 isUnmaterializedDueToPartiallyDownloadedDocument:(BOOL)a4;
- (void)setIsUnmaterializedDueToPartiallyDownloadedDocument:(BOOL)a0;
- (void)leakTemporaryFile;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(void *)a2 preferredFilename:(id)a3 shouldRemoveData:(BOOL)a4 error:(id *)a5;
- (BOOL)isLengthPrecise;

@end
