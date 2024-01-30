@class NSArray, CKTransactionalComponentDataSourceConfiguration;

@interface CKTransactionalComponentDataSourceState : NSObject

@property (readonly, copy, nonatomic) NSArray *sections;
@property (readonly, nonatomic) CKTransactionalComponentDataSourceConfiguration *configuration;

- (long long)numberOfSections;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)description;
- (id)objectAtIndexPath:(id)a0;
- (BOOL)isEqual:(id)a0;
- (long long)numberOfObjectsInSection:(long long)a0;
- (id)initWithConfiguration:(id)a0 sections:(id)a1;
- (void)enumerateObjectsInSectionAtIndex:(long long)a0 usingBlock:(id /* block */)a1;

@end
