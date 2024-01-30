@class NSMutableDictionary;
@protocol MDIndexer;

@interface CSIndexAgent : CSXPCConnection

@property (retain, nonatomic) NSMutableDictionary *indexConnections;
@property (retain, nonatomic) id<MDIndexer> indexer;

+ (id)indexAgent:(BOOL)a0 serviceName:(id)a1;
+ (id)indexDelegateAgent:(id)a0;
+ (id)indexAgent;

- (BOOL)addClientConnectionIfAllowedForConnection:(id)a0;
- (void).cxx_destruct;
- (BOOL)handleCommand:(const char *)a0 info:(id)a1 connection:(id)a2;
- (id)indexConnection:(id)a0;
- (BOOL)lostClientConnection:(id)a0 error:(id)a1;
- (BOOL)addClientConnectionIfAllowedForConfiguration:(id)a0;

@end
