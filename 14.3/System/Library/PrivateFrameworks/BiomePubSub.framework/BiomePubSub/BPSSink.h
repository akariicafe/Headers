@class NSString, BPSSubscriptionStatus;

@interface BPSSink : NSObject <BPSSubscriber, BPSCancellable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) id /* block */ receivedCompletion;
@property (copy, nonatomic) id /* block */ receivedValue;
@property (nonatomic) long long demand;
@property (retain, nonatomic) BPSSubscriptionStatus *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)init;
- (void)receiveSubscription:(id)a0;
- (void).cxx_destruct;
- (void)receiveCompletion:(id)a0;
- (long long)receiveInput:(id)a0;
- (id)initWithReceiveCompletion:(id /* block */)a0 receiveInput:(id /* block */)a1;

@end
