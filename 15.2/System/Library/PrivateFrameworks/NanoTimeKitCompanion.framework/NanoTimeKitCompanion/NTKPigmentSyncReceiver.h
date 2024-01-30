@class NTKPigmentPersistentStorageController, NSObject;
@protocol OS_dispatch_queue;

@interface NTKPigmentSyncReceiver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (retain, nonatomic) NTKPigmentPersistentStorageController *storageController;
@property (nonatomic) BOOL receivedUpdates;

- (void).cxx_destruct;
- (id)init;
- (void)processSyncData:(id)a0 domain:(id)a1 deviceUUID:(id)a2;
- (void)finishSyncingForDeviceUUID:(id)a0 success:(BOOL)a1;

@end
