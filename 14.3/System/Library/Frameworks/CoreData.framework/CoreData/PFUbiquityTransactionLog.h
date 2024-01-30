@class NSRecursiveLock, NSString, PFUbiquityLocation, PFUbiquitySaveSnapshot, PFUbiquityKnowledgeVector, NSNumber, NSMutableDictionary;

@interface PFUbiquityTransactionLog : NSObject {
    NSMutableDictionary *_contents;
    BOOL _loadedContents;
    NSRecursiveLock *_contentsLock;
}

@property (nonatomic) BOOL useTemporaryLogLocation;
@property (readonly, nonatomic) BOOL inTemporaryLocation;
@property (readonly, nonatomic) BOOL inStagingLocation;
@property (readonly, nonatomic) BOOL inPermanentLocation;
@property (readonly, nonatomic) NSString *storeName;
@property (readonly, nonatomic) NSString *exportingPeerID;
@property (readonly, nonatomic) NSString *modelVersionHash;
@property (readonly, nonatomic) NSString *fileProtectionOption;
@property (readonly, nonatomic) NSNumber *transactionNumber;
@property (readonly, nonatomic) NSString *transactionLogFilename;
@property (readonly, nonatomic) int transactionLogType;
@property (readonly, nonatomic) PFUbiquityLocation *transactionLogLocation;
@property (readonly, nonatomic) PFUbiquityLocation *temporaryTransactionLogLocation;
@property (readonly, nonatomic) PFUbiquityLocation *stagingTransactionLogLocation;
@property (readonly, nonatomic) PFUbiquitySaveSnapshot *saveSnapshot;
@property (readonly, nonatomic) PFUbiquityLocation *currentLocation;
@property (readonly, nonatomic) PFUbiquityKnowledgeVector *knowledgeVector;
@property (readonly, nonatomic) NSString *localPeerID;
@property (nonatomic) BOOL loadUsingRetry;
@property (readonly, nonatomic) BOOL loadedComparisonMetadata;
@property (readonly, nonatomic) BOOL loadedImportMetadata;
@property (readonly, nonatomic) BOOL loadedInsertedObjectData;
@property (readonly, nonatomic) BOOL loadedUpdatedObjectData;
@property (readonly, nonatomic) BOOL loadedDeletedObjectData;

+ (void)truncateLogFilesForPeerID:(id)a0 storeName:(id)a1 modelVersionHash:(id)a2 beforeKnowledgeVector:(id)a3 withLocalPeerID:(id)a4 andUbiquityRootLocation:(id)a5;
+ (BOOL)pruneTemporaryLogDirectoryForPeerRootLocation:(id)a0 error:(id *)a1;
+ (int)transactionLogTypeFromLocation:(id)a0;
+ (id)createTransactionLogFilenameForLogType:(int)a0;
+ (id)createDataFromExtendedAttrsForLog:(id)a0 error:(id *)a1;
+ (void)updateModificationTimesForLocation:(id)a0;
+ (id)transactionLogFilenameUUID;
+ (id)generateTransactionLogFilename;
+ (void)truncateLogFilesBeforeBaselineMetadata:(id)a0 withLocalPeerID:(id)a1 andUbiquityRootLocation:(id)a2;

- (id)init;
- (void)dealloc;
- (BOOL)releaseContents:(id *)a0;
- (BOOL)loadInsertedObjectsDataWithError:(id *)a0;
- (BOOL)loadUpdatedObjectsDataWithError:(id *)a0;
- (BOOL)loadDeletedObjectsDataWithError:(id *)a0;
- (BOOL)loadComparisonMetadataWithError:(id *)a0;
- (BOOL)loadImportMetadataWithError:(id *)a0;
- (BOOL)moveFileToPermanentLocationWithError:(id *)a0;
- (id)initWithStoreName:(id)a0 andSaveSnapshot:(id)a1 andRootLocation:(id)a2;
- (BOOL)writeToDiskWithError:(id *)a0 andUpdateFilenameInTransactionEntries:(id)a1;
- (id)description;
- (id)initWithTransactionLogLocation:(id)a0 andLocalPeerID:(id)a1;
- (BOOL)loadContents:(id *)a0;
- (void)populateContents;
- (void)releaseInsertedObjects;
- (void)releaseUpdatedObjects;
- (void)releaseDeletedObjects;
- (id)loadPlistAtLocation:(id)a0 withError:(id *)a1;
- (BOOL)writeContentsOfZipArchive:(id)a0 intoExtendedAttributesForFile:(id)a1 error:(id *)a2;
- (void)cleanupExternalDataReferences;
- (BOOL)deleteLogFileWithError:(id *)a0;
- (id)initWithTransactionLogURL:(id)a0 ubiquityRootLocation:(id)a1 andLocalPeerID:(id)a2;
- (BOOL)rewriteToDiskWithError:(id *)a0;
- (id)generatePeerCodeKnowledgeVectorWithManagedObjectContext:(id)a0;

@end
