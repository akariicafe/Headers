@class NSString, NSXPCConnection;

@interface ANPlaybackSessionClient : NSObject

@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSString *groupID;

+ (id)clientWithXPCConnection:(id)a0;

- (void).cxx_destruct;
- (id)copy;
- (id)description;

@end
