@class NSString, GKDiscovery, GKPlayer;

@interface GKNearbyDevice : NSObject

@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) long long state;
@property (retain, nonatomic) GKDiscovery *discovery;
@property (retain, nonatomic) GKPlayer *player;

+ (id)nearbyDeviceWithID:(id)a0 discovery:(id)a1;

- (void).cxx_destruct;
- (void)sendDictionary:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
