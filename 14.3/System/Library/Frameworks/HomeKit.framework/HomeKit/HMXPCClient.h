@class NSString, NSDictionary, NSXPCConnection, NSMutableArray;

@interface HMXPCClient : HMFMessageTransport <HMFMessageTransportDelegate> {
    NSMutableArray *_reconnectionHandlers;
    unsigned long long _homeDataAuthorizationStatus;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) BOOL connectionValid;
@property (nonatomic) BOOL requiresCheckin;
@property (nonatomic) int notifyRegisterToken;
@property (nonatomic) BOOL notifyRegistered;
@property (nonatomic) BOOL isAuthorizedForHomeDataAccess;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)remoteObjectInterface;

- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUserInfo:(id)a0;
- (void)registerReconnectionHandler:(id /* block */)a0;
- (void)messageTransport:(id)a0 didReceiveMessage:(id)a1;

@end
