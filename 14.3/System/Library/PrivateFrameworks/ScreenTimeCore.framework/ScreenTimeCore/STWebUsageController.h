@class NSXPCConnection;

@interface STWebUsageController : NSObject

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deleteAllWebHistoryForApplication:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteWebHistoryDuringInterval:(id)a0 application:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteWebHistoryForURL:(id)a0 application:(id)a1 completionHandler:(id /* block */)a2;
- (void)_asynchronousProxyWithHandler:(id /* block */)a0;
- (void)deleteWebHistoryForDomain:(id)a0 application:(id)a1 completionHandler:(id /* block */)a2;

@end
