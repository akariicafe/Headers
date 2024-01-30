@class NSString, NSSet, NSDictionary, MAGraphReference, MANode;
@protocol MAGraphProxy;

@interface MAEdge : NSObject <MAElement, NSCopying, KGEdge>

@property (retain, nonatomic) MAGraphReference *graphReference;
@property (nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) MANode *sourceNode;
@property (readonly, nonatomic) MANode *targetNode;
@property (readonly, nonatomic) id<MAGraphProxy> graph;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) unsigned short domain;
@property (readonly, nonatomic) float weight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *labels;
@property (readonly, copy, nonatomic) NSDictionary *properties;

- (BOOL)hasProperties:(id)a0;
- (void)resolveIdentifier:(unsigned long long)a0;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (id)propertyForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (BOOL)hasProperties;
- (id)shortDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)commonNode:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isLoop;
- (id)oppositeNode:(id)a0;
- (BOOL)isUnique;
- (id)propertyDictionary;
- (unsigned long long)memoryFootprint:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)propertiesCount;
- (id)propertyKeys;
- (BOOL)conformsToEdgeSchema:(id)a0;
- (BOOL)hasEqualPropertiesToEdge:(id)a0;
- (id)initWithIdentifier:(unsigned long long)a0 labels:(id)a1 properties:(id)a2 sourceNode:(id)a3 targetNode:(id)a4;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)initWithSourceNode:(id)a0 targetNode:(id)a1;
- (BOOL)isEqualToEdge:(id)a0;
- (BOOL)isIdentifiedByProperties:(id)a0;
- (BOOL)isSameEdgeAsEdge:(id)a0;
- (id)oppositeNodeFromNode:(id)a0;
- (id)propertyForKey:(id)a0 kindOfClass:(Class)a1;
- (id)visualString;
- (id)visualStringWithName:(id)a0;
- (id)visualStringWithName:(id)a0 andPropertyKeys:(id)a1;

@end
