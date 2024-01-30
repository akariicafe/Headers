@interface MPTCPConverterProxyClient : NSObject

+ (id)getServerConnection;
+ (void)startProxyToMPTCPConverterProxyWithCompletionHandler:(id)a0 completionHandler:(id /* block */)a1;
+ (void)stopProxyToMPTCPConverterProxyWithCompletionHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
