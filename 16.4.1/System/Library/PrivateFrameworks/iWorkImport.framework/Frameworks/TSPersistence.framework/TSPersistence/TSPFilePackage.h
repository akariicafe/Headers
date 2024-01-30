@class TSUZipArchive, TSUTemporaryDirectory;

@interface TSPFilePackage : TSPPackage {
    TSUZipArchive *_componentZipArchive;
    TSUTemporaryDirectory *_componentZipArchiveTemporaryDirectory;
}

+ (BOOL)isValidOrEmptyPackageOrTangierEditingFormatAtURL:(id)a0 hasNativeUTI:(BOOL)a1;
+ (BOOL)isValidPackageAtURL:(id)a0;
+ (BOOL)isValidPackageAtZipArchive:(id)a0;
+ (BOOL)isValidTangierEditingFormatAtURL:(id)a0;
+ (BOOL)isValidTangierEditingFormatAtZipArchive:(id)a0;
+ (unsigned long long)zipArchiveOptions;
+ (id)zipArchiveURLFromPackageURL:(id)a0;

- (void).cxx_destruct;
- (id)componentZipArchive;
- (BOOL)didReloadZipArchive:(id)a0 packageURL:(id)a1 error:(id *)a2;
- (BOOL)hasDataAtRelativePath:(id)a0;
- (id)newDataStorageAtRelativePath:(id)a0 decryptionInfo:(id)a1 materializedLength:(unsigned long long)a2 packageURL:(id)a3 lastModificationDate:(out id *)a4;
- (id)newDocumentPropertiesWithURL:(id)a0 zipProvider:(id /* block */)a1 error:(id *)a2;
- (id)newRawDataReadChannelAtRelativePath:(id)a0;
- (id)packageEntryInfoAtRelativePath:(id)a0 error:(id *)a1;
- (long long)packageType;
- (void)prepareForDocumentReplacementWithSuccess:(BOOL)a0 forSafeSave:(BOOL)a1 originalURL:(id)a2;

@end
