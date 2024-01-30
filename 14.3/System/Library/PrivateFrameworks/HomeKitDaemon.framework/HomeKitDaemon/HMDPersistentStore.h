@class NSString;

@interface HMDPersistentStore : HMFObject <HMDPersistentStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removeTransactionJournal;
+ (id)unarchiveHomeData:(id *)a0 decryptionFailed:(BOOL *)a1;
+ (void)resetConfiguration;
+ (id)loadBuiltinPlainMetadataDictionary;
+ (id)loadPlainMetadataDictionary;
+ (BOOL)archiveMetadata:(id)a0;
+ (id)unarchiveBulletinBoard;
+ (void)archiveBulletinBoard:(id)a0;
+ (id)writeData:(id)a0 toStorePath:(id)a1 dataLabel:(id)a2;
+ (id)_writeData:(id)a0 toStorePath:(id)a1 dataLabel:(id)a2;
+ (id)decryptDataWithControllerKey:(id)a0 totalKeysFound:(unsigned long long *)a1 deleteExtraKeys:(BOOL)a2 allowControllerIdentifierToChange:(BOOL)a3 controllerIdentifierChanged:(BOOL *)a4 successfulKeyUserName:(id *)a5 error:(id *)a6;
+ (id)archiveCloudServerTokenData:(id)a0;
+ (BOOL)deserializeHomeData:(id *)a0 localStorage:(BOOL)a1 fromData:(id)a2;
+ (id)serializeHomeData:(id)a0 localStorage:(BOOL)a1 remoteDeviceOnSameAccount:(BOOL)a2;
+ (id)encryptDataWithControllerKey:(id)a0 error:(id *)a1;
+ (id)decryptDataWithMetadataKey:(id)a0 error:(id *)a1;
+ (id)encryptDataWithMetadataKey:(id)a0 error:(id *)a1;
+ (BOOL)writeDictionary:(id)a0 toStorePath:(id)a1;
+ (id)_encryptData:(id)a0 withKey:(id)a1 error:(id *)a2;
+ (id)_decryptData:(id)a0 withKey:(id)a1 error:(id *)a2;
+ (void)cleanupKeysInStore;
+ (void)resetMetadata;
+ (id)archiveHomeData:(id)a0;
+ (void)archiveVendorStore:(id)a0;
+ (id)unarchiveVendorStore;
+ (id)decryptUsingLocalKeyAndUnarchiveFromPath:(id)a0 error:(id *)a1;
+ (id)encryptUsingLocalKeyAndArchiveData:(id)a0 storePath:(id)a1 dataLabel:(id)a2;
+ (void)removeServerTokenDataFile;
+ (id)archiveIDSDataSyncJournal:(id)a0;
+ (id)unarchiveIDSDataSyncJournal;
+ (id)archiveDataStoreWithPath:(id)a0 serializedData:(id)a1 forKey:(id)a2;
+ (id)unarchiveDataStoreWithPath:(id)a0 forKey:(id)a1;


@end
