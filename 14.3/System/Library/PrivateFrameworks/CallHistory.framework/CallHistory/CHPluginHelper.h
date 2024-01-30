@class NSXPCInterface, NSXPCConnection;

@interface CHPluginHelper : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)unreadCallCount;
- (id)recentCallsWithLimitingTypes:(unsigned int)a0;

@end
