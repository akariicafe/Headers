@class HMFTimer, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDRemoteDeviceConfirmationHandler : HMFObject <HMFTimerDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFTimer *timeoutTimer;
@property (copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)initWithTimeoutTimer:(id)a0 workQueue:(id)a1 handler:(id /* block */)a2;

@end
