@class PKPeerPaymentAssociatedAccountInformation;

@interface PKPeerPaymentAddAssociatedAccountResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) PKPeerPaymentAssociatedAccountInformation *associatedAccountInformation;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
