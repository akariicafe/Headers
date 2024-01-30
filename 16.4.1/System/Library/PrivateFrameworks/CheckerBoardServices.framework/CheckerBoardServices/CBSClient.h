@class NSXPCConnection;

@interface CBSClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)defaultClient;

- (id)init;
- (void).cxx_destruct;
- (id)remoteAlertServer;
- (id)systemServicesServer;

@end
