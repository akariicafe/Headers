@class NSXPCConnection;

@interface SecuritydXPCClient : NSObject

@property (retain) NSXPCConnection *connection;

+ (void)configureSecuritydXPCProtocol:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
