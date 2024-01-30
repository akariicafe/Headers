@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ANXPCTransactionManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *activeTransactions;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedManager;

- (void)_removeTransaction:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_transaction:(id)a0 setActive:(BOOL)a1;
- (void)_transaction:(id)a0 setActiveForTimeInterval:(double)a1;
- (id)_createTransaction:(id)a0;
- (void)_resetTimer:(id)a0 expiration:(double)a1;
- (void)_createTransaction:(id)a0 expiration:(double)a1;
- (void)_startTimer:(id)a0 expiration:(double)a1;
- (void)_cancelTimer:(id)a0;
- (void)transaction:(id)a0 setActive:(BOOL)a1;
- (void)transaction:(id)a0 setActiveForTimeInterval:(double)a1;

@end
