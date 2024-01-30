@class NSString;

@interface PKDemoTransactionGeneratorConfiguration : NSObject

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *transactionSourceIdentifier;
@property (nonatomic) long long accountType;
@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSString *personName;
@property (nonatomic) long long transactionCount;

- (void).cxx_destruct;

@end
