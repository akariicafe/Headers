@protocol OKCollectionProxyDataSource;

@interface OKCollectionProxy : NSDictionary

@property (nonatomic) id<OKCollectionProxyDataSource> dataSource;
@property (nonatomic) unsigned long long tag;

- (id)objectForKey:(id)a0;
- (id)objectAtIndexPath:(id)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (void)dealloc;
- (id)init;
- (id)initWithObjects:(id)a0 forKeys:(id)a1;

@end
