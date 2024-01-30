@interface TSPDirectoryPackage : TSPPackage

+ (BOOL)isValidPackageAtURL:(id)a0;
+ (id)objectArchiveURLForPackageURL:(id)a0;
+ (id)componentFileURLForPackageURL:(id)a0 packageLocator:(id)a1;
+ (id)zipArchiveURLFromPackageURL:(id)a0;
+ (unsigned long long)zipArchiveOptions;

- (id)dataAtRelativePath:(id)a0 allowDecryption:(BOOL)a1 error:(id *)a2;
- (long long)packageType;
- (void)prepareForDocumentReplacementWithSuccess:(BOOL)a0 forSafeSave:(BOOL)a1 originalURL:(id)a2;
- (id)newDataStorageAtRelativePath:(id)a0 decryptionInfo:(id)a1 packageURL:(id)a2 lastModificationDate:(out id *)a3;
- (id)packageEntryInfoForComponentLocator:(id)a0 isStoredOutsideObjectArchive:(BOOL)a1;
- (id)newRawReadChannelForComponentLocator:(id)a0 isStoredOutsideObjectArchive:(BOOL)a1 error:(id *)a2;
- (void)copyComponent:(id)a0 toPackageURL:(id)a1 packageLocator:(id)a2 zipFileWriter:(id)a3 encryptionKey:(id)a4 canLink:(BOOL)a5 completion:(id /* block */)a6;
- (id)packageEntryInfoAtRelativePath:(id)a0 error:(id *)a1;
- (id)newRawDataReadChannelAtRelativePath:(id)a0;
- (BOOL)hasDataAtRelativePath:(id)a0;
- (id)newDocumentPropertiesWithURL:(id)a0 zipProvider:(id /* block */)a1 error:(id *)a2;

@end
