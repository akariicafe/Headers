@class NSString, NSXPCConnection;

@interface MSNScopedException : NSObject

@property (retain) NSXPCConnection *connection;
@property (copy) NSString *exception;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 exception:(id)a1;

@end
