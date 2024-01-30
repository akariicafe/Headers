@class NSSet, NSString, NSMutableDictionary, NSMutableSet, NSURL;
@protocol GCDeviceConfigurationRegistry;

@interface _GCControllerManagerServer : _GCControllerManager <GCPhysicalDeviceRegistry, GCLogicalDeviceRegistry, GCDeviceRegistry, GCDeviceConfigurationRegistry> {
    NSMutableDictionary *_allDeviceManagers;
    NSMutableDictionary *_physicalDeviceManagers;
    NSMutableDictionary *_logicalDeviceManagers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _configurationsLock;
    NSMutableSet *_configurations;
    NSMutableDictionary *_allDevices;
    NSMutableDictionary *_physicalDevices;
    NSMutableDictionary *_logicalDevices;
    NSMutableSet *_activeConfigurations;
    NSMutableSet *_hidServices;
    NSMutableDictionary *_hidServiceOwners;
    NSMutableDictionary *_pendingDriverConnections;
    NSMutableDictionary *_pendingFilterConnections;
    NSURL *_lastGeneratedURL;
}

@property (readonly, copy) NSSet *pidsWithKeyboardAndMouseSupport;
@property (copy) NSSet *activeControllerDevices;
@property (copy) NSSet *pidsWithKeyboardAndMouseSupport;
@property (readonly) id<GCDeviceConfigurationRegistry> deviceConfigurationRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)updateConfiguration:(id)a0;
- (void)onHIDDeviceAdded:(struct __IOHIDServiceClient { } *)a0;
- (void)refreshActiveConfigurationsWithCompletion:(id /* block */)a0;
- (id)makeHIDEventSource:(struct __IOHIDEventSystemClient { } *)a0;
- (void)enableKeyboardAndMouseSupportForPID:(id)a0;
- (void)_hidqueue_pushPendingDriverConnection:(id)a0 forRegistryID:(id)a1;
- (void)onHIDDeviceRemoved:(struct __IOHIDServiceClient { } *)a0;
- (void)_onqueue_unregisterPhysicalDevice:(id)a0;
- (id)_hidqueue_popPendingDriverConnectionsForRegistryID:(id)a0;
- (void)_onqueue_refreshControllers;
- (void)deviceManager:(id)a0 deviceDidDisconnect:(id)a1;
- (void)_onqueue_refreshLogicalDevices;
- (BOOL)addConfiguration:(id)a0 replaceExisting:(BOOL)a1;
- (BOOL)hasConfigurationWithIdentifier:(id)a0;
- (void)deviceManager:(id)a0 deviceDidConnect:(id)a1;
- (void)_onqueue_registerLogicalDevice:(id)a0;
- (id)logicalDevices;
- (void).cxx_destruct;
- (id)init;
- (id)initWithControllerProfiles:(id)a0;
- (void)refreshActiveConfigurations;
- (void)disableKeyboardAndMouseSupportForPID:(id)a0;
- (void)_hidqueue_pushPendingFilterConnection:(id)a0 forRegistryID:(id)a1;
- (id)configurationWithIdentifier:(id)a0;
- (void)_onqueue_signalGameControllerFocusModeEvent;
- (void)_onqueue_registerPhysicalDevice:(id)a0;
- (void)_onqueue_unregisterLogicalDevice:(id)a0;
- (id)lastGeneratedURL;
- (BOOL)removeConfigurationWithIdentifier:(id)a0;
- (BOOL)acceptIncomingDriverConnection:(id)a0;
- (void)setLastGeneratedURL:(id)a0;
- (void)driverCheckIn;
- (id)_hidqueue_popPendingFilterConnectionsForRegistryID:(id)a0;

@end
