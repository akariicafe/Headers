@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NPKWorkQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *remainingWork;
@property (nonatomic) BOOL performingWork;
@property (nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) BOOL takeOutTransactions;
@property (retain, nonatomic) NSString *workQueueName;

- (id)initWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithQueue:(id)a0 takeOutTransactions:(BOOL)a1;
- (void)_onQueue_doWorkIfNecessary;
- (void)performWork:(id /* block */)a0;

@end
