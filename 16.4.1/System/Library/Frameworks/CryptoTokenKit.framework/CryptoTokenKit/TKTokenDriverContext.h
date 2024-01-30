@class NSXPCListenerEndpoint, TKTokenDriver, TKTokenConfigurationConnection, NSString;

@interface TKTokenDriverContext : TKTokenBaseContext <TKTokenDriverProtocol> {
    TKTokenConfigurationConnection *_configurationConnection;
    id _initialKeepAlive;
}

@property (readonly, nonatomic) TKTokenDriver *driver;
@property (readonly, nonatomic) NSXPCListenerEndpoint *configurationEndpoint;
@property (readonly, nonatomic) TKTokenConfigurationConnection *configurationConnection;
@property (readonly, nonatomic) double idleTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setup;
- (void).cxx_destruct;
- (void)setConfigurationEndpoint:(id)a0 reply:(id /* block */)a1;
- (void)acquireTokenWithSlot:(id)a0 AID:(id)a1 reply:(id /* block */)a2;
- (void)acquireTokenWithInstanceID:(id)a0 reply:(id /* block */)a1;
- (void)auditAuthOperation:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 success:(BOOL)a2;
- (id)configurationForTokenID:(id)a0;
- (void)configureWithReply:(id /* block */)a0;
- (void)releaseTokenWithInstanceID:(id)a0 reply:(id /* block */)a1;
- (BOOL)startRequestWithError:(id *)a0;

@end
