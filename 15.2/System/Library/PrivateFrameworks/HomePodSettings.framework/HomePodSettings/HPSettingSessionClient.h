@class NSUUID, NSXPCConnection;

@interface HPSettingSessionClient : NSObject

@property (retain, nonatomic) NSUUID *sessionID;
@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)clientWithXPCConnection:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)copy;

@end
