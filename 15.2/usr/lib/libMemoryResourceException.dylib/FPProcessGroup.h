@class NSDictionary, NSMutableArray;

@interface FPProcessGroup : FPProcessGroupMinimal <NSCopying>

@property (retain, nonatomic) NSDictionary *categories;
@property (nonatomic) unsigned int categoriesRefcount;
@property (retain, nonatomic) NSMutableArray *objects;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addProcess:(id)a0;

@end
