@class NSString, NSXPCConnection;

@interface NLXPCSpellServerClient : NSObject {
    NSString *_serverName;
    NSXPCConnection *_connection;
    BOOL _invalidated;
}

+ (id)spellServerClient;
+ (void)requestAssetsForLanguage:(id)a0;

- (id)serverName;
- (void)sendCommand:(id)a0;
- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (BOOL)isValid;
- (id)initWithServerName:(id)a0;

@end
