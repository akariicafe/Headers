@class HMFTimer, NSSet, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDXPCRequestTracker : HMFObject <HMFTimerDelegate> {
    id<HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMFTimer *_timer;
}

@property (readonly, copy) NSSet *requestIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *pendingRequests;
@property (readonly, copy, nonatomic) NSString *clientName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setClientName:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)timerDidFire:(id)a0;
- (void)clear;
- (void).cxx_destruct;
- (id)init;
- (void)__sendReponseForRequest:(id)a0 response:(id)a1 error:(id)a2;
- (void)addRequestWithIdentifier:(id)a0 messageName:(id)a1 qualityOfService:(long long)a2 responseHandler:(id /* block */)a3;
- (void)removeRequestWithIdentifier:(id)a0 response:(id)a1 error:(id)a2;
- (BOOL)containsMessageWithIdentifier:(id)a0;

@end
