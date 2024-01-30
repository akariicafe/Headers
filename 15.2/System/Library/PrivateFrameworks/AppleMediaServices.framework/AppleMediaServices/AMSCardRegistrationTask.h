@class NSString;

@interface AMSCardRegistrationTask : AMSTask

@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *merchantIdentifier;

- (id)_performCardRegistration;
- (id)initWithCountryCode:(id)a0 merchantIdentifier:(id)a1;
- (id)performCardRegistration;
- (void).cxx_destruct;

@end
