@class NSString, NSDictionary, NSXPCConnection;
@protocol CDMXPCConnectionDelegate;

@interface CDMXPCConnection : NSObject <CDMXPCListenerService> {
    NSXPCConnection *_connection;
}

@property (nonatomic) id<CDMXPCConnectionDelegate> delegate;
@property (readonly, nonatomic) NSString *clientId;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCConnection:(id)a0;
- (id)_remoteObject;
- (void).cxx_destruct;
- (void)dealloc;
- (void)publish:(id)a0;
- (void)handleClientAceUpdate:(id)a0;
- (void)handleClientNLURequest:(id)a0;
- (void)handleClientSetupRequest:(id)a0;
- (void)handleClientSetGraph:(id)a0 reply:(id /* block */)a1;
- (void)handleClientListGraphs:(id /* block */)a0;
- (void)publishNLUResponse:(id)a0;
- (void)publishError:(id)a0 isFatal:(BOOL)a1;

@end
