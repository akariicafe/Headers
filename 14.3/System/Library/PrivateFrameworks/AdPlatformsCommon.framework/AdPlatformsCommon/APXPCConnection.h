@class NSString, NSXPCConnection;

@interface APXPCConnection : NSObject

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) int processIdentifier;

- (void).cxx_destruct;
- (id)remoteObjectProxy;
- (id)initWithConnection:(id)a0;
- (BOOL)hasEntitlement:(id)a0;
- (struct { unsigned int x0[8]; })auditToken;
- (void)invalidate;

@end
