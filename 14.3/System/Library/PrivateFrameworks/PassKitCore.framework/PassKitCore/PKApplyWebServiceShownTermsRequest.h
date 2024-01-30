@class NSString, NSURL;

@interface PKApplyWebServiceShownTermsRequest : PKApplyWebServiceRequest

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *termsIdentifier;
@property (copy, nonatomic) NSString *termsType;
@property (retain, nonatomic) NSURL *baseURL;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
