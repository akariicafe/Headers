@class HMFTimer, NSSet, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDXPCRequestTracker : HMFObject <HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
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
- (void)timerDidFire:(id)a0;
- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)__sendReponseForRequest:(id)a0 response:(id)a1 error:(id)a2;
- (void)addRequestWithIdentifier:(id)a0 messageName:(id)a1 qualityOfService:(long long)a2 responseHandler:(id /* block */)a3;
- (BOOL)containsMessageWithIdentifier:(id)a0;
- (void)removeRequestWithIdentifier:(id)a0 response:(id)a1 error:(id)a2;

@end
