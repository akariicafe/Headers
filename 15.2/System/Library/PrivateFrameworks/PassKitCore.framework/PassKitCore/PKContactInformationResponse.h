@class PKContactInformation;

@interface PKContactInformationResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) PKContactInformation *contactInformation;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
