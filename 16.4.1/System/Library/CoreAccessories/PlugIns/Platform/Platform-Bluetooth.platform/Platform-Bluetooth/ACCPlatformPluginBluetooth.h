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

- (void)initPlugin;
- (void)startPlugin;
- (int)updateBTComponent:(id)a0 forAccessory:(id)a1 withEnabledState:(BOOL)a2;
- (void)accessoryDetached:(id)a0;
- (id)accessoryAttached:(id)a0;
- (id)getAccessoryList;
- (id)nameForMacAddress:(id)a0;
- (void)iterateRegisteredComponentsForKnownAddresses:(id)a0 allOFF:(BOOL)a1;
- (void)stopPlugin;
- (void)performInit;
- (void)pluginBTDevice:(id)a0 btAccessoryManager:(struct BTAccessoryManagerImpl { } *)a1 btDevice:(struct BTDeviceImpl { } *)a2;
- (void).cxx_destruct;
- (void)stopCheckingForUpdates:(id)a0 forAccessory:(id)a1;
- (void)unplugBTDevice:(id)a0 btAccessoryManager:(struct BTAccessoryManagerImpl { } *)a1 btDevice:(struct BTDeviceImpl { } *)a2;
- (void)startCheckingForUpdates:(id)a0 forAccessory:(id)a1;

@end
