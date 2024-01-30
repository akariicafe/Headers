@class NSError, NSString, NSData, NSHashTable, SFUCryptoKey, NSObject, TSUZipFileArchive, TSPDocumentProperties;
@protocol TSPFileCoordinatorDelegate, OS_dispatch_queue;

@interface TSPPackage : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    TSPDocumentProperties *_documentProperties;
    TSUZipFileArchive *_zipArchive;
    unsigned long long _additionalZipArchiveOptions;
    NSError *_lastReloadError;
    NSHashTable *_packageDatas;
    struct { unsigned char isLazyLoadingDocumentProperties : 1; unsigned char isLazyLoadingZip : 1; } _flags;
}

@property (readonly, nonatomic) long long packageType;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, weak, nonatomic) id<TSPFileCoordinatorDelegate> fileCoordinatorDelegate;
@property (readonly, nonatomic) TSPDocumentProperties *documentProperties;
@property (readonly, nonatomic) SFUCryptoKey *decryptionKey;
@property (readonly, nonatomic) BOOL isClosed;
@property (readonly, nonatomic) unsigned long long fileFormatVersion;
@property (readonly, nonatomic) unsigned long long documentReadVersion;
@property (retain) TSUZipFileArchive *zipArchive;
@property (readonly) NSError *lastReloadError;
@property (readonly) TSUZipFileArchive *componentZipArchive;
@property (readonly, nonatomic) BOOL isPasswordProtected;
@property (readonly, nonatomic) NSString *passwordHint;
@property (readonly, nonatomic) NSData *passwordVerifier;

+ (BOOL)isZeroLengthFileOrEmptyDirectory:(id)a0 isDirectory:(BOOL *)a1;
+ (BOOL)isValidPackageAtURL:(id)a0;
+ (id)newPackageWithURL:(id)a0 options:(unsigned long long)a1 packageIdentifier:(unsigned char)a2 decryptionKey:(id)a3 fileCoordinatorDelegate:(id)a4 error:(id *)a5;
+ (id)dataEntryPathForFilename:(id)a0;
+ (id)zipArchiveURLFromPackageURL:(id)a0;
+ (unsigned long long)zipArchiveOptions;
+ (BOOL)hasZipArchive;
+ (id)newLazyPackageWithURL:(id)a0 packageIdentifier:(unsigned char)a1 decryptionKey:(id)a2 fileCoordinatorDelegate:(id)a3;
+ (id)objectArchiveEntryPathForPackageLocator:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)containsData:(id)a0;
- (void)enumerateDatasUsingBlock:(id /* block */)a0;
- (void)didCloseDocument;
- (id)dataAtRelativePath:(id)a0 allowDecryption:(BOOL)a1 error:(id *)a2;
- (void)didRetrieveDecryptionKey:(id)a0;
- (BOOL)checkPassword:(id)a0;
- (id)keyFromPassword:(id)a0;
- (void)prepareForDocumentReplacementWithSuccess:(BOOL)a0 forSafeSave:(BOOL)a1 originalURL:(id)a2;
- (void)removeAllDataReferences;
- (id)newDataStorageAtRelativePath:(id)a0 decryptionInfo:(id)a1 packageURL:(id)a2 lastModificationDate:(out id *)a3;
- (void)didReferenceData:(id)a0;
- (id)packageEntryInfoForComponentLocator:(id)a0 isStoredOutsideObjectArchive:(BOOL)a1;
- (id)newRawReadChannelForComponentLocator:(id)a0 isStoredOutsideObjectArchive:(BOOL)a1 error:(id *)a2;
- (void)copyComponent:(id)a0 toPackageURL:(id)a1 packageLocator:(id)a2 zipFileWriter:(id)a3 encryptionKey:(id)a4 canLink:(BOOL)a5 completion:(id /* block */)a6;
- (id)packageEntryInfoAtRelativePath:(id)a0 error:(id *)a1;
- (id)newRawDataReadChannelAtRelativePath:(id)a0;
- (BOOL)hasDataAtRelativePath:(id)a0;
- (id)newDocumentPropertiesWithURL:(id)a0 zipProvider:(id /* block */)a1 error:(id *)a2;
- (id)initWithPackageIdentifier:(unsigned char)a0 documentProperties:(id)a1 fileFormatVersion:(unsigned long long)a2 decryptionKey:(id)a3 fileCoordinatorDelegate:(id)a4 isLazyLoading:(BOOL)a5;
- (id)newReadChannelForComponentLocator:(id)a0 compressionAlgorithm:(long long)a1 isStoredOutsideObjectArchive:(BOOL)a2 error:(id *)a3;
- (void)didReadFileFormatVersion:(unsigned long long)a0;
- (void)didReadDocumentReadVersion:(unsigned long long)a0;
- (BOOL)didReloadZipArchive:(id)a0 packageURL:(id)a1 error:(id *)a2;
- (void)peformSynchronousAccessToZipArchive:(id /* block */)a0;
- (id)initWithURL:(id)a0 zipArchiveOrNil:(id)a1 zipArchiveOptions:(unsigned long long)a2 packageIdentifier:(unsigned char)a3 documentProperties:(id)a4 decryptionKey:(id)a5 fileCoordinatorDelegate:(id)a6 error:(id *)a7;
- (id)newZipArchiveFromPackageURL:(id)a0 isLazyLoading:(BOOL)a1 error:(id *)a2;
- (BOOL)reloadZipArchiveIfNeededWithURLImpl:(id)a0 isLazyLoading:(BOOL)a1 error:(id *)a2;
- (id)newCompressionReadChannelWithReadChannel:(id)a0 compressionAlgorithm:(long long)a1;
- (id)keyFromPassword:(id)a0 passwordVerifier:(id)a1;

@end
