@class NSMutableArray;
@protocol DATransactionMonitorDelegate;

@interface DATransactionMonitor : NSObject

@property (nonatomic) int transactionCount;
@property (retain, nonatomic) NSMutableArray *transactions;
@property (weak, nonatomic) id<DATransactionMonitorDelegate> transactionMonitorDelegate;

+ (id)sharedTransactionMonitor;

- (void).cxx_destruct;
- (id)init;
- (void)incrementTransactionCountForTransaction:(id)a0;
- (void)decrementTransactionCountForTransaction:(id)a0;

@end
