@class NSString, NSArray, NSURL, NSData;

@interface PKApplyWebServiceDocumentSubmissionRequest : PKApplyWebServiceRequest

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic) unsigned long long featureIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSData *frontImageData;
@property (copy, nonatomic) NSData *backImageData;
@property (copy, nonatomic) NSString *documentCountryCode;
@property (nonatomic) unsigned long long documentType;
@property (copy, nonatomic) NSArray *certificates;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
