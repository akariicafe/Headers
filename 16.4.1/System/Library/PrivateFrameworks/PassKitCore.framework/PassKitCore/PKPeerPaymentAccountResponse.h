@class PKPeerPaymentAccount;

@interface PKPeerPaymentAccountResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) PKPeerPaymentAccount *account;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
