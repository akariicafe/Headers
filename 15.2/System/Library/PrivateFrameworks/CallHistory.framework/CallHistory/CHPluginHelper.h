@class NSXPCInterface, NSXPCConnection;

@interface CHPluginHelper : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
}

- (void).cxx_destruct;
- (id)init;
- (id)recentCallsWithLimitingTypes:(unsigned int)a0 error:(id *)a1;
- (void)recentCallsWithLimitingTypes:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)unreadCallCountWithError:(id *)a0;
- (void)unreadCallCountWithCompletionHandler:(id /* block */)a0;

@end
