@class NSString, ATXUICacheManager, NSXPCConnection;

@interface ATXProactiveSuggestionClient : NSObject <ATXProactiveSuggestionClientProtocol> {
    unsigned char _consumer;
    ATXUICacheManager *_cacheManager;
    NSXPCConnection *_xpcConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)spotlightSuggestionLayoutFromCache;
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
