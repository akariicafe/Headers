@class NSDictionary, NSMutableArray;

@interface FPProcessGroup : FPProcessGroupMinimal <NSCopying>

@property (retain, nonatomic) NSDictionary *categories;
@property (nonatomic) unsigned int categoriesRefcount;
@property (retain, nonatomic) NSMutableArray *objects;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)addProcess:(id)a0;
- (void)addObject:(id)a0;
- (id)consumeCachedCategories;
- (void)attachCachedCategories:(id)a0 refcount:(unsigned int)a1;

@end
