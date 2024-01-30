@class NSString, NSXPCConnection;
@protocol CDMXPCClientDelegate;

@interface CDMXPCClient : NSObject <CDMXPCListenerServiceDelegate, CDMXPCListenerService> {
    NSXPCConnection *_connection;
    id<CDMXPCClientDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connect;
- (id)initWithDelegate:(id)a0;
- (void)disconnect;
- (void).cxx_destruct;
- (void)handleClientAceUpdate:(id)a0;
- (void)handleClientNLURequest:(id)a0;
- (void)handleClientSetupRequest:(id)a0;
- (void)handleClientSetGraph:(id)a0 reply:(id /* block */)a1;
- (void)handleClientListGraphs:(id /* block */)a0;
- (void)handleServiceAceUpdate:(id)a0;
- (void)handleServiceNLUResponse:(id)a0;
- (void)handleServiceErrorResponse:(id)a0;

@end
