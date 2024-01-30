@protocol CRKConcreteIDSMessageDidReceiveSubscriptionDelegate;

@interface CRKConcreteIDSMessageDidReceiveSubscription : NSObject <CRKResumable, CRKCancelable>

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic, getter=isResumed) BOOL resumed;
@property (weak, nonatomic) id<CRKConcreteIDSMessageDidReceiveSubscriptionDelegate> delegate;

- (void)cancel;
- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)resume;
- (void)receiveMessage:(id)a0 senderAppleID:(id)a1 senderAddress:(id)a2;

@end
