@class TSPDirectoryPackageDataWriter;

@interface TSPDirectoryPackageWriter : TSPPackageWriter {
    TSPDirectoryPackageDataWriter *_dataWriter;
}

- (void).cxx_destruct;
- (struct CGDataConsumer { } *)newCGDataConsumerAtRelativePath:(id)a0;
- (BOOL)writeData:(id)a0 toRelativePath:(id)a1 allowEncryption:(BOOL)a2 error:(id *)a3;
- (id)initWithURL:(id)a0 documentTargetURL:(id)a1 relativeURLForExternalData:(id)a2 packageIdentifier:(unsigned char)a3 documentProperties:(id)a4 fileFormatVersion:(unsigned long long)a5 updateType:(long long)a6 cloneMode:(BOOL)a7 encryptionKey:(id)a8 originalDocumentPackage:(id)a9 originalSuppportPackage:(id)a10 fileCoordinatorDelegate:(id)a11 progress:(id)a12 error:(id *)a13;
- (id)packageEntryInfoForComponentLocator:(id)a0 isStoredOutsideObjectArchive:(BOOL)a1 packageURL:(id)a2;
- (id)newRawComponentWriteChannelWithPackageLocator:(id)a0 storeOutsideObjectArchive:(BOOL)a1;
- (id)targetDataURLForPath:(id)a0;
- (id)linkOrCopyData:(id)a0 fromURL:(id)a1 fromTemporaryLocation:(BOOL)a2 decryptionInfo:(id)a3 preferredFilename:(id)a4 error:(id *)a5;
- (id)newPackageWithPackageIdentifier:(unsigned char)a0 documentProperties:(id)a1 fileFormatVersion:(unsigned long long)a2 decryptionKey:(id)a3 fileCoordinatorDelegate:(id)a4;
- (id)newRawDataWriteChannelForRelativePath:(id)a0 originalLastModificationDate:(id)a1 originalSize:(unsigned long long)a2 originalCRC:(unsigned int)a3 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)a4;

@end
