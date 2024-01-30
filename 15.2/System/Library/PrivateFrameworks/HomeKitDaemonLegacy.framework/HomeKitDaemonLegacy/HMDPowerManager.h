@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDPowerManager : HMFObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _networkInterfaceActive;
    unsigned int _powerAssertion;
    struct __SCDynamicStore { } *_scStore;
    void *_scContext;
    BOOL _started;
}

@property (nonatomic, getter=isNetworkAccessRequired) BOOL networkAccessRequired;

- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)_update;
- (void)dealloc;
- (void)stop;
- (int)_ensureNetworkInterfaceMonitorStarted;
- (void)_ensureNetworkInterfaceMonitorStopped;

@end
