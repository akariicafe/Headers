@class ATXUICacheManager, NSXPCConnection;

@interface ATXProactiveSuggestionConsumer : NSObject {
    unsigned char _consumer;
    ATXUICacheManager *_cacheManager;
    NSXPCConnection *_xpcConnection;
}

- (id)initWithConsumerSubType:(unsigned char)a0;
- (id)remoteSyncBlendingLayerServer;
- (id)suggestionLayoutFromCache;
- (id)cachedSuggestionsForClientModelType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)layoutForRequest:(id)a0;
- (void)setupRemoteClientXPCConnection;

@end
