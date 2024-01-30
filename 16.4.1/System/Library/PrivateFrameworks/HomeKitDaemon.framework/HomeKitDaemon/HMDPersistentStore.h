@class NSString;

@interface HMDPersistentStore : HMFObject <HMDPersistentStore, HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (void)resetConfiguration:(unsigned long long)a0;
+ (BOOL)deserializeHomeData:(id *)a0 usingLocalStorage:(BOOL)a1 fromData:(id)a2 forHH2Migration:(BOOL)a3;
+ (id)_writeData:(id)a0 toStorePath:(id)a1 dataLabel:(id)a2;
+ (void)archiveBulletinBoard:(id)a0;
+ (id)archiveCloudServerTokenData:(id)a0;
+ (id)archiveDataStoreWithPath:(id)a0 serializedData:(id)a1 forKey:(id)a2;
+ (id)archiveHomeData:(id)a0 toLocation:(id)a1;
+ (id)archiveHomeDataForTransaction:(id)a0;
+ (id)archiveHomeDataLegacy:(id)a0;
+ (id)archiveHomeDataLegacy:(id)a0 toLocation:(id)a1;
+ (id)archiveIDSDataSyncJournal:(id)a0;
+ (BOOL)archiveMetadata:(id)a0;
+ (void)archiveVendorStore:(id)a0;
+ (void)cleanupKeysInStore;
+ (id)controllerUsernameForPairingIdentity:(id)a0 error:(id *)a1;
+ (id)decryptData:(id)a0 withKey:(id)a1 error:(id *)a2;
+ (id)decryptDataWithControllerKey:(id)a0 totalKeysFound:(unsigned long long *)a1 deleteExtraKeys:(BOOL)a2 allowControllerIdentifierToChange:(BOOL)a3 controllerIdentifierChanged:(BOOL *)a4 successfulKeyUserName:(id *)a5 error:(id *)a6;
+ (BOOL)deserializeHomeData:(id *)a0 localStorage:(BOOL)a1 fromData:(id)a2;
+ (id)encryptData:(id)a0 withKey:(id)a1 error:(id *)a2;
+ (id)encryptDataWithControllerKey:(id)a0 error:(id *)a1;
+ (BOOL)hasControllerKeyWithUsername:(id)a0 error:(id *)a1;
+ (id)loadBuiltinPlainMetadataDictionary;
+ (id)loadPlainMetadataDictionary;
+ (id)readDataFromPath:(id)a0;
+ (BOOL)removeLegacyHomeArchive:(id *)a0;
+ (void)removeServerTokenDataFile;
+ (void)removeTransactionJournal;
+ (id)serializeHomeData:(id)a0 localStorage:(BOOL)a1 remoteDeviceOnSameAccount:(BOOL)a2;
+ (id)unarchiveBulletinBoard;
+ (id)unarchiveData:(id)a0 forKey:(id)a1;
+ (id)unarchiveDataStoreWithPath:(id)a0 forKey:(id)a1;
+ (id)unarchiveHomeData:(id *)a0 decryptionFailed:(BOOL *)a1 fromLocation:(id)a2 successfulKeyUserName:(id *)a3 forHH2Migration:(BOOL)a4;
+ (id)unarchiveHomeData:(id *)a0 decryptionFailed:(BOOL *)a1 successfulKeyUserName:(id *)a2;
+ (id)unarchiveIDSDataSyncJournal;
+ (id)unarchiveVendorStore;
+ (id)writeData:(id)a0 toStorePath:(id)a1 dataLabel:(id)a2;
+ (BOOL)writeDictionary:(id)a0 toStorePath:(id)a1;

- (id)writeData:(id)a0 toStorePath:(id)a1 dataLabel:(id)a2;

@end
