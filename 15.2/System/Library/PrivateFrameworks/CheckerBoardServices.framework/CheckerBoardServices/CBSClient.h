@class NSXPCConnection;

@interface CBSClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)defaultClient;

- (void).cxx_destruct;
- (id)init;
- (id)remoteAlertServer;
- (id)systemServicesServer;

@end
