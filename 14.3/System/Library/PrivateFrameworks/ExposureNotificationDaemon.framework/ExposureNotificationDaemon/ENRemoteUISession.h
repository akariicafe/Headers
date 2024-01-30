@class NSUUID, NSObject, ENXPCConnection;
@protocol OS_xpc_object;

@interface ENRemoteUISession : NSObject

@property (copy, nonatomic) NSUUID *sessionID;
@property (weak, nonatomic) ENXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *originalRequest;

- (void).cxx_destruct;

@end
