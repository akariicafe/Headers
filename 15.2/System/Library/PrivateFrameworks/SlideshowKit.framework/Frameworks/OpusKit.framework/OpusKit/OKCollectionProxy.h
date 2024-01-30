@protocol OKCollectionProxyDataSource;

@interface OKCollectionProxy : NSDictionary

@property (nonatomic) id<OKCollectionProxyDataSource> dataSource;
@property (nonatomic) unsigned long long tag;

- (id)initWithObjects:(id)a0 forKeys:(id)a1;
- (id)objectAtIndexPath:(id)a0;
- (id)keyEnumerator;
- (id)init;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (void)dealloc;

@end
