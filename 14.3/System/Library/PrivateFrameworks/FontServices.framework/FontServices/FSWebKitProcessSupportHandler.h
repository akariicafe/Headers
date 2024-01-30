@class NSXPCConnection;

@interface FSWebKitProcessSupportHandler : NSObject <FontServicesWebKitSupportHostProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)ping:(id /* block */)a0;
- (void)checkin:(id)a0 reply:(id /* block */)a1;

@end
