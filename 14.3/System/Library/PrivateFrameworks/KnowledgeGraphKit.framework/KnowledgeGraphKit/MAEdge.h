@class MABaseGraph, NSArray, NSDictionary, NSString, MAGraphReference, MANode;
@protocol KGNode;

@interface MAEdge : NSObject <KGEdge, MAElement, NSCopying> {
    MANode *_strongSourceNode;
    MANode *_strongTargetNode;
    MANode *_weakSourceNode;
    MANode *_weakTargetNode;
}

@property (readonly, nonatomic) id<KGNode> targetNode;
@property (readonly, nonatomic) id<KGNode> sourceNode;
@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) float weight;
@property (readonly, copy, nonatomic) NSArray *labels;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MAGraphReference *graphReference;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) float weight;
@property (readonly, weak, nonatomic) MANode *sourceNode;
@property (readonly, weak, nonatomic) MANode *targetNode;
@property (readonly, weak, nonatomic) MABaseGraph *graph;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) unsigned short domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setProperties:(id)a0;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (void)removeAllProperties;
- (BOOL)hasProperties;
- (void).cxx_destruct;
- (BOOL)hasProperties:(id)a0;
- (id)propertyKeys;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)propertyDictionary;
- (unsigned long long)memoryFootprint:(id)a0;
- (void)setLocalProperties:(id)a0;
- (id)shortDescription;
- (void)removePropertyForKey:(id)a0;
- (unsigned long long)propertiesCount;
- (BOOL)isEqual:(id)a0;
- (id)propertyForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)oppositeNode:(id)a0;
- (id)commonNode:(id)a0;
- (void)setPropertyValue:(id)a0 forKey:(id)a1;
- (BOOL)isUnique;
- (BOOL)isIdentifiedByProperties:(id)a0;
- (BOOL)isLoop;
- (void)updatePersistedWeight:(float)a0;
- (BOOL)isSameEdgeAsEdge:(id)a0;
- (id)propertyForKey:(id)a0 kindOfClass:(Class)a1;
- (id)visualString;
- (id)visualStringWithName:(id)a0 andPropertyKeys:(id)a1;
- (id)visualStringWithName:(id)a0;
- (id)initWithIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3 sourceNode:(id)a4 targetNode:(id)a5;
- (id)oppositeNodeFromNode:(id)a0;
- (BOOL)hasEqualPropertiesToEdge:(id)a0;
- (BOOL)isEqualToEdge:(id)a0;
- (BOOL)conformsToEdgeSchema:(id)a0;

@end
