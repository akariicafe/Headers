@class NSString;

@interface AMSUIWebVerifyPaymentSetupFeatureAction : AMSUIWebAction

@property (retain, nonatomic) NSString *referrerIdentifier;

- (void).cxx_destruct;
- (id)_checkCombinedAccount;
- (id)_checkUpsellCardEnrollment;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
