@class NSString, NSArray, NSData;

@interface PKPeerPaymentStatusResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSString *paymentIdentifier;
@property (readonly, copy, nonatomic) NSString *transactionIdentifier;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, copy, nonatomic) NSData *amountHash;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (BOOL)amountHashIsValidForAmount:(id)a0 andCurrency:(id)a1;

@end
