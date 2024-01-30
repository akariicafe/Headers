@class NSString, TSPFilePackage;
@protocol TSPCryptoInfo;

@interface TSPFilePackageDataStorage : TSPStreamDataStorage {
    NSString *_path;
    TSPFilePackage *_package;
    _Atomic BOOL _didCalculateEncodedLength;
    _Atomic unsigned long long _encodedLength;
    _Atomic BOOL _didCalculateCRC;
    _Atomic unsigned int _CRC;
    _Atomic unsigned long long _materializedLength;
    _Atomic BOOL _isMissingData;
    BOOL _isUnmaterializedDueToPartiallyDownloadedDocument;
    id<TSPCryptoInfo> _decryptionInfo;
}

- (BOOL)isReadable;
- (unsigned long long)length;
- (id)init;
- (unsigned char)packageIdentifier;
- (void).cxx_destruct;
- (unsigned long long)encodedLength;
- (unsigned int)CRC;
- (BOOL)isInPackage:(id)a0;
- (BOOL)isMissingData;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (unsigned long long)fileFormatVersion;
- (BOOL)isLengthPrecise;
- (void)setEncodedLength:(unsigned long long)a0 isMissingData:(BOOL)a1;
- (id)decryptionInfo;
- (void)didInitializeFromDocumentURL:(id)a0;
- (id)initWithPath:(id)a0 package:(id)a1 decryptionInfo:(id)a2 materializedLength:(unsigned long long)a3;
- (BOOL)isUnmaterializedDueToPartiallyDownloadedDocument;
- (BOOL)linkOrCopyToURL:(id)a0 encryptionInfo:(id)a1 canLink:(BOOL)a2;
- (unsigned long long)materializedLength;
- (id)newDataCopyReadChannelProviderWithDocumentURL:(id)a0 encryptionInfo:(id)a1 error:(id *)a2;
- (void)setIsUnmaterializedDueToPartiallyDownloadedDocument:(BOOL)a0;
- (BOOL)shouldValidateCRCOnWrite;
- (id)streamReadChannelForWriteWithPackageWriter:(id)a0;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(void *)a2 preferredFilename:(id)a3 shouldRemoveData:(BOOL)a4 error:(id *)a5;

@end
