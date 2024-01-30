@class NSXPCConnection;

@interface SRDebugInfoClient : NSObject

@property (retain) NSXPCConnection *connection;
@property BOOL connectionDidInterrupt;

+ (void)initialize;
+ (id)remoteInterface;
+ (id)connectionToDaemon;
+ (id)clientInterface;

- (id)initWithConnection:(id)a0;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)setupConnection;
- (void)dumpClientsWithReply:(id /* block */)a0;
- (void)dumpStateCacheWithReply:(id /* block */)a0;
- (void)dumpConfigurationsWithReply:(id /* block */)a0;
- (void)dumpDefaultsWithReply:(id /* block */)a0;
- (void)listClientsWithReply:(id /* block */)a0;
- (void)datastoreListingWithReply:(id /* block */)a0;

@end
