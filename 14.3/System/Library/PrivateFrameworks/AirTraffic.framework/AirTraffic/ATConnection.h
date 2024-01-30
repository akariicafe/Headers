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

- (void)connectionWasInterrupted:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)registerForAssetProgressForDataclass:(id)a0;
- (void)unregisterForStatus;
- (void)dealloc;
- (void)purgePartialAsset:(id)a0 forDataclass:(id)a1;
- (void)requestSyncForLibrary:(id)a0;
- (BOOL)isSyncing:(BOOL *)a0 automatically:(BOOL *)a1 wirelessly:(BOOL *)a2;
- (void)connection:(id)a0 updatedProgress:(id)a1;
- (void)_sendStatusRegistration;
- (void)keepATCAlive:(BOOL)a0;
- (void)registerForStatus;
- (void)clearSyncData;
- (BOOL)getDataRestoreIsComplete;
- (void)_handleDisconnect;
- (void)lowBatteryNotification;
- (void)openDeviceMessageLink;
- (void)connection:(id)a0 updatedAssets:(id)a1;
- (id)getAssetMetrics;
- (void)cancelSync;
- (id)restoreDeviceWithIdentifier:(id)a0;
- (void)initiateAssetDownloadSessionsWithCompletion:(id /* block */)a0;
- (void)openDeviceMessageLinkWithPriority:(int)a0;
- (void)prioritizeAsset:(id)a0 forDataclass:(id)a1;
- (void)requestSyncForPairedDeviceWithPriority:(int)a0;
- (void)requestKeybagSyncToPairedDevice;
- (void)_sendStatusRegistrationWithCompletion:(id /* block */)a0;

@end
