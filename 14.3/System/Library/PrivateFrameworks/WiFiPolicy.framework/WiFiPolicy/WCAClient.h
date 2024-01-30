@class NSXPCConnection;

@interface WCAClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToService;

+ (id)sharedClient;

- (void)executeFetchRequest:(id)a0;
- (void).cxx_destruct;
- (void)_establishDaemonConnection;

@end
