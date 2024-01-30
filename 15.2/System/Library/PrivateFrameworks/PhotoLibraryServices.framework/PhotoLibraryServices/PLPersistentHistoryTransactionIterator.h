@class NSManagedObjectContext, NSArray, NSPersistentHistoryToken;

@interface PLPersistentHistoryTransactionIterator : NSObject {
    NSArray *_transactions;
    unsigned long long _transactionIndex;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSManagedObjectContext *context;
@property (readonly, copy, nonatomic) NSPersistentHistoryToken *lastIteratedToken;

+ (id)iteratorSinceMarker:(id)a0 withFetchRequest:(id)a1 managedObjectObjectContext:(id)a2 error:(id *)a3;
+ (id)iteratorSinceToken:(id)a0 withManagedObjectObjectContext:(id)a1 error:(id *)a2;

- (id)initWithTransactions:(id)a0 managedObjectObjectContext:(id)a1;
- (BOOL)_enumerateOneTransactionWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)enumerateRemainingTransactionsWithBlock:(id /* block */)a0;
- (BOOL)_hasMoreTransactions;
- (id)_safeTransactionAtIndex:(unsigned long long)a0;

@end
