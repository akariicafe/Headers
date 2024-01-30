@class NSString;

@interface PKPeerPaymentRemoveAssociatedAccountRequest : PKPeerPaymentWebServiceRequest {
    NSString *_associatedAccountIdentifier;
}

- (id)initWithAssociatedAccountIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
