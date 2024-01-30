@class NSDecimalNumber, NSString, NSDate, FHMerchantDetails;

@interface FHTransactionDetails : NSObject

@property (copy, nonatomic) NSString *transactionIdentifier;
@property (copy, nonatomic) NSDate *transactionDate;
@property (copy, nonatomic) NSDecimalNumber *transactionAmount;
@property (nonatomic) unsigned long long *suggestionCategory;
@property (nonatomic) FHMerchantDetails *merchantCategory;

- (void).cxx_destruct;

@end
