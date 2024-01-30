@class NSString, NSURL;

@interface PKApplyWebServiceVerificationSubmissionRequest : PKApplyWebServiceRequest

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic) unsigned long long featureIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *verificationData;
@property (nonatomic) BOOL skippedVerification;
@property (nonatomic) unsigned long long verificationType;
@property (copy, nonatomic) NSString *odiAssessment;
@property (nonatomic) long long channel;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
