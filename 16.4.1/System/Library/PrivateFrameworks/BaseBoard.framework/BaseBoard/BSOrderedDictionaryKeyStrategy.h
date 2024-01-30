@interface BSOrderedDictionaryKeyStrategy : NSObject

@property (nonatomic) long long limitCount;
@property (copy, nonatomic) id /* block */ keyComparator;

+ (id)sortUsingComparator:(id /* block */)a0;
+ (id)new;
+ (id)sortByInsertionOrder;
+ (id)sortByInsertionOrderWithEntryLimit:(long long)a0;

- (id)_init;
- (id)init;
- (void).cxx_destruct;

@end
