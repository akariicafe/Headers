@class NSMutableDictionary, NSXPCConnection;

@interface ASDRequestBroker : NSObject

@property (readonly) NSMutableDictionary *activeRequests;
@property (retain) NSXPCConnection *connection;

+ (id)interface;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)cancelAllRequestsWithErrorHandler:(id /* block */)a0;
- (void)submitRequest:(id)a0 withReplyHandler:(id /* block */)a1;
- (void)_startConnection;
- (void)markRequestAsActive:(id)a0;
- (void)markRequestAsComplete:(id)a0;

@end
