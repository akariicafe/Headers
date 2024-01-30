@class HMFWiFiManager, NSObject, _HMFNetManagerWoWAssertion;
@protocol OS_dispatch_queue;

@interface HMFNetManager : HMFObject

@property (class, readonly, nonatomic) HMFNetManager *sharedManager;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (weak) _HMFNetManagerWoWAssertion *wowAssertion;
@property (readonly, nonatomic) HMFWiFiManager *wifiManager;

- (id)init;
- (void).cxx_destruct;
- (void)deregisterObject:(id)a0;
- (void)deregisterWoWAssertionForObject:(id)a0;
- (id)initWithWiFiManager:(id)a0;
- (void)registerWoWAssertionForObject:(id)a0;

@end
