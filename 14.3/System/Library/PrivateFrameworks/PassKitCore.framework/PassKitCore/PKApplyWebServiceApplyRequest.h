@class NSString, NSArray, NSURL, PKPaymentInstallmentConfiguration;

@interface PKApplyWebServiceApplyRequest : PKApplyWebServiceRequest

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic) unsigned long long featureIdentifier;
@property (copy, nonatomic) NSArray *certificates;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *coreIDVNextStepToken;
@property (copy, nonatomic) NSString *previousContextIdentifier;
@property (copy, nonatomic) NSString *actionIdentifier;
@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
