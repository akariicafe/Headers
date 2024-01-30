@class PKPeerPaymentAssociatedAccountInformation;

@interface PKPeerPaymentAssociatedAccountsResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) PKPeerPaymentAssociatedAccountInformation *associatedAccountInformation;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
