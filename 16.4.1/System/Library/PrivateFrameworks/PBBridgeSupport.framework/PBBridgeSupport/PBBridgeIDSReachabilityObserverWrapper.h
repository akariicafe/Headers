@protocol PBBridgeIDSReachabilityObserver;

@interface PBBridgeIDSReachabilityObserverWrapper : NSObject

@property (weak, nonatomic) id<PBBridgeIDSReachabilityObserver> observer;

- (void).cxx_destruct;
- (void)fireReachability:(id)a0 deviceStatus:(id)a1 devices:(id)a2;

@end
