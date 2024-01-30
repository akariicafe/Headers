@class NSString, NSXPCConnection;

@interface APXPCConnection : NSObject

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) int processIdentifier;

- (struct { unsigned int x0[8]; })auditToken;
- (id)initWithConnection:(id)a0;
- (BOOL)hasEntitlement:(id)a0;
- (id)remoteObjectProxy;
- (void)invalidate;
- (void).cxx_destruct;

@end
