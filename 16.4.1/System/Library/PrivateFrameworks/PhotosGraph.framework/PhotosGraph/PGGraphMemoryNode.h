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
@property (readonly, nonatomic) BOOL generatedWithFallbackRequirements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;
+ (id)fullMemoryTypeStringWithMemoryCategorySubcategory:(unsigned long long)a0 featureNodes:(id)a1;
+ (id)allMemoryTypeStrings;
+ (id)filterWithMemoryCategories:(id)a0;
+ (id)filterWithMemoryCategory:(unsigned long long)a0;
+ (id)filterWithUniqueMemoryIdentifier:(id)a0;
+ (id)filterWithUniqueMemoryIdentifierArray:(id)a0;
+ (id)filterWithUniqueMemoryIdentifiers:(id)a0;
+ (id)fullyQualifiedMemoryTypeForMemoryType:(id)a0 withPrefix:(id)a1;
+ (id)uniqueMemoryIdentifierWithMemoryLabel:(id)a0 featureNodes:(id)a1;

- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)label;
- (id)propertyDictionary;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 memoryCategorySubcategory:(unsigned long long)a1 uniqueMemoryIdentifier:(id)a2;
- (id)initWithLabel:(id)a0 memoryCategorySubcategory:(unsigned long long)a1 uniqueMemoryIdentifier:(id)a2 generatedWithFallbackRequirements:(BOOL)a3;
- (id)memoryFeatureNodesInGraph:(id)a0;

@end
