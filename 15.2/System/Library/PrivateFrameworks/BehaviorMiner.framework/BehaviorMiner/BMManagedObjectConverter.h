@interface BMManagedObjectConverter : NSObject

- (id)convertRuleMOs:(id)a0 basketCount:(unsigned long long)a1 error:(id *)a2;
- (id)insertRules:(id)a0 inManagedObjectContext:(id)a1;
- (id)insertItems:(id)a0 inManagedObjectContext:(id)a1;
- (id)convertItemMOs:(id)a0 error:(id *)a1;

@end
