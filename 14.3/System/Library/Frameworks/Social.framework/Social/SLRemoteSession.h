@class SLDatabase, NSXPCConnection;

@interface SLRemoteSession : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) SLDatabase *database;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 database:(id)a1;
- (BOOL)clientHasEntitlement:(id)a0;

@end
