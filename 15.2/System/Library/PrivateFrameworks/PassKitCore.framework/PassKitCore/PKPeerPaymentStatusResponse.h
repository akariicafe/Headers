@class NSString, NSArray, NSData;

@interface PKPeerPaymentStatusResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSString *paymentIdentifier;
@property (readonly, copy, nonatomic) NSString *transactionIdentifier;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, copy, nonatomic) NSData *amountHash;

- (id)initWithData:(id)a0;
- (BOOL)amountHashIsValidForAmount:(id)a0 andCurrency:(id)a1;
- (void).cxx_destruct;

@end
