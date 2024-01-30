@class NSNumber, HMDDeviceAddress, NSHashTable;

@interface HMDModernTransportDeviceReachabilityObserverListenerContext : NSObject

@property (readonly, nonatomic) NSHashTable *listeners;
@property (retain, nonatomic) NSNumber *reachability;
@property (retain, nonatomic) HMDDeviceAddress *address;
@property (nonatomic) double unreachableStartTime;

- (void).cxx_destruct;
- (id)initWithAddress:(id)a0;

@end
