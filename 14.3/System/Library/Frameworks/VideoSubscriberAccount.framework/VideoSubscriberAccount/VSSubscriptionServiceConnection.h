@class NSXPCConnection;

@interface VSSubscriptionServiceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (id)serviceWithErrorHandler:(id /* block */)a0;
- (void)dealloc;

@end
