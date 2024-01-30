@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ACCPlatformPluginBluetooth : NSObject <ACCPlatformBluetoothStatusPluginProtocol, ACCPlatformBluetoothAccessoryInformationPluginProtocol>

@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL btUpdatesStarted;
@property (nonatomic) struct BTSessionImpl { } *btSession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *btEventQueue;
@property (retain, nonatomic) NSMutableDictionary *accessoryList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pluginName;

- (void)accessoryDetached:(id)a0;
- (void)stopPlugin;
- (void)initPlugin;
- (void)iterateRegisteredComponentsForKnownAddresses:(id)a0 allOFF:(BOOL)a1;
- (void)startPlugin;
- (void)startCheckingForUpdates:(id)a0 forAccessory:(id)a1;
- (id)nameForMacAddress:(id)a0;
- (void).cxx_destruct;
- (void)stopCheckingForUpdates:(id)a0 forAccessory:(id)a1;
- (id)getAccessoryList;
- (int)updateBTComponent:(id)a0 forAccessory:(id)a1 withEnabledState:(BOOL)a2;
- (void)pluginBTDevice:(id)a0 btAccessoryManager:(struct BTAccessoryManagerImpl { } *)a1 btDevice:(struct BTDeviceImpl { } *)a2;
- (void)performInit;
- (void)unplugBTDevice:(id)a0 btAccessoryManager:(struct BTAccessoryManagerImpl { } *)a1 btDevice:(struct BTDeviceImpl { } *)a2;
- (id)accessoryAttached:(id)a0;

@end
