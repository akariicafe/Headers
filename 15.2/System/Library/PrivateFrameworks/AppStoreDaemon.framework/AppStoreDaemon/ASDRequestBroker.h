@class NSMutableDictionary, NSXPCConnection;

@interface ASDRequestBroker : NSObject

@property (readonly) NSMutableDictionary *activeRequests;
@property (retain) NSXPCConnection *connection;

+ (id)interface;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)markRequestAsComplete:(id)a0;
- (void)markRequestAsActive:(id)a0;
- (void)cancelAllRequestsWithErrorHandler:(id /* block */)a0;
- (void)submitRequest:(id)a0 withReplyHandler:(id /* block */)a1;
- (void)_startConnection;

@end
