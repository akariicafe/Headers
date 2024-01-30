@class NSMutableDictionary, NSObject;
@protocol OS_xpc_object, MSDKManagedDeviceDelegate, MSDKF200EventObserverProtocol;

@interface MSDKManagedDevice : NSObject

@property (retain) NSObject<OS_xpc_object> *connection;
@property (retain) NSObject<OS_xpc_object> *helperConnection;
@property (retain) NSMutableDictionary *xpc_cache;
@property (retain) id<MSDKF200EventObserverProtocol> F200EventObserver;
@property (weak, nonatomic) id<MSDKManagedDeviceDelegate> delegate;

+ (id)sharedInstance;

- (BOOL)prepare;
- (id)init;
- (void).cxx_destruct;
- (void)handleMessage:(id)a0;
- (BOOL)setupConnection;
- (BOOL)cancelOperation;
- (BOOL)needOwnershipWarning:(id *)a0;
- (BOOL)isEnrolled;
- (BOOL)isDeviceClassSupported;
- (int)readDemoMode;
- (id)getCacheIdentifier;
- (id)errorWithXPCDictionary:(id)a0;
- (BOOL)fetchF200EventsWithOptions:(id)a0 replyQueue:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)sendF200MessageWithCommand:(unsigned char)a0 messageOptions:(id)a1 payloadData:(id)a2 replyQueue:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)sendF200QueryCommandWithOptions:(id)a0 payloadDictionary:(id)a1 replyQueue:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)sendF200ConfigCommandWithOptions:(id)a0 payloadDictionary:(id)a1 replyQueue:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)sendF200ArmCommandWithOptions:(id)a0 payloadDictionary:(id)a1 replyQueue:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)sendF200DisarmCommandWithOptions:(id)a0 payloadDictionary:(id)a1 replyQueue:(id)a2 completionHandler:(id /* block */)a3;
- (id)readNVRam:(id)a0;
- (BOOL)setupHelperConnection;
- (BOOL)setupConnection:(id)a0 withMachService:(id)a1;
- (void)handleContentUpdateStatus:(const char *)a0 event:(id)a1;
- (void)handleF200EventMessage:(id)a0;
- (BOOL)prepareWithWiFi:(id)a0 password:(id)a1;
- (BOOL)isContentFrozen_xpc;
- (unsigned long long)typeOfDemoDevice;
- (long long)getDemoInstallState;
- (BOOL)isContentFrozen;
- (BOOL)lockDemoContent;
- (BOOL)unlockDemoContent;
- (BOOL)revertDemoContent;
- (BOOL)commitNewDemoContent;
- (BOOL)unenroll:(BOOL)a0;
- (id)getDeviceOptions;
- (id)getStoreID;
- (id)getFriendlyDeviceName;
- (BOOL)setStoreOpenAt:(long long)a0 openMinute:(long long)a1 closeHour:(long long)a2 closeMinute:(long long)a3;
- (BOOL)setIdleDelay:(long long)a0;
- (BOOL)configureWiFi:(id)a0 password:(id)a1;
- (BOOL)checkInBlockingUI;
- (BOOL)storeDataBlob:(id)a0;
- (id)retrieveDataBlob;
- (BOOL)deleteDataBlob;
- (id)getPersistentWiFiSsid;
- (id)fetchF200StatusInfo;
- (BOOL)acknowledgeAlarmSoundingRequest;
- (BOOL)registerF200EventObserver:(id)a0;
- (BOOL)unregisterF200EventObserver;
- (BOOL)fetchF200EventsWithOptions:(id)a0 replyQueue:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)sendF200EchoCommandWithOptions:(id)a0 payloadString:(id)a1 replyQueue:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)sendF200QueryCommandWithOptions:(id)a0 replyQueue:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)sendF200ConfigCommandWithOptions:(id)a0 replyQueue:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)sendF200ArmCommandWithOptions:(id)a0 storePasscode:(id)a1 replyQueue:(id)a2 withCompletion:(id /* block */)a3;
- (BOOL)sendF200DisarmCommandWithOptions:(id)a0 storePasscode:(id)a1 replyQueue:(id)a2 withCompletion:(id /* block */)a3;
- (BOOL)sendF200GenericCommandWithOptions:(id)a0 payloadData:(id)a1 replyQueue:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)clearOwnershipWarning;
- (id)saveStoreHour:(id)a0;
- (id)saveScreenSaverIdleDelay:(id)a0;
- (id)getScreenSaverConfig;
- (BOOL)saveScreenSaverConfig:(id)a0;

@end
