@class NSManagedObjectModel, NSMutableDictionary, PFUbiquityLocation, NSString, _PFZipFileArchive, PFUbiquityBaselineMetadata, NSPersistentStore;

@interface PFUbiquityBaseline : PFUbiquitySafeSaveFile {
    NSManagedObjectModel *_model;
}

@property (readonly) PFUbiquityLocation *baselineArchiveLocation;
@property (readonly) PFUbiquityLocation *baselineStagingLocation;
@property (readonly) PFUbiquityLocation *baselinePeerArchiveLocation;
@property (readonly) PFUbiquityBaselineMetadata *metadata;
@property (readonly) NSMutableDictionary *storeFilenameToData;
@property (readonly) NSString *storeFilename;
@property (readonly) NSString *storeName;
@property (readonly) NSString *modelVersionHash;
@property (readonly) _PFZipFileArchive *baselineArchive;
@property (readonly) NSPersistentStore *store;

+ (id)metadataFromCurrentBaselineForStoreWithName:(id)a0 peerID:(id)a1 modelVersionHash:(id)a2 andUbiquityRootLocation:(id)a3 withError:(id *)a4;
+ (BOOL)checkPeerReceiptsUnderRootLocation:(id)a0 forAgreementWithLocalPeerID:(id)a1 storeName:(id)a2 modelVersionHash:(id)a3 error:(id *)a4;
+ (id)metadataFromBaselineArchive:(id)a0;
+ (id)createArchiveWithModel:(id)a0 metadata:(id)a1 storeFilenameToData:(id)a2 storeFilename:(id)a3 error:(id *)a4;
+ (BOOL)isPeerReceiptTooOld:(id)a0;
+ (id)createModelFromBaselineModelWithModelVersionHash:(id)a0 peerID:(id)a1 storeName:(id)a2 andUbiquityRootLocation:(id)a3;
+ (id)createBaselineOptimizedModelForStoreName:(id)a0 peerID:(id)a1 modelVersionHash:(id)a2 andUbiquityRootLocation:(id)a3;
+ (id)createBaselineGCModelForStoreName:(id)a0 peerID:(id)a1 modelVersionHash:(id)a2 andUbiquityRootLocation:(id)a3;
+ (BOOL)removePeerSpecificIdentifiersFromStore:(id)a0 withLocalPeerID:(id)a1;
+ (id)createStringOfContentsOfBaselineFile:(id)a0;

- (void)setMetadata:(id)a0;
- (BOOL)importBaselineForStoreAtURL:(id)a0 ofType:(id)a1 options:(id)a2 withLocalPeerID:(id)a3 stack:(id)a4 andPersistentStoreCoordinator:(id)a5 error:(id *)a6;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)storeData;
- (id)initWithBaselineLocation:(id)a0 andLocalPeerID:(id)a1;
- (id)createPersistentStoreCoordinatorForCurrentBaseline:(id *)a0;
- (id)optimizedModelData;
- (BOOL)clearOutStagingLocationWithError:(id *)a0;
- (BOOL)constructBaselineArchive:(id *)a0;
- (id)gcModelData;
- (BOOL)isUploaded:(id *)a0;
- (BOOL)unpackStoreFilesToStagingLocation:(id *)a0;
- (BOOL)haveTransactionLogsForPeer:(id)a0 between:(long long)a1 and:(long long)a2;
- (BOOL)makeCurrentBaselineWithError:(id *)a0;
- (BOOL)moveToPermanentLocation:(id *)a0;
- (BOOL)replaceLocalPersistentStoreAtURL:(id)a0 ofType:(id)a1 withOptions:(id)a2 usingPersistentStoreCoordinator:(id)a3 error:(id *)a4;
- (id)_createPersistentStoreCoordinatorForCurrentBaseline:(BOOL)a0 error:(id *)a1;
- (id)createManagedObjectModelFromCurrentBaseline;
- (id)createSetOfInUseExternalDataRefUUIDs:(id *)a0;
- (id)initWithLocalPeerID:(id)a0 ubiquityRootLocation:(id)a1 forStoreWithName:(id)a2 andManagedObjectModel:(id)a3;
- (BOOL)prepareForBaselineRollOfPersistentStore:(id)a0 andLocalPeerID:(id)a1 error:(id *)a2;
- (BOOL)loadFileFromLocation:(id)a0 error:(id *)a1;
- (BOOL)gatherContentsFromMigratedBaseline:(id)a0 withStoreFileURL:(id)a1 error:(id *)a2;
- (BOOL)canReplaceStoreAtKnowledgeVector:(id)a0;
- (BOOL)gatherContentsAndConstructArchiveWithError:(id *)a0;
- (BOOL)metadataMatchesCurrentMetadata:(id *)a0;
- (id)baselineMetadataData;
- (BOOL)updateCurrentStoreIdentifier:(id)a0 error:(id *)a1;
- (BOOL)writeFileToLocation:(id)a0 error:(id *)a1;
- (id)createManagedObjectModel;
- (BOOL)removeUnusedExternalDataReferences:(id *)a0;

@end
