@class NSString, AMSDaemonConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, AMSDeviceMessengerServiceInterface;

@interface AMSDeviceMessenger : NSObject <AMSDeviceMessengerClientInterface> {
    id<AMSDeviceMessengerServiceInterface> _proxyObject;
}

@property (retain, nonatomic) AMSDaemonConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *updateHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)clearDialog:(id)a0;
- (id)_getProxyObject;
- (id)_identifierFromDialogRequest:(id)a0;
- (void).cxx_destruct;
- (void)_sendDelegateUpdateForMessage:(id)a0;
- (void)addUpdateHandlerForType:(long long)a0 filter:(id)a1 handler:(id /* block */)a2;
- (id)dialogsWithFilter:(id)a0;
- (id)sendDialog:(id)a0 account:(id)a1;
- (void)deviceMessengerDidReceiveMessage:(id)a0;
- (void)deviceMessengerDidReceiveReply:(id)a0;
- (void)deviceMessengerDidClearMessage:(id)a0;
- (void)deviceMessengerDidUpdateDevices;

@end
