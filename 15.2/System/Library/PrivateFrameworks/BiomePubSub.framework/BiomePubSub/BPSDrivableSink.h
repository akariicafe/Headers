@class NSString, BPSSubscriptionStatus;

@interface BPSDrivableSink : NSObject <BPSSubscriber, BPSCancellable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) id /* block */ receivedCompletion;
@property (copy, nonatomic) id /* block */ shouldContinue;
@property (retain, nonatomic) BPSSubscriptionStatus *status;
@property (nonatomic) BOOL finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newBookmark;
- (id)initWithReceiveCompletion:(id /* block */)a0 shouldContinue:(id /* block */)a1;
- (void)receiveCompletion:(id)a0;
- (id)initWithReceiveBookmarkedCompletion:(id /* block */)a0 shouldContinue:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)receiveSubscription:(id)a0;
- (void)cancel;
- (long long)receiveInput:(id)a0;

@end
