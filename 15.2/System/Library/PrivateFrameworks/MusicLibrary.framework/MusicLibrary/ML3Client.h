@class NSString, NSXPCConnection;

@interface ML3Client : NSObject

@property (class, readonly, nonatomic) ML3Client *daemonClient;
@property (class, readonly, nonatomic) ML3Client *processClient;

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) int processID;
@property (readonly, nonatomic, getter=isDaemonClient) BOOL daemonClient;

- (id)initWithConnection:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
