@class NSString, NSURL;

@interface PKPeerPaymentTermsAcceptanceResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *termsIdentifier;
@property (readonly, copy, nonatomic) NSURL *termsURL;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (BOOL)hasTermsData;

@end
