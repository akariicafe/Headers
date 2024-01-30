@class ATXUICacheManager, NSXPCConnection;

@interface ATXProactiveSuggestionConsumer : NSObject {
    unsigned char _consumer;
    ATXUICacheManager *_cacheManager;
    NSXPCConnection *_xpcConnection;
}

- (id)cachedSuggestionsForClientModelType:(long long)a0;
- (id)suggestionsForRequest:(id)a0 limit:(id)a1;
- (id)initWithConsumerSubType:(unsigned char)a0;
- (void)dealloc;
- (id)remoteSyncBlendingLayerServer;
- (id)suggestionLayoutFromCache;
- (id)layoutForRequest:(id)a0;
- (id)init;
- (void)setupRemoteClientXPCConnection;
- (void).cxx_destruct;

@end
