@class PKPaymentPass, NSString, PKAccountUser, NSArray;

@interface PKDemoTransactionGeneratorInsertionConfiguration : NSObject

@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic) long long accountType;
@property (copy, nonatomic) NSString *transactionSourceIdentifier;
@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) PKAccountUser *accountUser;
@property (nonatomic) unsigned long long codingType;
@property (copy, nonatomic) NSArray *transactions;
@property (copy, nonatomic) NSArray *accountEvents;

- (void).cxx_destruct;

@end
