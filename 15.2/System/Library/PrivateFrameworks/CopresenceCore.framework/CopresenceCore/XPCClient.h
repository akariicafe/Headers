@class NSString, NSXPCConnection;

@interface XPCClient : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) int processID;
@property (readonly, nonatomic) NSString *bundleID;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;

@end
