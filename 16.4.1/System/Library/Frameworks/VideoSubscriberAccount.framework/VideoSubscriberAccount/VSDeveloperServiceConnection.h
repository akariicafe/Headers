@class NSXPCConnection;

@interface VSDeveloperServiceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (id)serviceWithErrorHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
