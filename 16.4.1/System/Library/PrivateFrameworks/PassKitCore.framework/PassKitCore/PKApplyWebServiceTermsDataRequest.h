@class NSURL, NSString;

@interface PKApplyWebServiceTermsDataRequest : PKApplyWebServiceRequest

@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) unsigned long long featureIdentifier;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *termsIdentifier;
@property (copy, nonatomic) NSString *termsDataFormat;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
