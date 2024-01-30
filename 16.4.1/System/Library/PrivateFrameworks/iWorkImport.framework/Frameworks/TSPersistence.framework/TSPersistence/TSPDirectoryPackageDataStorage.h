@class NSString, TSPDirectoryPackage;
@protocol TSPCryptoInfo;

@interface TSPDirectoryPackageDataStorage : TSPFileDataStorage {
    NSString *_path;
    unsigned char _packageIdentifier;
    _Atomic BOOL _didCalculateEncodedLength;
    _Atomic unsigned long long _encodedLength;
    _Atomic unsigned long long _materializedLength;
    _Atomic BOOL _isMissingData;
    BOOL _isUnmaterializedDueToPartiallyDownloadedDocument;
    id<TSPCryptoInfo> _decryptionInfo;
}

@property (readonly, weak, nonatomic) TSPDirectoryPackage *package;

- (unsigned long long)length;
- (id)init;
- (unsigned char)packageIdentifier;
- (void).cxx_destruct;
- (unsigned long long)encodedLength;
- (BOOL)isInPackage:(id)a0;
- (BOOL)isMissingData;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (void)performReadWithAccessor:(id /* block */)a0;
- (unsigned long long)fileFormatVersion;
- (BOOL)isLengthPrecise;
- (void)setEncodedLength:(unsigned long long)a0 isMissingData:(BOOL)a1;
- (id)decryptionInfo;
- (void)didInitializeFromDocumentURL:(id)a0;
- (id)initWithPath:(id)a0 package:(id)a1 decryptionInfo:(id)a2 materializedLength:(unsigned long long)a3;
- (BOOL)isUnmaterializedDueToPartiallyDownloadedDocument;
- (BOOL)linkOrCopyToURL:(id)a0 encryptionInfo:(id)a1 canLink:(BOOL)a2;
- (unsigned long long)materializedLength;
- (void)setIsUnmaterializedDueToPartiallyDownloadedDocument:(BOOL)a0;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(void *)a2 preferredFilename:(id)a3 shouldRemoveData:(BOOL)a4 error:(id *)a5;

@end
