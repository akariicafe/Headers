@class PGGraphMomentNodeCollection, NSSet, PGGraphFeatureNodeCollection, NSArray;

@interface PGGraphMemoryNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) NSSet *uniqueMemoryIdentifiers;
@property (readonly, nonatomic) NSArray *memoryCategorySubcategories;

+ (Class)nodeClass;
+ (id)memoryNodeAsCollectionWithUniqueIdentifier:(id)a0 inGraph:(id)a1;
+ (id)memoryNodesOfCategories:(id)a0 inGraph:(id)a1;
+ (id)memoryNodesOfCategory:(unsigned long long)a0 inGraph:(id)a1;
+ (id)memoryNodesWithUniqueIdentifierArray:(id)a0 inGraph:(id)a1;
+ (id)memoryNodesWithUniqueIdentifiers:(id)a0 inGraph:(id)a1;

- (void)enumerateMemoryCategorySubcategoriesUsingBlock:(id /* block */)a0;
- (id)subsetWithMemoryCategories:(id)a0;
- (id)subsetWithMemoryCategory:(unsigned long long)a0;

@end
