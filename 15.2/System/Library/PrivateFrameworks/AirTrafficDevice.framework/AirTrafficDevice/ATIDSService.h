@class ATIDSConnectionInfo, NSString, NSMutableArray, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface ATIDSService : ATMessageLinkListener <IDSServiceDelegate, ATSocketDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_service;
    ATIDSConnectionInfo *_connectionInfo;
    NSMutableArray *_listeners;
    BOOL _running;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)openSocketPriorityFromATPendingChangePriority:(int)a0;

- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 hasBeenDeliveredWithContext:(id)a3;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (BOOL)hasPairedDevice;
- (void)service:(id)a0 connectedDevicesChanged:(id)a1;
- (id)pairedDevice;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (void)removeListener:(id)a0;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)setPreferWifi:(BOOL)a0;
- (BOOL)start;
- (void)addListener:(id)a0;
- (void)_connect;
- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (void)socket:(id)a0 hasDataAvailable:(const char *)a1 length:(long long)a2;
- (void)_scheduleConnectWithPriority:(long long)a0;
- (void)_cancelPendingConnectionRequests;
- (void)socketDidClose:(id)a0;
- (void)requestConnectionToPairedDeviceWithPriority:(long long)a0;
- (void)_sendWakeup;
- (id)deviceForId:(id)a0;
- (id)_messageTypeToString:(int)a0;
- (void)_scheduleReconnect;
- (void)stop;

@end
