@class NTKPigmentPersistentStorageController, NSObject;
@protocol OS_dispatch_queue;

@interface NTKPigmentSyncReceiver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (retain, nonatomic) NTKPigmentPersistentStorageController *storageController;
@property (nonatomic) BOOL receivedUpdates;

- (id)init;
- (void).cxx_destruct;
- (void)finishSyncingForDeviceUUID:(id)a0 success:(BOOL)a1;
- (void)processSyncData:(id)a0 domain:(id)a1 deviceUUID:(id)a2;

@end
