@class NSMutableDictionary, NSXPCConnection;

@interface ASDRequestBroker : NSObject {
    NSMutableDictionary *_activeRequests;
    NSXPCConnection *_connection;
}

+ (id)interface;

- (void)cancelAllRequestsWithErrorHandler:(id /* block */)a0;
- (void)submitRequest:(id)a0 withReplyHandler:(id /* block */)a1;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
