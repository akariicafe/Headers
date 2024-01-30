@class HMFNetService;

@interface __HMFNetServiceMonitor : HMFNetMonitor

@property (readonly) HMFNetService *service;

- (id)netAddress;
- (id)initWithNetAddress:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithNetService:(id)a0;
- (unsigned long long)reachabilityPath;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
