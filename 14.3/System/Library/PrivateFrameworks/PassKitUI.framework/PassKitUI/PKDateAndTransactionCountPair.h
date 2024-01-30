@class NSDate;

@interface PKDateAndTransactionCountPair : NSObject

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long transactionCount;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
