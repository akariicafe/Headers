@class HMFTimer, NSString, NSSet, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface HMDHomeAssistantOperation : HMFObject <HMFTimerDelegate> {
    BOOL _completionHandlerCalled;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFTimer *_accessoryConnectivityWaitTimer;
    NSSet *_accessoriesToOperateOn;
    NSMutableSet *_reachableAccessoriesToOperateOn;
    id /* block */ _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homeAssistantOperationWithActionSet:(id)a0 queue:(id)a1;
+ (id)homeAssistantOperationWithReadRequests:(id)a0 queue:(id)a1;
+ (id)homeAssistantOperationWithWriteRequests:(id)a0 queue:(id)a1;

- (void)timerDidFire:(id)a0;
- (void)dealloc;
- (void)startWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)handleAccessoryIsReachable:(id)a0;

@end
