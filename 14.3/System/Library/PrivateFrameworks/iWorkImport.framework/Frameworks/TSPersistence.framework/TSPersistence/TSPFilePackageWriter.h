@class TSUSafeSaveAssistant, TSUZipFileWriter;

@interface TSPFilePackageWriter : TSPPackageWriter {
    TSUZipFileWriter *_delayedZipArchiveWriter;
    TSUSafeSaveAssistant *_safeSaveAssistant;
    BOOL _onlyWriteToDelayedZipArchive;
}

- (void).cxx_destruct;
- (void)closeWithQueue:(id)a0 completion:(id /* block */)a1;
- (id)initWithURL:(id)a0 documentTargetURL:(id)a1 relativeURLForExternalData:(id)a2 packageIdentifier:(unsigned char)a3 documentProperties:(id)a4 fileFormatVersion:(unsigned long long)a5 updateType:(long long)a6 cloneMode:(BOOL)a7 encryptionKey:(id)a8 originalDocumentPackage:(id)a9 originalSuppportPackage:(id)a10 fileCoordinatorDelegate:(id)a11 progress:(id)a12 error:(id *)a13;
- (id)newPackageWithPackageIdentifier:(unsigned char)a0 documentProperties:(id)a1 fileFormatVersion:(unsigned long long)a2 decryptionKey:(id)a3 fileCoordinatorDelegate:(id)a4;
- (id)newRawDataWriteChannelForRelativePath:(id)a0 originalLastModificationDate:(id)a1 originalSize:(unsigned long long)a2 originalCRC:(unsigned int)a3 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)a4;
- (id)zipArchiveWriter;
- (void)finalizeComponentAndDataSectionWithCompletionHandler:(id /* block */)a0;
- (void)willWriteData:(id)a0;
- (id)componentZipArchiveWriter;
- (void)truncateZipAtFirstDeletedData:(id)a0;

@end
