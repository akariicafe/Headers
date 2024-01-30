@class NSXPCConnection;

@interface VSSubscriptionServiceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)serviceWithErrorHandler:(id /* block */)a0;

@end
