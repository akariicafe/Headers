@class NSString, NSMutableSet, NSHashTable;

@interface SFContinuityScanManager : SFXPCClient <SFContinuityScannerClient>

@property (retain) NSMutableSet *foundDevices;
@property (retain) NSHashTable *observers;
@property unsigned long long scanTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)remoteObjectInterface;
- (void)onqueue_connectionEstablished;
- (BOOL)shouldEscapeXpcTryCatch;
- (id)machServiceName;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)pairedDevicesChanged:(id)a0;
- (void)onqueue_connectionInterrupted;
- (void)activityPayloadFromDeviceUniqueID:(id)a0 forAdvertisementPayload:(id)a1 command:(id)a2 timeout:(long long)a3 withCompletionHandler:(id /* block */)a4;
- (void)lostDeviceWithDevice:(id)a0;
- (void)_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)receivedAdvertisement:(id)a0;
- (void)scanForTypes:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)exportedInterface;
- (void)foundDeviceWithDevice:(id)a0;

@end
