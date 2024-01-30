@class PKPeerPaymentAssociatedAccountInformation;

@interface PKPeerPaymentAssociatedAccountsResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) PKPeerPaymentAssociatedAccountInformation *associatedAccountInformation;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
