@class NSXPCConnection;

@interface SecuritydXPCClient : NSObject

@property (retain) NSXPCConnection *connection;

+ (void)configureSecuritydXPCProtocol:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
