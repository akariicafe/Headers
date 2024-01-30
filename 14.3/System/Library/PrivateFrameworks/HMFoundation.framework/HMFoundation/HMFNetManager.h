@class _HMFNetManagerWoWAssertion, NSObject;
@protocol OS_dispatch_queue;

@interface HMFNetManager : HMFObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (weak) _HMFNetManagerWoWAssertion *wowAssertion;

+ (void)initialize;
+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)registerWoWAssertionForObject:(id)a0;
- (void)deregisterWoWAssertionForObject:(id)a0;
- (void)deregisterObject:(id)a0;

@end
