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
- (void)disconnect;
- (void).cxx_destruct;
- (id)_connection;
- (id)initWithDelegate:(id)a0;
- (id)_remoteObjectProxy;
- (void)_clearConnectionWithError:(id)a0;
- (void)handleClientAceUpdate:(id)a0;
- (void)handleServiceAceUpdate:(id)a0;

@end
