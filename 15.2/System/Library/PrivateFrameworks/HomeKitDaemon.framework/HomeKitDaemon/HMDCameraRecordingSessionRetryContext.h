@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCameraRecordingSessionRetryContext : NSObject

@property (readonly) double maxRetryInterval;
@property double retryInterval;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSDictionary *homePresenceByPairingIdentity;

- (void).cxx_destruct;
- (void)computeNextRetryInterval;
- (id)initWithWorkQueue:(id)a0 homePresenceByPairingIdentity:(id)a1;
- (id)initWithWorkQueue:(id)a0 homePresenceByPairingIdentity:(id)a1 preferences:(id)a2;

@end
