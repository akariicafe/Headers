@class NSString;

@interface PKApplyWebServiceFeatureTermsDataRequest : PKApplyWebServiceRequest

@property (nonatomic) unsigned long long featureIdentifier;
@property (copy, nonatomic) NSString *termsIdentifier;
@property (copy, nonatomic) NSString *termsDataFormat;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
