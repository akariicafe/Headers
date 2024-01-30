@class NSArray, NSManagedObjectContext;

@interface PHPersistentChangeFetchResult : NSObject {
    NSArray *_transactions;
    NSManagedObjectContext *_context;
    unsigned long long _maximumChangeThreshold;
}

@property (readonly, nonatomic) unsigned long long changeCount;

+ (id)fetchResultWithToken:(id)a0 maximumChangeThreshold:(unsigned long long)a1 managedObjectObjectContext:(id)a2 error:(id *)a3;

- (id)initWithTransactions:(id)a0 maximumChangeThreshold:(unsigned long long)a1 managedObjectObjectContext:(id)a2;
- (void)enumerateChangesWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
