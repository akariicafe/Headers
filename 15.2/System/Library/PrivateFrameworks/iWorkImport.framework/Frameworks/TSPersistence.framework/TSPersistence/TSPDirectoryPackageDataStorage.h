@class NSString, TSPDirectoryPackage;
@protocol TSPCryptoInfo;

@interface TSPDirectoryPackageDataStorage : TSPFileDataStorage {
    NSString *_path;
    unsigned char _packageIdentifier;
    _Atomic BOOL _didCalculateEncodedLength;
    _Atomic unsigned long long _encodedLength;
    _Atomic BOOL _isMissingData;
    BOOL _isUnmaterializedDueToPartiallyDownloadedDocument;
    id<TSPCryptoInfo> _decryptionInfo;
}

@property (readonly, weak, nonatomic) TSPDirectoryPackage *package;

- (unsigned long long)length;
- (void).cxx_destruct;
- (unsigned char)packageIdentifier;
- (id)init;
- (unsigned long long)encodedLength;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (BOOL)isInPackage:(id)a0;
- (void)performReadWithAccessor:(id /* block */)a0;
- (BOOL)isMissingData;
- (unsigned long long)fileFormatVersion;
- (id)decryptionInfo;
- (BOOL)isUnmaterializedDueToPartiallyDownloadedDocument;
- (BOOL)linkOrCopyToURL:(id)a0 encryptionInfo:(id)a1 canLink:(BOOL)a2;
- (void)setIsUnmaterializedDueToPartiallyDownloadedDocument:(BOOL)a0;
- (void)didInitializeFromDocumentURL:(id)a0;
- (id)initWithPath:(id)a0 package:(id)a1 decryptionInfo:(id)a2;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(void *)a2 preferredFilename:(id)a3 shouldRemoveData:(BOOL)a4 error:(id *)a5;
- (BOOL)isLengthPrecise;
- (void)setEncodedLength:(unsigned long long)a0 isMissingData:(BOOL)a1;

@end
