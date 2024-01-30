@class NSString;

@interface PKPeerPaymentStatementRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *accountIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
