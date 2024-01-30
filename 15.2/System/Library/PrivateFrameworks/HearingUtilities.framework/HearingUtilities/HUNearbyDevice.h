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

- (id)identifier;
- (void)sendMessage:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void)dealloc;
- (void)reset;
- (void)stop;
- (BOOL)representsPeerDevice:(id)a0;
- (void)purgeMessageCache;
- (BOOL)representsAWatch;
- (id)initWithPeerDevice:(id)a0;
- (void)setupSessionIfNecessary;

@end
