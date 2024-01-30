@class NSManagedObjectContext, NSArray, NSPersistentHistoryToken;

@interface PLPersistentHistoryTransactionIterator : NSObject {
    NSArray *_transactions;
    unsigned long long _transactionIndex;
}

@property (readonly, copy, nonatomic) NSPersistentHistoryToken *initialToken;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSManagedObjectContext *context;
@property (readonly, copy, nonatomic) NSPersistentHistoryToken *lastIteratedToken;

+ (id)iteratorSinceToken:(id)a0 withBatchSize:(unsigned long long)a1 managedObjectObjectContext:(id)a2 error:(id *)a3;
+ (id)iteratorSinceToken:(id)a0 withManagedObjectObjectContext:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (BOOL)_hasMoreTransactions;
- (id)_safeTransactionAtIndex:(unsigned long long)a0;
- (void)enumerateRemainingTransactionsWithBlock:(id /* block */)a0;
- (id)initWithInitialToken:(id)a0 transactions:(id)a1 managedObjectObjectContext:(id)a2;
- (BOOL)_enumerateOneTransactionWithBlock:(id /* block */)a0;

@end
