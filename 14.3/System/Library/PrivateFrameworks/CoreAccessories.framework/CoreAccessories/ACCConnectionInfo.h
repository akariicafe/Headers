@class NSString, NSXPCConnection, NSMutableDictionary, NSDictionary, NSLock;
@protocol ACCConnectionInfoXPCServerProtocol, ACCConnectionInfoPrivateDelegateProtocol;

@interface ACCConnectionInfo : NSObject

@property (retain, nonatomic) NSString *providerUID;
@property (weak, nonatomic) id<ACCConnectionInfoPrivateDelegateProtocol> delegate;
@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) id<ACCConnectionInfoXPCServerProtocol> remoteObject;
@property (retain, nonatomic) NSLock *listLock;
@property (retain, nonatomic) NSMutableDictionary *connectionList;
@property (retain, nonatomic) NSMutableDictionary *endpointList;
@property (readonly) NSDictionary *accessoryFilterDictionary;

+ (id)sharedInstance;
+ (id)accessoryDictionaryForLogging:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)connectToServer:(BOOL)a0;
- (void)dealloc;
- (void)accessoryConnectionDetached:(id)a0;
- (void)accessoryConnectionAttached:(id)a0 type:(int)a1 info:(id)a2 properties:(id)a3;
- (void)accessoryEndpointUpdate:(id)a0 protocol:(int)a1 properties:(id)a2 forConnection:(id)a3;
- (void)accessoryConnectionInfoPropertyChanged:(id)a0 properties:(id)a1;
- (void)accessoryEndpointInfoPropertyChanged:(id)a0 properties:(id)a1 forConnection:(id)a2;
- (BOOL)registerDelegate:(id)a0;
- (void)accessoryEndpointAttached:(id)a0 transportType:(int)a1 protocol:(int)a2 properties:(id)a3 forConnection:(id)a4;
- (void)accessoryEndpointDetached:(id)a0 forConnection:(id)a1;
- (id)accessoryPropertySync:(id)a0 forEndpoint:(id)a1 connection:(id)a2;
- (void)accessoryEndpointsForConnection:(id)a0 withReply:(id /* block */)a1;
- (void)accessoryInfoForConnection:(id)a0 withReply:(id /* block */)a1;
- (void)accessoryInfoForEndpoint:(id)a0 connection:(id)a1 withReply:(id /* block */)a2;
- (void)accessoryProperty:(id)a0 forConnection:(id)a1 withReply:(id /* block */)a2;
- (void)accessoryProperty:(id)a0 forEndpoint:(id)a1 connection:(id)a2 withReply:(id /* block */)a3;
- (void)interceptIncomingNTimes:(int)a0 forEndpoint:(id)a1 connection:(id)a2;
- (void)sendData:(id)a0 forEndpoint:(id)a1 connection:(id)a2;
- (void)handleInterceptData:(id)a0 forEndpoint:(id)a1 connection:(id)a2;
- (void)notifyDelegateOfServerDisconnectAndCleanup;
- (BOOL)registerDelegate:(id)a0 withFilter:(id)a1;
- (id)accessoryInfoForConnectionSync:(id)a0;
- (id)accessoryInfoForEndpointSync:(id)a0 connection:(id)a1;
- (id)accessoryPropertySync:(id)a0 forConnection:(id)a1;
- (int)accessoryConnectionType:(id)a0;
- (int)accessoryEndpointTransportType:(id)a0 connection:(id)a1;
- (int)accessoryEndpointProtocolType:(id)a0 connection:(id)a1;
- (int)getInterceptCountForEndpoint:(id)a0 connection:(id)a1;

@end
