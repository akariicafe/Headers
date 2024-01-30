@class NSString, NSXPCConnection, NSXPCInterface, ARServer;

@interface ARDaemonControl : NSObject <ARControlProtocol> {
    NSXPCConnection *_connection;
}

@property (class, readonly, nonatomic) NSXPCInterface *controlProxyInterface;
@property (class, readonly, nonatomic) NSXPCInterface *controlInterface;

@property (weak, nonatomic) ARServer *server;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidationHandler;
- (id)initWithConnection:(id)a0;
- (void)interruptionHandler;
- (void).cxx_destruct;
- (void)getStatusDictionaryWithReply:(id /* block */)a0;
- (void)getStatusWithVerboseOutput:(BOOL)a0 reply:(id /* block */)a1;

@end
