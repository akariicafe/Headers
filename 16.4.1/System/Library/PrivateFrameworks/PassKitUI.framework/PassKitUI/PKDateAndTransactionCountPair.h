@class NSDate;

@interface PKDateAndTransactionCountPair : NSObject

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long transactionCount;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
