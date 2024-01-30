@class NSString, TPSCallingLineIdRestrictionRequestController, CTXPCServiceSubscriptionContext;
@protocol TPSCallingLineIdRestrictionControllerDelegate;

@interface TPSCallingLineIdRestrictionController : NSObject <TPSRequestControllerDelegate>

@property (readonly, nonatomic) TPSCallingLineIdRestrictionRequestController *requestController;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic) long long state;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (weak, nonatomic) id<TPSCallingLineIdRestrictionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSubscriptionContext:(id)a0;
- (void)requestController:(id)a0 didReceiveResponse:(id)a1;
- (void)requestStateChange:(long long)a0;
- (void)requestStateForSubscriptionContext:(id)a0;

@end
