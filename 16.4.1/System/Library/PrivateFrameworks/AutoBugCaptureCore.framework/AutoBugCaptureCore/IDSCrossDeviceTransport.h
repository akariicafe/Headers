@class NSString, NSMutableDictionary, NSMutableSet, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface IDSCrossDeviceTransport : CrossDeviceTransportCore <IDSServiceDelegate> {
    NSObject<OS_dispatch_queue> *_idsServiceQueue;
    NSMutableDictionary *_endpointsRegistry;
    NSMutableSet *_delegateRegistry;
    IDSService *_idsService;
    NSString *_serviceName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isIDSEndpointEnabled;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 hasBeenDeliveredWithContext:(id)a3;
- (unsigned long long)deliverMessage:(id)a0 toEndpoint:(id)a1;
- (void)sendMessage:(id)a0 toIDSDevices:(id)a1 toEndpoint:(id)a2 reply:(id /* block */)a3;
- (void)sendMessage:(id)a0 toIDSDevicesMatching:(id)a1 toEndpoint:(id)a2 reply:(id /* block */)a3;
- (id)initWithServiceName:(id)a0;
- (void)sendMessage:(id)a0 toIDSDevices:(id)a1 toEndpoint:(id)a2 validFor:(double)a3 reply:(id /* block */)a4;
- (void)removeDelegate:(id)a0 endpoint:(id)a1;
- (void)dealloc;
- (void)addDelegate:(id)a0 endpoint:(id)a1;
- (void)registerIDSService;
- (void)unregisterIDSService;
- (id)init;
- (id)idsService;
- (void).cxx_destruct;

@end
