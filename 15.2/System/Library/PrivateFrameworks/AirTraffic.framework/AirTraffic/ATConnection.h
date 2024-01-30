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

- (void)requestSyncForLibrary:(id)a0;
- (void)clearSyncData;
- (void)requestKeybagSyncToPairedDevice;
- (void)connection:(id)a0 updatedAssets:(id)a1;
- (id)restoreDeviceWithIdentifier:(id)a0;
- (void)lowBatteryNotification;
- (void)registerForStatus;
- (void)registerForAssetProgressForDataclass:(id)a0;
- (BOOL)isSyncing:(BOOL *)a0 automatically:(BOOL *)a1 wirelessly:(BOOL *)a2;
- (void)_sendStatusRegistration;
- (void)_sendStatusRegistrationWithCompletion:(id /* block */)a0;
- (void)unregisterForStatus;
- (void).cxx_destruct;
- (void)cancelSync;
- (void)prioritizeAsset:(id)a0 forDataclass:(id)a1;
- (id)init;
- (void)openDeviceMessageLink;
- (void)initiateAssetDownloadSessionsWithCompletion:(id /* block */)a0;
- (void)connection:(id)a0 updatedProgress:(id)a1;
- (id)getAssetMetrics;
- (void)keepATCAlive:(BOOL)a0;
- (void)requestSyncForPairedDeviceWithPriority:(int)a0;
- (void)openDeviceMessageLinkWithPriority:(int)a0;
- (void)dealloc;
- (BOOL)getDataRestoreIsComplete;
- (void)connectionWasInterrupted:(id)a0;
- (void)_handleDisconnect;
- (void)purgePartialAsset:(id)a0 forDataclass:(id)a1;

@end
