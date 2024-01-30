@class NSFileHandle, NSString, NSArray, NSSet, NSMutableDictionary, GCSSettingsStore, NSURL, NSMutableSet;
@protocol GCUserDefaults, _GCDeviceConfigurationRegistry;

@interface _GCControllerManagerServer : _GCControllerManager <_GCPhysicalDeviceRegistry, _GCLogicalDeviceRegistry, _GCDeviceRegistry, _GCDeviceConfigurationRegistry> {
    NSMutableDictionary *_allDeviceManagers;
    NSMutableDictionary *_physicalDeviceManagers;
    NSMutableDictionary *_logicalDeviceManagers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _configurationsLock;
    NSMutableSet *_configurations;
    id<GCUserDefaults> _defaults;
    NSArray *_copilotSettings;
    GCSSettingsStore *_settingsStore;
    NSMutableSet *_copilotConfigurations;
    NSMutableDictionary *_allDevices;
    NSMutableDictionary *_physicalDevices;
    NSMutableDictionary *_logicalDevices;
    NSMutableSet *_activeConfigurations;
    NSMutableSet *_hidServices;
    NSMutableDictionary *_hidServiceOwners;
    NSMutableDictionary *_pendingDriverConnections;
    NSMutableDictionary *_pendingFilterConnections;
    NSString *_lastGeneratedName;
    NSFileHandle *_lastGeneratedDirectoryHandle;
    NSURL *_lastGeneratedURL;
}

@property (readonly, copy) NSSet *pidsWithKeyboardAndMouseSupport;
@property (copy) NSSet *activeControllerDevices;
@property (copy) NSSet *pidsWithKeyboardAndMouseSupport;
@property (readonly) id<_GCDeviceConfigurationRegistry> deviceConfigurationRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)updateConfiguration:(id)a0;
- (void)_hidqueue_pushPendingDriverConnection:(id)a0 forRegistryID:(id)a1;
- (void)_onqueue_unregisterPhysicalDevice:(id)a0;
- (id)makeHIDEventSource:(struct __IOHIDEventSystemClient { } *)a0;
- (void)_onqueue_signalGameControllerFocusModeEvent;
- (id)configurationWithIdentifier:(id)a0;
- (void)refreshActiveConfigurations;
- (void)_onqueue_registerPhysicalDevice:(id)a0;
- (BOOL)hasConfigurationWithIdentifier:(id)a0;
- (void)_onqueue_refreshLogicalDevices;
- (void)onHIDDeviceAdded:(struct __IOHIDServiceClient { } *)a0;
- (void)onHIDDeviceRemoved:(struct __IOHIDServiceClient { } *)a0;
- (void)_onqueue_refreshControllers;
- (id)initWithControllerProfiles:(id)a0;
- (void)_onqueue_registerLogicalDevice:(id)a0;
- (void)disableKeyboardAndMouseSupportForPID:(id)a0;
- (id)_hidqueue_popPendingFilterConnectionsForRegistryID:(id)a0;
- (void)dealloc;
- (void)refreshActiveConfigurationsWithCompletion:(id /* block */)a0;
- (void)deviceManager:(id)a0 deviceDidDisconnect:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)acceptIncomingDriverConnection:(id)a0;
- (void)deviceManager:(id)a0 deviceDidConnect:(id)a1;
- (void)_hidqueue_pushPendingFilterConnection:(id)a0 forRegistryID:(id)a1;
- (void)driverCheckIn;
- (id)_hidqueue_popPendingDriverConnectionsForRegistryID:(id)a0;
- (id)init;
- (void)enableKeyboardAndMouseSupportForPID:(id)a0;
- (BOOL)removeConfigurationWithIdentifier:(id)a0;
- (BOOL)addConfiguration:(id)a0 replaceExisting:(BOOL)a1;
- (id)logicalDevices;
- (id)lastGeneratedURL;
- (void).cxx_destruct;
- (void)_onqueue_unregisterLogicalDevice:(id)a0;
- (BOOL)getLastGeneratedName:(id *)a0 directoryHandle:(id *)a1 url:(id *)a2;
- (void)setLastGeneratedName:(id)a0 directoryHandle:(id)a1 url:(id)a2;

@end
