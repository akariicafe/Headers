@interface TSPExpandedDirectoryPackage : TSPDirectoryPackage

+ (BOOL)hasZipArchive;
+ (BOOL)isValidPackageAtURL:(id)a0;

- (id)newRawReadChannelForComponentLocator:(id)a0 isStoredOutsideObjectArchive:(BOOL)a1 error:(id *)a2;
- (id)packageEntryInfoForComponentLocator:(id)a0 isStoredOutsideObjectArchive:(BOOL)a1;
- (void)prepareForDocumentReplacementWithSuccess:(BOOL)a0 forSafeSave:(BOOL)a1 originalURL:(id)a2;

@end
