@class NSString;

@interface AMSPaymentSetupFeatureVerification : NSObject

@property (copy, nonatomic) NSString *identifier;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isPaymentSetupFeatureSupportedWithError:(id *)a0;
- (id)performPaymentSetupFeatureLookup;

@end
