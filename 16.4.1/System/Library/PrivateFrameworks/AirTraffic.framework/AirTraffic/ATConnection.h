@class NSString, NSXPCConnection, NSObject, NSMutableArray;
@protocol ATConnectionDelegate;

@interface ATConnection : NSObject <ATConnectionDelegate> {
    NSXPCConnection *_xpcConnection;
    BOOL _registerForStatus;
    NSMutableArray *_registeredDataclasses;
    int _atcRunningToken;
    BOOL _atcRunning;
}

@property (weak, nonatomic) NSObject<ATConnectionDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerForStatus;
- (void)keepATCAlive:(BOOL)a0;
- (void)connectionWasInterrupted:(id)a0;
- (void)lowBatteryNotification;
- (void)prioritizeAsset:(id)a0 forDataclass:(id)a1;
- (BOOL)isSyncing:(BOOL *)a0 automatically:(BOOL *)a1 wirelessly:(BOOL *)a2;
- (void)clearSyncData;
- (void)connection:(id)a0 updatedProgress:(id)a1;
- (void)requestSyncForLibrary:(id)a0;
- (void)_sendStatusRegistrationWithCompletion:(id /* block */)a0;
- (id)restoreDeviceWithIdentifier:(id)a0;
- (void)_handleDisconnect;
- (void)cancelSync;
- (BOOL)getDataRestoreIsComplete;
- (void)requestSyncForPairedDeviceWithPriority:(int)a0;
- (void)requestKeybagSyncToPairedDevice;
- (void)dealloc;
- (void)unregisterForStatus;
- (id)getAssetMetrics;
- (void)openDeviceMessageLinkWithPriority:(int)a0;
- (void)initiateAssetDownloadSessionsWithCompletion:(id /* block */)a0;
- (id)init;
- (void)registerForAssetProgressForDataclass:(id)a0;
- (void)connection:(id)a0 updatedAssets:(id)a1;
- (void).cxx_destruct;
- (void)openDeviceMessageLink;
- (void)purgePartialAsset:(id)a0 forDataclass:(id)a1;

@end
