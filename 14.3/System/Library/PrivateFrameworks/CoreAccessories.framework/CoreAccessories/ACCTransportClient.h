@class NSString, NSMutableDictionary, NSXPCConnection;
@protocol ACCTransportClientDelegate;

@interface ACCTransportClient : NSObject <ACCTransportXPCClientProtocol>

@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) NSMutableDictionary *endpointDataOutHandlers;
@property (retain, nonatomic) NSMutableDictionary *connectionPropertyChangeHandlers;
@property (retain, nonatomic) NSMutableDictionary *endpointPropertyChangeHandlers;
@property (weak, nonatomic) id<ACCTransportClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedClient;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_init;
- (BOOL)destroyConnectionWithUUID:(id)a0;
- (void)propertiesDidChange:(id)a0 forConnectionWithUUID:(id)a1 previousProperties:(id)a2;
- (void)propertiesDidChange:(id)a0 forEndpointWithUUID:(id)a1 previousProperties:(id)a2 connectionUUID:(id)a3;
- (id)createConnectionWithType:(int)a0 andIdentifier:(id)a1;
- (BOOL)setProperties:(id)a0 forConnectionWithUUID:(id)a1;
- (BOOL)publishConnectionWithUUID:(id)a0;
- (BOOL)setAccessoryInfo:(id)a0 forEndpointWithUUID:(id)a1;
- (BOOL)setProperties:(id)a0 forEndpointWithUUID:(id)a1;
- (BOOL)destroyEndpointWithUUID:(id)a0;
- (id)connectionUUIDForEndpointWithUUID:(id)a0;
- (id)endpointUUIDsForConnectionWithUUID:(id)a0;
- (int)authStatusForConnectionWithUUID:(id)a0 authType:(int)a1;
- (id)identifierForConnectionWithUUID:(id)a0;
- (id)identifierForEndpointWithUUID:(id)a0;
- (id)propertiesForConnectionWithUUID:(id)a0;
- (id)propertiesForEndpointWithUUID:(id)a0;
- (BOOL)processIncomingData:(id)a0 forEndpointWithUUID:(id)a1;
- (void)setHandler:(id /* block */)a0 forConnectionProperty:(id)a1;
- (void)setHandler:(id /* block */)a0 forEndpointProperty:(id)a1;
- (BOOL)removeProperty:(id)a0 forConnectionWithUUID:(id)a1;
- (id)createEndpointWithTransportType:(int)a0 andProtocol:(int)a1 andIdentifier:(id)a2 andDataOutHandler:(id /* block */)a3 forConnectionWithUUID:(id)a4 publishConnection:(BOOL)a5;
- (BOOL)removeProperty:(id)a0 forEndpointWithUUID:(id)a1;
- (BOOL)isConnectionAuthenticated:(id)a0;
- (id)accessoryInfoForConnectionWithUUID:(id)a0;
- (id)accessoryInfoForEndpointWithUUID:(id)a0;
- (void)connectToServer;
- (void)launchServer;
- (void)setConnectionAuthenticated:(id)a0 state:(BOOL)a1;
- (void)sendOutgoingData:(id)a0 forEndpointWithUUID:(id)a1 connectionUUID:(id)a2 withReply:(id /* block */)a3;
- (void)authStateDidChange:(int)a0 forConnectionWithUUID:(id)a1 previousAuthState:(int)a2 authType:(int)a3 connectionIsAuthenticated:(BOOL)a4 connectionWasAuthenticated:(BOOL)a5;
- (BOOL)setProperty:(id)a0 value:(id)a1 forConnectionWithUUID:(id)a2;
- (BOOL)setProperty:(id)a0 value:(id)a1 forEndpointWithUUID:(id)a2;

@end
