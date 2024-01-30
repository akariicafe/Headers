@class NSString;

@interface HMDPersistentStore : HMFObject <HMDPersistentStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)resetConfiguration;
+ (void)removeTransactionJournal;
+ (id)loadPlainMetadataDictionary;
+ (id)loadBuiltinPlainMetadataDictionary;
+ (BOOL)archiveMetadata:(id)a0;
+ (id)writeData:(id)a0 toStorePath:(id)a1 dataLabel:(id)a2;
+ (void)archiveBulletinBoard:(id)a0;
+ (id)unarchiveBulletinBoard;
+ (id)serializeHomeData:(id)a0 localStorage:(BOOL)a1 remoteDeviceOnSameAccount:(BOOL)a2;
+ (id)_writeData:(id)a0 toStorePath:(id)a1 dataLabel:(id)a2;
+ (BOOL)writeDictionary:(id)a0 toStorePath:(id)a1;
+ (BOOL)deserializeHomeData:(id *)a0 localStorage:(BOOL)a1 fromData:(id)a2;
+ (BOOL)deserializeHomeData:(id *)a0 usingLocalStorage:(BOOL)a1 fromData:(id)a2 forHH2Migration:(BOOL)a3;
+ (BOOL)removeLegacyHomeArchive:(id *)a0;
+ (id)unarchiveHomeData:(id *)a0 decryptionFailed:(BOOL *)a1 successfulKeyUserName:(id *)a2;
+ (id)unarchiveHomeData:(id *)a0 decryptionFailed:(BOOL *)a1 fromLocation:(id)a2 successfulKeyUserName:(id *)a3 forHH2Migration:(BOOL)a4;
+ (void)cleanupKeysInStore;
+ (id)archiveHomeDataForTransaction:(id)a0;
+ (id)archiveHomeDataLegacy:(id)a0;
+ (id)archiveHomeDataLegacy:(id)a0 toLocation:(id)a1;
+ (id)archiveHomeData:(id)a0 toLocation:(id)a1;
+ (void)archiveVendorStore:(id)a0;
+ (id)unarchiveVendorStore;
+ (void)removeServerTokenDataFile;
+ (id)archiveCloudServerTokenData:(id)a0;
+ (id)archiveIDSDataSyncJournal:(id)a0;
+ (id)unarchiveIDSDataSyncJournal;
+ (id)archiveDataStoreWithPath:(id)a0 serializedData:(id)a1 forKey:(id)a2;
+ (id)unarchiveDataStoreWithPath:(id)a0 forKey:(id)a1;
+ (id)encryptData:(id)a0 withKey:(id)a1 error:(id *)a2;
+ (id)decryptData:(id)a0 withKey:(id)a1 error:(id *)a2;
+ (id)encryptDataWithControllerKey:(id)a0 error:(id *)a1;
+ (id)decryptDataWithControllerKey:(id)a0 totalKeysFound:(unsigned long long *)a1 deleteExtraKeys:(BOOL)a2 allowControllerIdentifierToChange:(BOOL)a3 controllerIdentifierChanged:(BOOL *)a4 successfulKeyUserName:(id *)a5 error:(id *)a6;
+ (BOOL)hasControllerKeyWithUsername:(id)a0 error:(id *)a1;
+ (id)controllerUsernameForPairingIdentity:(id)a0 error:(id *)a1;


@end
