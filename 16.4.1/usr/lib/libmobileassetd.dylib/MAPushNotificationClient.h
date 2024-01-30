@class NSString, NSXPCConnection;

@interface MAPushNotificationClient : NSObject <MAServiceClientProtocol>

@property (retain) NSXPCConnection *connection;
@property (retain) NSString *name;
@property (retain) NSString *path;
@property int pid;
@property unsigned int uid;

- (id)initWithConnection:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)didReceivePushNotificationWithInfo:(id)a0;

@end
