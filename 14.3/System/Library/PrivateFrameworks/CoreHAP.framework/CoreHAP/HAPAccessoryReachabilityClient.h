@class HAP2SerializedOperationQueue, NSString, HAP2PropertyLock, HMFTimer, HAPDeviceID;
@protocol HAPAccessoryReachabilityDelegate, HAPAccessoryReachabilityProfile;

@interface HAPAccessoryReachabilityClient : HMFObject <HMFLogging, HMFTimerDelegate, HAPAccessoryReachabilityClient> {
    id<HAPAccessoryReachabilityProfile> _profile;
    HAP2SerializedOperationQueue *_operationQueue;
    HAP2PropertyLock *_propertyLock;
    HAPDeviceID *_identifier;
    HMFTimer *_activityTimer;
}

@property (nonatomic) long long state;
@property (readonly, nonatomic) double confirmInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HAPAccessoryReachabilityDelegate> delegate;

+ (void)initialize;
+ (id)logCategory;
+ (id)shortDescription;
+ (id)new;

- (void)_stop;
- (void)confirm;
- (id)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)_timerDidFire:(id)a0;
- (id)shortDescription;
- (void)_poll;
- (void)timerDidFire:(id)a0;
- (void)_enterState:(long long)a0;
- (void)stopWithCompletionHandler:(id /* block */)a0;
- (void)kick;
- (void)_runStateMachine;
- (id)initWithIdentifier:(id)a0 profile:(id)a1 operationQueue:(id)a2;
- (void)_initializeMachine;
- (void)_waitForActivity;

@end
