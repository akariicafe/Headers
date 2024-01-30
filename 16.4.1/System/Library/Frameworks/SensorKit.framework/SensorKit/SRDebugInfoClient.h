@class NSXPCConnection;

@interface SRDebugInfoClient : NSObject

@property (retain) NSXPCConnection *connection;
@property BOOL connectionDidInterrupt;

+ (id)remoteInterface;
+ (void)initialize;
+ (id)connectionToDaemon;
+ (id)clientInterface;

- (void)setupConnection;
- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (id)init;
- (void)invalidate;
- (void)datastoreListingWithReply:(id /* block */)a0;
- (void)dumpClientsWithReply:(id /* block */)a0;
- (void)dumpConfigurationsWithReply:(id /* block */)a0;
- (void)dumpDefaultsWithReply:(id /* block */)a0;
- (void)dumpStateCacheWithReply:(id /* block */)a0;
- (void)listClientsWithReply:(id /* block */)a0;

@end
