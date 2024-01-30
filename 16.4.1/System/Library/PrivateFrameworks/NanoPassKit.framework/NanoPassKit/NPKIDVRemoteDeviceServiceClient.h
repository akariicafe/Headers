@class NSString, PKXPCService;

@interface NPKIDVRemoteDeviceServiceClient : NSObject <PKXPCServiceDelegate> {
    PKXPCService *_remoteService;
}

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (void)remoteService:(id)a0 didEstablishConnection:(id)a1;
- (void)remoteService:(id)a0 didInterruptConnection:(id)a1;
- (void).cxx_destruct;
- (id /* block */)_errorHandlerWithCompletion:(id /* block */)a0;
- (void)didReceiveEvent:(unsigned long long)a0 fromRemoteDeviceWithID:(id)a1;
- (id)initWithRemoteServiceName:(id)a0;

@end
