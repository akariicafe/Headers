@class GKDiscoveryManager;

@interface GKDiscovery : NSObject

@property (retain, nonatomic) GKDiscoveryManager *manager;
@property (copy, nonatomic) id /* block */ playerFoundHandler;
@property (copy, nonatomic) id /* block */ playerLostHandler;
@property (copy, nonatomic) id /* block */ receiveDataHandler;

- (void)stopBrowsing;
- (void)sendDataToParticipant:(id)a0 deviceID:(id)a1 data:(id)a2 withCompletionHandler:(id /* block */)a3;
- (id)initWithDomain:(id)a0 type:(id)a1;
- (id)startAdvertisingLocalPlayer:(id)a0 discoveryInfo:(id)a1;
- (void)stopAdvertising;
- (void)forgetParticipant:(id)a0 deviceID:(id)a1;
- (id)init;
- (void)dealloc;
- (void)startBrowsingLocalPlayer:(id)a0;

@end
