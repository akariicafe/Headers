@class NSDecimalNumber, NSString, NSDictionary;

@interface PKPaymentPrepareTransactionDetailsResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSDecimalNumber *amount;
@property (readonly, nonatomic) NSString *secureElementIdentifier;
@property (readonly, nonatomic) NSDictionary *instructionsDictionary;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
