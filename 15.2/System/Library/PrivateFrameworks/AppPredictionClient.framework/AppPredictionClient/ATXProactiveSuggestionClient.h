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

- (id)initWithConsumerSubType:(unsigned char)a0;
- (id)remoteSyncBlendingLayerServer;
- (id)suggestionLayoutFromCache;
- (void).cxx_destruct;
- (id)init;
- (id)layoutForRequest:(id)a0;
- (void)setupRemoteClientXPCConnection;

@end
