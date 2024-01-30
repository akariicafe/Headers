@class NSArray, NSString, NSMutableArray;

@interface HDDatabaseTransactionContextStatistics : NSObject {
    NSMutableArray *_transactions;
}

@property (readonly, copy, nonatomic) NSArray *transactions;
@property (readonly, nonatomic) double totalDuration;
@property (readonly, copy, nonatomic) NSString *shortDescription;

- (void)_addTransactionStatistics:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
