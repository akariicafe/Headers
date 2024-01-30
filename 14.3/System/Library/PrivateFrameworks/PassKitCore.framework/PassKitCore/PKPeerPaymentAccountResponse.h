@class PKPeerPaymentAccount;

@interface PKPeerPaymentAccountResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) PKPeerPaymentAccount *account;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
