@class NSNumber, NSHashTable;

@interface HMDModernTransportDeviceReachabilityObserverListenerContext : NSObject

@property (readonly, nonatomic) NSHashTable *listeners;
@property (retain, nonatomic) NSNumber *reachability;

- (void).cxx_destruct;
- (id)init;

@end
