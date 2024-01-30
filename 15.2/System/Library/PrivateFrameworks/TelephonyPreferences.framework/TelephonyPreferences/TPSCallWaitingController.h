@class TPSCallWaitingRequestController, NSString, CTXPCServiceSubscriptionContext;
@protocol TPSCallWaitingControllerDelegate;

@interface TPSCallWaitingController : NSObject <TPSRequestControllerDelegate>

@property (readonly, nonatomic) TPSCallWaitingRequestController *requestController;
@property (nonatomic) long long state;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (weak, nonatomic) id<TPSCallWaitingControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSubscriptionContext:(id)a0;
- (void)requestController:(id)a0 didReceiveResponse:(id)a1;
- (void)requestStateChange:(long long)a0;

@end
