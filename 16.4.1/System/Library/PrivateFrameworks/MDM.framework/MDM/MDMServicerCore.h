@class MDMServerCore, NSString, NSXPCConnection;

@interface MDMServicerCore : NSObject <MDMXPCProtocol, MDMUserXPCProtocol>

@property (weak, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) unsigned long long channelType;
@property (retain, nonatomic) MDMServerCore *server;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unblockAppInstallsWithCompletion:(id /* block */)a0;
- (void)blockAppInstallsWithCompletion:(id /* block */)a0;
- (id)initWithXPCConnection:(id)a0 server:(id)a1;
- (void).cxx_destruct;
- (void)pushTokenWithCompletion:(id /* block */)a0;
- (void)getAssertionDescriptionsWithCompletion:(id /* block */)a0;
- (void)migrateMDMWithContext:(int)a0 completion:(id /* block */)a1;
- (void)notifyNewConfigurationWithCompletion:(id /* block */)a0;
- (void)processDeviceRequest:(id)a0 encodeResponse:(BOOL)a1 completion:(id /* block */)a2;
- (void)processUserRequest:(id)a0 encodeResponse:(BOOL)a1 completion:(id /* block */)a2;
- (void)reauthenticationCompleteWithCompletion:(id /* block */)a0;
- (void)requestInstallOfAppsInRestoreWithCompletion:(id /* block */)a0;
- (void)retryNotNowWithCompletion:(id /* block */)a0;
- (void)scheduleTokenUpdateIfNecessaryWithCompletion:(id /* block */)a0;
- (void)scheduleTokenUpdateWithCompletion:(id /* block */)a0;
- (void)simulatePushIfNetworkTetheredWithCompletion:(id /* block */)a0;
- (void)simulatePushWithCompletion:(id /* block */)a0;
- (void)touchWithCompletion:(id /* block */)a0;
- (void)uprootMDMWithCompletion:(id /* block */)a0;
- (id)_MDMAccessEntitlementForChannelType:(unsigned long long)a0;
- (id)_lacksEntitlementError:(id)a0;
- (BOOL)_remoteProcess:(id)a0 hasEntitlement:(id)a1;

@end
