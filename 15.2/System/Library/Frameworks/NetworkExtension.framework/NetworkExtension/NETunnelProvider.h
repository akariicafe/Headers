@class NEVPNProtocol, NSArray, NSString;

@interface NETunnelProvider : NEProvider <NSExtensionRequestHandling> {
    BOOL _reasserting;
}

@property (retain) NEVPNProtocol *protocolConfiguration;
@property BOOL onDemandEnabled;
@property (retain) NSArray *appRules;
@property BOOL gracefulShutdown;
@property (readonly) long long routingMethod;
@property BOOL reasserting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleAppMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)setTunnelNetworkSettings:(id)a0 completionHandler:(id /* block */)a1;

@end
