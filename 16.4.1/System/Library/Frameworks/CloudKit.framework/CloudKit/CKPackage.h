@class NSString, CKSQLite, NSData, NSArray, CKRecord, CKPackageReference;

@interface CKPackage : NSObject <NSSecureCoding, CKRecordValue>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long state;
@property (copy, nonatomic) NSData *archiverInfo;
@property (retain, nonatomic) CKSQLite *sqlite;
@property (nonatomic) unsigned long long nextItemIndex;
@property (nonatomic, getter=isOpen) BOOL open;
@property (nonatomic) struct _OpaquePCSShareProtection { } *recordPCS;
@property (copy, nonatomic) NSString *UUID;
@property (nonatomic) unsigned long long size;
@property (nonatomic) BOOL wasCached;
@property (nonatomic) BOOL uploaded;
@property (nonatomic) BOOL downloaded;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) BOOL shouldReadRawEncryptedData;
@property (nonatomic) long long storageGroupingPolicy;
@property (nonatomic) long long uploadRank;
@property (nonatomic) long long packageID;
@property (copy, nonatomic) NSArray *assets;
@property (weak, nonatomic) CKRecord *record;
@property (copy, nonatomic) NSString *recordKey;
@property (retain, nonatomic) CKPackageReference *packageReference;
@property (copy, nonatomic) NSString *databaseBasePath;
@property (copy, nonatomic) NSString *rootDatabasePath;
@property (copy, nonatomic) NSData *signature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientPackageDatabaseDirectory;
+ (id)stagingPathSuffixForCloudKitCachesDirectoryWithBundleIdentifier:(id)a0;
+ (id)packageProcessBasePath;
+ (id)packageWithPackage:(id)a0 error:(id *)a1;
+ (id)packageInClientWithBasePath:(id)a0 error:(id *)a1;
+ (void)gcPackagesInDirectory:(id)a0 dbInUseBlock:(id /* block */)a1;
+ (void)destroyClientPackageWithDatabaseBasePath:(id)a0 UUID:(id)a1;
+ (id)clonedPackageWithRecordID:(id)a0 databaseScope:(long long)a1 fieldName:(id)a2 error:(id *)a3;
+ (id)packageWithError:(id *)a0;
+ (id)packageInDaemonWithBasePath:(id)a0 error:(id *)a1;

- (id)sectionAtIndex:(unsigned long long)a0;
- (BOOL)openWithError:(id *)a0;
- (unsigned long long)itemCount;
- (BOOL)addItem:(id)a0;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (BOOL)isReference;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)sectionCount;
- (id)initWithCoder:(id)a0;
- (id)itemAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (void)close;
- (id)init;
- (void).cxx_destruct;
- (BOOL)addSection:(id)a0;
- (id)initUnreachablePackageWithUUID:(id)a0;
- (double)earliestUploadReceiptExpiration;
- (id)_initWithBasePath:(id)a0 UUID:(id)a1;
- (id)_itemOrNilAtIndex:(unsigned long long)a0;
- (id)_itemWithColumnsByName:(id)a0;
- (id)_packageDatabasePath;
- (id)_packageDatabasePathWithState:(long long)a0;
- (BOOL)claimOwnershipWithError:(id *)a0;
- (id)clonedPackageInDaemonWithBasePath:(id)a0 filesDuplicatedIntoDirectory:(id)a1 error:(id *)a2;
- (void)handleChangeStateAction:(long long)a0;
- (BOOL)handleChangeStateAction:(long long)a0 error:(id *)a1;
- (unsigned long long)itemCountWithError:(id *)a0;
- (id)itemEnumerator;
- (id)itemEnumeratorForSectionAtIndex:(unsigned long long)a0;
- (BOOL)movePackagesDatabaseInDirection:(BOOL)a0 error:(id *)a1;
- (id)performTransactionBlock:(id /* block */)a0;
- (BOOL)prepareDBWithError:(id *)a0;
- (void)releaseDB;
- (void)releaseDBWithRemove:(BOOL)a0;
- (void)removeDB;
- (BOOL)removeDBAndDeleteFilesWithError:(id *)a0;
- (BOOL)setArchiverInfo:(id)a0 error:(id *)a1;
- (id)testAddSectionConstraintViolation:(id)a0;
- (BOOL)updateItemAtIndex:(long long)a0 withFileURL:(id)a1;
- (BOOL)updateItemAtIndex:(long long)a0 withSignature:(id)a1 size:(unsigned long long)a2 itemID:(unsigned long long)a3 sectionIndex:(unsigned long long)a4;
- (BOOL)updateItemsAtIndexes:(id)a0 fileURLs:(id)a1;

@end
