@class NSXPCListenerEndpoint, RPBroadcastExtensionHostContext;

@interface RPBroadcastHostViewController : _UIRemoteViewController

@property (retain, nonatomic) RPBroadcastExtensionHostContext *hostContext;
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;

- (void).cxx_destruct;
- (oneway void)completeSetupWithBroadcastURL:(id)a0;
- (void)updateBroadcastHandlerListenerEndpoint;

@end
