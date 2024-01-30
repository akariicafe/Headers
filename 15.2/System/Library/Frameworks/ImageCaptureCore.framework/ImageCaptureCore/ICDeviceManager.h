@class NSString, NSXPCConnection, NSOperationQueue, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface ICDeviceManager : NSObject <ICDeviceManagerProtocol> {
    NSMutableArray *_deviceHandles;
    NSMutableArray *_disabledHandles;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _deviceHandlesLock;
    NSDictionary *_deviceMatchingInfo;
    NSMutableDictionary *_devices;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _deviceOperationQueueLock;
    BOOL _deviceOperationQueueSuspended;
    BOOL _managerIsRunning;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _deviceConnectionLock;
}

@property (nonatomic) BOOL controlAuthorizedStatus;
@property (retain) NSOperationQueue *deviceOperations;
@property (retain, nonatomic) NSXPCConnection *managerConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteFileImp:(id)a0;
- (void)getFileDataImp:(id)a0;
- (void)ejectImp:(id)a0;
- (void)startDeviceWithHandle:(id)a0;
- (void)unregisterDevice:(id)a0 forImageCaptureEventNotificationsImp:(id)a1;
- (void)sendDevicePTPCommandImp:(id)a0;
- (long long)eject:(id)a0;
- (void)stopRunning;
- (void)getFileMetadataImp:(id)a0;
- (id)deviceManagerConnection;
- (void)downloadFileImp:(id)a0;
- (void)syncClockImp:(id)a0;
- (void)registerDevice:(id)a0 forImageCaptureEventNotificationsImp:(id)a1;
- (void)startRunning;
- (id)init;
- (void)dealloc;
- (void)addSelectorToInterface:(id)a0 selectorString:(id)a1 origin:(BOOL)a2;
- (void)getFileThumbnailImp:(id)a0;
- (void)postNotification:(id)a0;
- (void)addInteractiveOperation:(id)a0;
- (id)deviceForConnection:(id)a0;
- (BOOL)openRemoteDeviceManager;
- (void)getDeviceList;
- (void)closeDeviceHandle:(id)a0;
- (id)remoteManager;
- (void)notifyAddedDevice:(id)a0;
- (void)notifyRemovedDevice:(id)a0;
- (void)restartRunning;
- (void)resumeOperations;
- (void)openDeviceImp:(id)a0;
- (void)closeDeviceImp:(id)a0;
- (void)openSessionImp:(id)a0;
- (void)closeSessionImp:(id)a0;
- (void)addInitiatedOperation:(id)a0;
- (void)extracted:(id)a0;
- (BOOL)controlAuthorized;
- (long long)openDevice:(id)a0 contextInfo:(void *)a1;
- (long long)closeDevice:(id)a0 contextInfo:(void *)a1;
- (long long)openSession:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (long long)closeSession:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (long long)getFileThumbnail:(id)a0 fromDevice:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (long long)getFileMetadata:(id)a0 fromDevice:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (long long)getFileData:(id)a0 fromDevice:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (long long)syncClock:(id)a0 completion:(id /* block */)a1;
- (long long)deleteFile:(id)a0 fromDevice:(id)a1 completion:(id /* block */)a2;
- (long long)downloadFile:(id)a0 fromDevice:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (long long)sendDevice:(id)a0 ptpCommand:(id)a1 andPayload:(id)a2 completion:(id /* block */)a3;
- (long long)registerDevice:(id)a0 forImageCaptureEventNotifications:(id)a1;
- (long long)unregisterDevice:(id)a0 forImageCaptureEventNotifications:(id)a1;
- (void)openDeviceHandle:(id)a0;
- (id)deviceForUUID:(id)a0;
- (void)enumerateContent;
- (void)postCommandCompletionNotification:(id)a0;
- (void)suspendOperations;

@end
