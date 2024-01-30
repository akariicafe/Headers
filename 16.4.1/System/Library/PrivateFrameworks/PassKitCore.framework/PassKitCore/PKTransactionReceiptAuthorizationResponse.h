@class NSString, NSData;

@interface PKTransactionReceiptAuthorizationResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSString *authorizationToken;
@property (readonly, nonatomic) NSData *signature;
@property (copy, nonatomic) NSString *conversationIdentifier;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
