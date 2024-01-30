@class NSString, HMFTimer;

@interface HMDCameraRecordingLoadBalancingAttempt : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy) NSString *logIdentifier;
@property (readonly) HMFTimer *localResponseTimer;
@property (copy) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocalResponseTimeout:(double)a0 logIdentifier:(id)a1;
- (id)initWithLocalResponseTimer:(id)a0 logIdentifier:(id)a1;
- (void)startWithMessage:(id)a0 messageDispatcher:(id)a1 completion:(id /* block */)a2;

@end
