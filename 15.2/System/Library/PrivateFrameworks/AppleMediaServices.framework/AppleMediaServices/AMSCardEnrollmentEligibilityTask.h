@class NSString;
@protocol AMSBagProtocol;

@interface AMSCardEnrollmentEligibilityTask : AMSTask

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, copy, nonatomic) NSString *countryCode;

- (id)initWithBag:(id)a0;
- (id)initWithCountryCode:(id)a0;
- (id)initWithBag:(id)a0 countryCode:(id)a1;
- (id)performCanWriteBillingInfoQueryWithPassTypeIdentifier:(id)a0 serialNumber:(id)a1;
- (unsigned long long)_cardTypeForPassTypeIdentifier:(id)a0 serialNumber:(id)a1;
- (id)_performSilentEnrollmentCheckWithRequest:(id)a0;
- (void)canWriteBillingInfoWithPassTypeIdentifier:(id)a0 serialNumber:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
