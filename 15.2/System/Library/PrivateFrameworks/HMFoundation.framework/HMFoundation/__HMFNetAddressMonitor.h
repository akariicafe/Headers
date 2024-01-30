@class HMFNetAddress, NSObject;
@protocol OS_dispatch_queue;

@interface __HMFNetAddressMonitor : HMFNetMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    HMFNetAddress *_netAddress;
}

@property (readonly, nonatomic) struct __SCNetworkReachability { } *networkReachabilityRef;
@property (nonatomic) unsigned int currentNetworkFlags;

- (id)shortDescription;
- (id)netAddress;
- (id)attributeDescriptions;
- (id)initWithNetAddress:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)init;
- (id)initWithNetService:(id)a0;
- (unsigned long long)reachabilityPath;
- (void)dealloc;
- (void)handleNetworkReachabilityChange:(unsigned int)a0;

@end
