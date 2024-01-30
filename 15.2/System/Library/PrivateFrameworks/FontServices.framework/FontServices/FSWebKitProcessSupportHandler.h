@class NSXPCConnection;

@interface FSWebKitProcessSupportHandler : NSObject <FontServicesWebKitSupportHostProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;

- (void)ping:(id /* block */)a0;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)checkin:(id)a0 reply:(id /* block */)a1;

@end
