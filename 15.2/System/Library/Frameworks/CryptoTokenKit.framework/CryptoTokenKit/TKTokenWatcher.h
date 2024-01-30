@class NSXPCListenerEndpoint, TKClientToken, NSArray, NSXPCConnection, NSMutableDictionary;

@interface TKTokenWatcher : NSObject <TKProtocolTokenWatcherHost> {
    int _notifyToken;
    NSXPCConnection *_connection;
    NSMutableDictionary *_tokenInfos;
    NSMutableDictionary *_removalHandlers;
    id /* block */ _insertionHandler;
}

@property (readonly, nonatomic) TKClientToken *client;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) NSArray *tokenIDs;

- (id)initWithClient:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startWatching;
- (void)dealloc;
- (void)insertedToken:(id)a0;
- (void)removedToken:(id)a0;
- (void)setInsertionHandler:(id /* block */)a0;
- (id)initWithInsertionHandler:(id /* block */)a0;
- (void)addRemovalHandler:(id /* block */)a0 forTokenID:(id)a1;
- (id)tokenInfoForTokenID:(id)a0;

@end
