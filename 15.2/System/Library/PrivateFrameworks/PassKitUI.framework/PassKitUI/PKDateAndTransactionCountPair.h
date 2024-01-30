@class NSDate;

@interface PKDateAndTransactionCountPair : NSObject

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long transactionCount;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
