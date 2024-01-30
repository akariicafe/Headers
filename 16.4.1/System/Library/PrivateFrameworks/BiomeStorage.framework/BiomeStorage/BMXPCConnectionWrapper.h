@class NSXPCConnection;

@interface BMXPCConnectionWrapper : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;

@end
