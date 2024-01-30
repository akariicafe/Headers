@class HMFNetAddress, NSObject;
@protocol OS_dispatch_queue;

@interface __HMFNetAddressMonitor : HMFNetMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    HMFNetAddress *_netAddress;
}

@property (readonly, nonatomic) struct __SCNetworkReachability { } *networkReachabilityRef;
@property (nonatomic) unsigned int currentNetworkFlags;

- (id)netAddress;
- (unsigned long long)reachabilityPath;
- (id)initWithNetService:(id)a0;
- (id)initWithNetAddress:(id)a0;
- (id)init;
- (void)handleNetworkReachabilityChange:(unsigned int)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)shortDescription;
- (id)attributeDescriptions;
- (id)logIdentifier;

@end
