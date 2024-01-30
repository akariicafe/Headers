@interface SHNetworkRequester : NSObject

+ (void)responseForRequest:(id)a0 response:(id)a1 data:(id)a2 error:(id)a3 completionHandler:(id /* block */)a4;
+ (void)performRequest:(id)a0 completionHandler:(id /* block */)a1;
+ (void)downloadResourceFromRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
