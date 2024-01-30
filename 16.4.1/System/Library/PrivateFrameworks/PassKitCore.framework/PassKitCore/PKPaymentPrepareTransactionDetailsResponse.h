@class NSDecimalNumber, NSString, NSDictionary;

@interface PKPaymentPrepareTransactionDetailsResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSDecimalNumber *amount;
@property (readonly, nonatomic) NSString *secureElementIdentifier;
@property (readonly, nonatomic) NSDictionary *instructionsDictionary;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
