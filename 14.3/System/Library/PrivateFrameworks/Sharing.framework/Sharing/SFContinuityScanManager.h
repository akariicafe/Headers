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

- (void)scanForTypes:(unsigned long long)a0;
- (id)init;
- (void)_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void).cxx_destruct;
- (void)lostDeviceWithDevice:(id)a0;
- (void)removeObserver:(id)a0;
- (void)onqueue_connectionInterrupted;
- (void)addObserver:(id)a0;
- (BOOL)shouldEscapeXpcTryCatch;
- (id)exportedInterface;
- (void)pairedDevicesChanged:(id)a0;
- (id)machServiceName;
- (id)remoteObjectInterface;
- (void)activityPayloadFromDeviceUniqueID:(id)a0 forAdvertisementPayload:(id)a1 command:(id)a2 timeout:(long long)a3 withCompletionHandler:(id /* block */)a4;
- (void)onqueue_connectionEstablished;
- (void)foundDeviceWithDevice:(id)a0;
- (void)receivedAdvertisement:(id)a0;

@end
