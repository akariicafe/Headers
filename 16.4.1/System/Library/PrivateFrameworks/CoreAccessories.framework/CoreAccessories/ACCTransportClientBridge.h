@class NSString, ACCTransportClient;

@interface ACCTransportClientBridge : NSObject <ACCTransportClientDelegate>

@property (retain, nonatomic) ACCTransportClient *transportClient;
@property (copy, nonatomic) id /* block */ connectionAuthStatusChangedHandler;
@property (copy, nonatomic) id /* block */ connectionPropertiesChangedHandler;
@property (copy, nonatomic) id /* block */ endpointPropertiesChangedHandler;
@property (copy, nonatomic) id /* block */ serverDisconnectedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedBridge;

- (id)init;
- (void).cxx_destruct;
- (void)transportClient:(id)a0 authStatusDidChange:(BOOL)a1 forConnectionWithUUID:(id)a2;
- (void)transportClient:(id)a0 propertiesDidChange:(id)a1 forConnectionWithUUID:(id)a2 previousProperties:(id)a3;
- (void)transportClient:(id)a0 propertiesDidChange:(id)a1 forEndpointWithUUID:(id)a2 previousProperties:(id)a3 connectionUUID:(id)a4;
- (void)transportClientServerDisconnected:(id)a0;

@end
