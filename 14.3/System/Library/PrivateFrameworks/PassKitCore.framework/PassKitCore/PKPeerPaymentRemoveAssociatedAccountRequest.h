@class NSString;

@interface PKPeerPaymentRemoveAssociatedAccountRequest : PKPeerPaymentWebServiceRequest {
    NSString *_associatedAccountIdentifier;
}

- (void).cxx_destruct;
- (id)initWithAssociatedAccountIdentifier:(id)a0;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
