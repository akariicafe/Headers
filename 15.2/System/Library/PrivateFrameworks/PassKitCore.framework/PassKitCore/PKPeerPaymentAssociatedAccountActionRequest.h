@class NSString;

@interface PKPeerPaymentAssociatedAccountActionRequest : PKPeerPaymentWebServiceRequest {
    NSString *_associatedAccountIdentifier;
}

@property (copy, nonatomic) NSString *featureIdentifier;
@property (copy, nonatomic) NSString *value;

- (id)initWithAssociatedAccountIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
