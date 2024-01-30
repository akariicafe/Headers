@class NSArray, CKTransactionalComponentDataSourceConfiguration;

@interface CKTransactionalComponentDataSourceState : NSObject

@property (readonly, copy, nonatomic) NSArray *sections;
@property (readonly, nonatomic) CKTransactionalComponentDataSourceConfiguration *configuration;

- (long long)numberOfSections;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)objectAtIndexPath:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)numberOfObjectsInSection:(long long)a0;
- (id)initWithConfiguration:(id)a0 sections:(id)a1;
- (void)enumerateObjectsInSectionAtIndex:(long long)a0 usingBlock:(id /* block */)a1;

@end
