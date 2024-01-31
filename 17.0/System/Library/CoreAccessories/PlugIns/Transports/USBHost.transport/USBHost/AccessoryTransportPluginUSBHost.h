@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AccessoryTransportPluginUSBHost : ACCTransportPlugin <ACCTransportPluginProtocol, ACCPlatformUSBHostPluginProtocol, ACCPlatformUSBBillboardDevicePluginProtocol> {
    struct IONotificationPort { } *_iokitNotifyPort;
    unsigned int _iokitAddedIterator;
    unsigned int _iokitRemovedIterator;
    unsigned int temp;
    struct IONotificationPort { } *_iokitVIDPIDNotifyPort;
    unsigned int _iokitVIDPIDAddedIterator;
    unsigned int _iokitVIDPIDRemovedIterator;
}

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) NSMutableDictionary *accessoryConnections;
@property (retain, nonatomic) NSMutableDictionary *accessoryNativeUSBEndpoints;
@property (retain, nonatomic) NSMutableDictionary *activeEAInterfaces;
@property (retain, nonatomic) NSMutableDictionary *activeUSBCDCInterfaces;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessoryConnectionsLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activeEAInterfacesLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessoryNativeUSBEndpointsLock;
@property (retain, nonatomic) NSMutableDictionary *accessoryiAPIntefaceTrafficWaitList;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *accessoryiAPIntefaceTrafficTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pluginName;

+ (struct __CFDictionary { } *)_createVIDPIDMatchingDictionary;

- (void)initPlugin;
- (void)startPlugin;
- (void)stopPlugin;
- (void)configureIOKitVIDPID;
- (void)_handleOpenSocketFromAccessoryToAppNotification:(id)a0;
- (BOOL)clearUSBHostHIDInterfacesForConnectionUUID:(id)a0;
- (BOOL)configureUSBHostNCMInterface:(unsigned char)a0 asCarPlay:(BOOL)a1 forConnectionUUID:(id)a2;
- (BOOL)sendOutgoingData:(id)a0 forEndpointWithUUID:(id)a1 connectionUUID:(id)a2;
- (void)_handleCloseEASessionNotificationForEndpoint:(id)a0 connection:(id)a1;
- (BOOL)setUSBHostHIDInterface:(unsigned char)a0 withHIDFunction:(unsigned int)a1 forConnectionUUID:(id)a2;
- (BOOL)unlockUSBHostInterfacesForConnectionUUID:(id)a0;
- (void)serviceRemoved:(unsigned int)a0;
- (void)VIDPIDServiceAdded:(unsigned int)a0;
- (void)_handleOpenSocketFromAppToAccessoryNotification:(id)a0;
- (void)tearDownIOKit;
- (void)serviceAdded:(unsigned int)a0;
- (void)tearDownIOKitVIDPID;
- (BOOL)stopDetectUSBBillboardDeviceWithVID:(unsigned short)a0 PID:(unsigned short)a1;
- (void)configureIOKit;
- (void).cxx_destruct;
- (BOOL)lockUSBHostInterfacesForConnectionUUID:(id)a0;
- (void)startConfiguringIOKit;
- (void)_handleOpenEASessionNotificationForEndpoint:(id)a0 connection:(id)a1;
- (void)VIDPIDServiceRemoved:(unsigned int)a0;
- (BOOL)startDetectUSBBillboardDeviceWithVID:(unsigned short)a0 PID:(unsigned short)a1;
- (BOOL)setNeedOutZLP:(BOOL)a0 maxOutLength:(unsigned int)a1 forConnectionUUID:(id)a2;

@end
