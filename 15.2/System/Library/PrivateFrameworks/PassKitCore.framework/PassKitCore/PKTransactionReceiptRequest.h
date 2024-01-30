@class NSURL, NSString, NSData;

@interface PKTransactionReceiptRequest : PKPaymentWebServiceRequest

@property (readonly, nonatomic) NSURL *receiptProviderURL;
@property (readonly, nonatomic) NSString *authorizationToken;
@property (readonly, nonatomic) NSData *signature;
@property (readonly, nonatomic) NSString *receiptIdentifier;
@property (copy, nonatomic) NSString *conversationIdentifier;

- (void).cxx_destruct;
- (id)_urlRequest;
- (id)initWithReceiptProviderURL:(id)a0 authorizationToken:(id)a1 signature:(id)a2 receiptIdentifier:(id)a3;

@end
