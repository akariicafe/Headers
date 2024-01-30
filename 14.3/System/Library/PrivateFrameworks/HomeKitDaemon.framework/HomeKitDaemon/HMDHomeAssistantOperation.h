@class HMFTimer, NSSet, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface HMDHomeAssistantOperation : HMFObject <HMFTimerDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) HMFTimer *accessoryConnectivityWaitTimer;
@property (readonly, nonatomic) NSSet *accessoriesToOperateOn;
@property (readonly, nonatomic) NSMutableSet *reachableAccessoriesToOperateOn;
@property (nonatomic) BOOL completionHandlerCalled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homeAssistantOperationWithActionSet:(id)a0 queue:(id)a1;
+ (id)homeAssistantOperationWithWriteRequests:(id)a0 queue:(id)a1;
+ (id)homeAssistantOperationWithReadRequests:(id)a0 queue:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)timerDidFire:(id)a0;
- (void)startWithCompletion:(id /* block */)a0;
- (void)_callCompletion;
- (void)handleAccessoryIsReachable:(id)a0;
- (id)initWithAccessories:(id)a0 queue:(id)a1;
- (BOOL)_testForReachability;

@end
