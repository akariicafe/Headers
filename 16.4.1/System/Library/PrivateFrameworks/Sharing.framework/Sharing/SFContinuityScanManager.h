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
- (void)_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)onqueue_connectionInterrupted;
- (void)addObserver:(id)a0;
- (id)exportedInterface;
- (void)pairedDevicesChanged:(id)a0;
- (void)onqueue_connectionEstablished;
- (BOOL)shouldEscapeXpcTryCatch;
- (id)machServiceName;
- (void)removeObserver:(id)a0;
- (void)scanForTypes:(unsigned long long)a0;
- (id)init;
- (void)receivedAdvertisement:(id)a0;
- (void)foundDeviceWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)activityPayloadFromDeviceUniqueID:(id)a0 forAdvertisementPayload:(id)a1 command:(id)a2 timeout:(long long)a3 withCompletionHandler:(id /* block */)a4;
- (void)lostDeviceWithDevice:(id)a0;

@end
