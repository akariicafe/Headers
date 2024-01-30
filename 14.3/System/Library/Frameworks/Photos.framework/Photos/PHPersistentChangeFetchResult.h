@class NSArray, NSManagedObjectContext, NSPersistentHistoryToken;

@interface PHPersistentChangeFetchResult : NSObject {
    NSPersistentHistoryToken *_initialToken;
    NSArray *_transactions;
    NSManagedObjectContext *_context;
    unsigned long long _maximumChangeThreshold;
}

@property (readonly, nonatomic) unsigned long long changeCount;

+ (id)fetchResultWithToken:(id)a0 maximumChangeThreshold:(unsigned long long)a1 managedObjectObjectContext:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)initWithInitialToken:(id)a0 transactions:(id)a1 maximumChangeThreshold:(unsigned long long)a2 managedObjectObjectContext:(id)a3;
- (void)enumerateChangesWithBlock:(id /* block */)a0;

@end
