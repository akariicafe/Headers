@class NSMutableDictionary, NSObject;
@protocol OS_xpc_object, MSDKManagedDeviceDelegate;

@interface MSDKManagedDevice : NSObject

@property (retain) NSObject<OS_xpc_object> *connection;
@property (retain) NSObject<OS_xpc_object> *helperConnection;
@property (retain) NSMutableDictionary *xpc_cache;
@property (weak, nonatomic) id<MSDKManagedDeviceDelegate> delegate;

+ (id)sharedInstance;

- (void)handleMessage:(id)a0;
- (BOOL)prepare;
- (void).cxx_destruct;
- (id)init;
- (BOOL)cancelOperation;
- (BOOL)setupConnection;
- (BOOL)needOwnershipWarning:(id *)a0;
- (BOOL)isEnrolled;
- (unsigned long long)typeOfDemoDevice;
- (BOOL)isDeviceClassSupported;
- (BOOL)inferContentFrozenFromPreferencesFile;
- (id)getCacheIdentifier;
- (id)readNVRam:(id)a0;
- (BOOL)setupHelperConnection;
- (BOOL)setupConnection:(id)a0 withMachService:(id)a1;
- (void)handleContentUpdateStatus:(const char *)a0 event:(id)a1;
- (id)errorWithXPCDictionary:(id)a0;
- (BOOL)prepareWithWiFi:(id)a0 password:(id)a1;
- (BOOL)isContentFrozen_xpc;
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
- (BOOL)setDeviceLanguage:(id)a0 andRegion:(id)a1;
- (BOOL)saveBluetoothPairingInfo;
- (BOOL)checkInBlockingUI;
- (BOOL)storeDataBlob:(id)a0;
- (id)retrieveDataBlob;
- (BOOL)deleteDataBlob;
- (id)getPersistentWiFiSsid;
- (BOOL)clearOwnershipWarning;
- (id)saveStoreHour:(id)a0;
- (id)saveScreenSaverIdleDelay:(id)a0;
- (id)getScreenSaverConfig;
- (BOOL)saveScreenSaverConfig:(id)a0;

@end
