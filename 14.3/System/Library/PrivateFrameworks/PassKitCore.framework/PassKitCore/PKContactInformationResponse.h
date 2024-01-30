@class PKContactInformation;

@interface PKContactInformationResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) PKContactInformation *contactInformation;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
