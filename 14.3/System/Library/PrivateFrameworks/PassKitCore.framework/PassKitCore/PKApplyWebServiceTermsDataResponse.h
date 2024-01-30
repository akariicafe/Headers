@class NSData, NSString;

@interface PKApplyWebServiceTermsDataResponse : PKApplyWebServiceResponse

@property (retain, nonatomic) NSData *termsData;
@property (copy, nonatomic) NSString *termsDataFileName;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
