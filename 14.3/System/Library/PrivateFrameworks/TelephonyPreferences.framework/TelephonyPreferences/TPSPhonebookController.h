@class TPSPhonebookTelephonyController, NSString, CTXPCServiceSubscriptionContext;
@protocol TPSPhonebookControllerDelegate;

@interface TPSPhonebookController : NSObject <TPSPhonebookTelephonyControllerDelegate>

@property (readonly, nonatomic) TPSPhonebookTelephonyController *telephonyClient;
@property (readonly, copy, nonatomic) NSString *subscriptionISOCountryCode;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (weak, nonatomic) id<TPSPhonebookControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isSubscriptionEditable) BOOL subscriptionEditable;
@property (readonly, copy, nonatomic) NSString *localizedSubscriptionTelephoneNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSubscriptionContext:(id)a0;
- (void)phonebookController:(id)a0 didChangePhoneNumberInfo:(id)a1;
- (void)updateSubscriptionTelephoneNumber:(id)a0 completion:(id /* block */)a1;

@end
