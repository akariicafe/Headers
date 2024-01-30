@class NSArray;

@interface PGCurationArrayTrait : PGCurationTrait

@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSArray *negativeItems;

- (id)debugDescription;
- (BOOL)isActive;
- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0 negativeItems:(id)a1;

@end
