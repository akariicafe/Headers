@class NSXPCConnection;

@interface SRDebugInfoClient : NSObject

@property (retain) NSXPCConnection *connection;
@property BOOL connectionDidInterrupt;

+ (void)initialize;
+ (id)remoteInterface;
+ (id)clientInterface;
+ (id)connectionToDaemon;

- (id)init;
- (void)dealloc;
- (void)setupConnection;
- (id)initWithConnection:(id)a0;
- (void)invalidate;
- (void)dumpClientsWithReply:(id /* block */)a0;
- (void)dumpStateCacheWithReply:(id /* block */)a0;
- (void)dumpConfigurationsWithReply:(id /* block */)a0;
- (void)listClientsWithReply:(id /* block */)a0;
- (void)datastoreListingWithReply:(id /* block */)a0;

@end
