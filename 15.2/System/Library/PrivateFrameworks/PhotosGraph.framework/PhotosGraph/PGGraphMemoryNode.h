@class MARelation, PGGraphFeatureNodeCollection, NSString, PGGraphMomentNodeCollection, PGGraphMemoryNodeCollection;

@interface PGGraphMemoryNode : PGGraphOptimizedNode <PGMemoryNodeProtocol> {
    NSString *_label;
}

@property (class, readonly) MARelation *featureOfMemory;
@property (class, readonly) MARelation *momentOfMemory;

@property (readonly, nonatomic) PGGraphMemoryNodeCollection *collection;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property (readonly, nonatomic) NSString *uniqueMemoryIdentifier;
@property (readonly, nonatomic) unsigned long long memoryCategory;
@property (readonly, nonatomic) unsigned long long memoryCategorySubcategory;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *memoryMomentNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;
+ (id)fullyQualifiedMemoryTypeForMemoryType:(id)a0 withPrefix:(id)a1;
+ (id)fullMemoryTypeStringWithMemoryCategorySubcategory:(unsigned long long)a0 featureNodes:(id)a1;
+ (id)allMemoryTypeStrings;
+ (id)filterWithMemoryCategories:(id)a0;
+ (id)filterWithMemoryCategory:(unsigned long long)a0;
+ (id)filterWithUniqueMemoryIdentifierArray:(id)a0;
+ (id)filterWithUniqueMemoryIdentifiers:(id)a0;
+ (id)filterWithUniqueMemoryIdentifier:(id)a0;
+ (id)uniqueMemoryIdentifierWithMemoryLabel:(id)a0 featureNodes:(id)a1;

- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)memoryFeatureNodesInGraph:(id)a0;
- (id)initWithLabel:(id)a0 memoryCategorySubcategory:(unsigned long long)a1 uniqueMemoryIdentifier:(id)a2;

@end
