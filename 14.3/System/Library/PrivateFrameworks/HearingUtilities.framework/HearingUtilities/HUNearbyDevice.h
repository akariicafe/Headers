@class NSSet, NSMutableDictionary, RPCompanionLinkClient, RPCompanionLinkDevice;

@interface HUNearbyDevice : NSObject

@property (retain) RPCompanionLinkClient *client;
@property (nonatomic, getter=isActivating) BOOL activating;
@property (nonatomic) BOOL shouldTrack;
@property (retain, nonatomic) NSMutableDictionary *previousMessageCache;
@property (retain, nonatomic) NSSet *cachableKeys;
@property (retain, nonatomic) RPCompanionLinkDevice *device;
@property (nonatomic) unsigned long long connectionStatus;

+ (id)nearbyDeviceWithPeerDevice:(id)a0;

- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)stop;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (id)identifier;
- (BOOL)representsPeerDevice:(id)a0;
- (void)purgeMessageCache;
- (BOOL)representsAWatch;
- (id)initWithPeerDevice:(id)a0;
- (void)setupSessionIfNecessary;

@end
