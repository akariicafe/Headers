@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface NTKPigmentPersistentStorageController : NSObject {
    NSObject<OS_dispatch_queue> *_privateQueue;
    NSString *_rootDirectory;
}

+ (id)syncStoresFolder;
+ (id)perDeviceFolder;
+ (id)faceColorRootFolder;
+ (id)globalStoresFolder;

- (void).cxx_destruct;
- (id)init;
- (id)device;
- (void)resetCache;
- (id)sharedCollections;
- (id)facePigmentSetForDomain:(id)a0 sharedCollections:(id)a1;
- (void)persistFacePigmentSet:(id)a0 deviceUUID:(id)a1;
- (void)deleteContent;
- (id)_sharedCollections;
- (void)startTransactionForDeviceUUID:(id)a0;
- (void)persistSharedCollectionsData:(id)a0 deviceUUID:(id)a1;
- (void)persistFacePigmentSetData:(id)a0 domain:(id)a1 deviceUUID:(id)a2;
- (void)closeTransactionForDeviceUUID:(id)a0;
- (id)initWithRootDirectory:(id)a0;
- (void)persistSharedCollections:(id)a0 deviceUUID:(id)a1;
- (id)colorDomainFilePath:(id)a0 deviceUUID:(id)a1;
- (id)readPigmentSetFromData:(id)a0 sharedCollections:(id)a1;
- (id)readSharedCollectionsFromData:(id)a0;
- (BOOL)createColorSyncFolderIfNeededForDeviceUUID:(id)a0;
- (void)_writeData:(id)a0 toFile:(id)a1;
- (id)serializeFacePigmentSet:(id)a0;
- (id)transactionLockerFileNameForDeviceUUID:(id)a0;
- (id)colorSyncFolderPathWithDeviceUUID:(id)a0;
- (BOOL)createFolderIfNeeded:(id)a0;

@end
