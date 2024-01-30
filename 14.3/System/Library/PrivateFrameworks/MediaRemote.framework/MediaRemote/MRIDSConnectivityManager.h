@class IDSDevice, NSString, NSMutableDictionary, MRDeviceInfo, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface MRIDSConnectivityManager : NSObject <IDSServiceDelegate> {
    IDSService *_service;
    MRDeviceInfo *_deviceInfo;
    NSMutableDictionary *_messageHandlers;
    NSMutableDictionary *_destinationMessageHandlers;
    BOOL _initialStateLoaded;
    NSObject<OS_dispatch_queue> *_idsQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (retain, nonatomic) IDSDevice *device;
@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)init;
- (void).cxx_destruct;
- (void)service:(id)a0 connectedDevicesChanged:(id)a1;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)setMessageHandler:(id /* block */)a0 forType:(long long)a1 destination:(id)a2;
- (void)removeMessageHandlerForType:(long long)a0 destination:(id)a1;
- (BOOL)sendMessasge:(id)a0 type:(long long)a1 destination:(id)a2 session:(id)a3 options:(id)a4;
- (void)resetConnection;
- (void)handleResetConnectionRequest:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_maybeDeviceConnectionStatusChanged;
- (id)deviceDebugName;
- (void)setMessageHandler:(id /* block */)a0 forType:(long long)a1;
- (void)removeMessageHandlerForType:(long long)a0;
- (id)name;

@end
