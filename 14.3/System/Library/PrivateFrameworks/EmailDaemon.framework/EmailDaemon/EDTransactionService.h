@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface EDTransactionService : NSObject

@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

- (void).cxx_destruct;
- (void)resetPendingTransactions;
- (id)initWithServiceName:(id)a0;
- (void)endTransaction:(id)a0;
- (BOOL)hasPendingTransactions;
- (id)startTransaction;

@end
