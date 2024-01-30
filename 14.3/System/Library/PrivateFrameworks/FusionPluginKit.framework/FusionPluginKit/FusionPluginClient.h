@class NSString, NSXPCConnection;

@interface FusionPluginClient : NSObject <FusionPluginClientInterface>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)sendMessage:(id)a0 response:(id *)a1;
- (id)initClientConnection:(id)a0;

@end
