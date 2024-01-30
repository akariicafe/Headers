@class NSString, NSXPCConnection;

@interface SecuritydXPCClient : NSObject <SecuritydXPCClientInterface>

@property (retain) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureSecuritydXPCProtocol:(id)a0;

- (id)protocolWithSync:(BOOL)a0 errorHandler:(id /* block */)a1;
- (void)dealloc;
- (id)initTargetingSession:(int)a0;
- (id)init;
- (void).cxx_destruct;

@end
