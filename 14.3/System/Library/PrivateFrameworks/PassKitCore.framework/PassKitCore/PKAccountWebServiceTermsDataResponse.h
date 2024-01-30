@class NSData, NSString;

@interface PKAccountWebServiceTermsDataResponse : PKAccountWebServiceResponse

@property (retain, nonatomic) NSData *termsData;
@property (copy, nonatomic) NSString *termsDataFileName;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
