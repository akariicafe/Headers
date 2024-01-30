@class NEVPNProtocol, NSArray, NSString;

@interface NETunnelProvider : NEProvider <NSExtensionRequestHandling> {
    BOOL _reasserting;
    BOOL _onDemandEnabled;
    BOOL _gracefulShutdown;
}

@property (retain) NEVPNProtocol *protocolConfiguration;
@property (retain) NSArray *appRules;
@property (readonly) long long routingMethod;
@property BOOL reasserting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleAppMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setTunnelNetworkSettings:(id)a0 completionHandler:(id /* block */)a1;

@end
