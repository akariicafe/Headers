@class NSString, NSData;

@interface PKTransactionReceiptAuthorizationResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSString *authorizationToken;
@property (readonly, nonatomic) NSData *signature;
@property (copy, nonatomic) NSString *conversationIdentifier;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
