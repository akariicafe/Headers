@class TSUZipArchive, TSUTemporaryDirectory;

@interface TSPFilePackage : TSPPackage {
    TSUZipArchive *_componentZipArchive;
    TSUTemporaryDirectory *_componentZipArchiveTemporaryDirectory;
}

+ (BOOL)isValidOrEmptyPackageOrTangierEditingFormatAtURL:(id)a0 hasNativeUTI:(BOOL)a1;
+ (BOOL)isValidPackageAtURL:(id)a0;
+ (BOOL)isValidTangierEditingFormatAtURL:(id)a0;
+ (id)zipArchiveURLFromPackageURL:(id)a0;
+ (unsigned long long)zipArchiveOptions;
+ (BOOL)isValidPackageAtZipArchive:(id)a0;
+ (BOOL)isValidTangierEditingFormatAtZipArchive:(id)a0;

- (void).cxx_destruct;
- (long long)packageType;
- (void)prepareForDocumentReplacementWithSuccess:(BOOL)a0 forSafeSave:(BOOL)a1 originalURL:(id)a2;
- (id)newDataStorageAtRelativePath:(id)a0 decryptionInfo:(id)a1 packageURL:(id)a2 lastModificationDate:(out id *)a3;
- (id)packageEntryInfoAtRelativePath:(id)a0 error:(id *)a1;
- (id)newRawDataReadChannelAtRelativePath:(id)a0;
- (BOOL)hasDataAtRelativePath:(id)a0;
- (id)newDocumentPropertiesWithURL:(id)a0 zipProvider:(id /* block */)a1 error:(id *)a2;
- (id)componentZipArchive;
- (BOOL)didReloadZipArchive:(id)a0 packageURL:(id)a1 error:(id *)a2;

@end
