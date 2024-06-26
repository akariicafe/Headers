@class NSString, NSArray, NSDictionary, MAGraphReference;
@protocol MAGraphProxy, MANodeImplementationProtocol;

@interface MANode : NSObject <MAElement, NSCopying, KGNode>

@property (retain, nonatomic) MAGraphReference *graphReference;
@property (nonatomic) unsigned long long identifier;
@property (retain, nonatomic) id<MANodeImplementationProtocol> implementation;
@property (readonly, nonatomic) id<MAGraphProxy> graph;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) unsigned short domain;
@property (readonly, nonatomic) float weight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *labels;
@property (readonly, copy, nonatomic) NSDictionary *properties;

- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (id)shortDescription;
- (unsigned long long)memoryFootprint:(id)a0;
- (BOOL)hasEdgeTowardNode:(id)a0;
- (BOOL)hasProperties:(id)a0;
- (BOOL)hasEdgeFromNode:(id)a0;
- (unsigned long long)propertiesCount;
- (BOOL)isUnique;
- (BOOL)hasProperties;
- (id)propertyDictionary;
- (void)enumerateNeighborNodesUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)allEdges;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (void)enumerateEdgesOfType:(unsigned long long)a0 withNode:(id)a1 usingBlock:(id /* block */)a2;
- (id)propertyForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)enumerateNeighborNodesThroughEdgesOfType:(unsigned long long)a0 matchingFilter:(id)a1 usingBlock:(id /* block */)a2;
- (BOOL)isEqualToNode:(id)a0;
- (id)propertyKeys;
- (unsigned long long)edgesCount;
- (void)enumerateNeighborNodesThroughEdgesWithLabel:(id)a0 domain:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (void)enumerateNeighborEdgesAndNodesThroughEdgesWithLabel:(id)a0 domain:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (BOOL)hasEdgeWithLabel:(id)a0 domain:(unsigned short)a1;
- (BOOL)isSameNodeAsNode:(id)a0;
- (void)enumerateEdgesUsingBlock:(id /* block */)a0;
- (void)enumerateOutEdgesUsingBlock:(id /* block */)a0;
- (void)enumerateNeighborEdgesAndNodesThroughOutEdgesUsingBlock:(id /* block */)a0;
- (id)edgesForLabel:(id)a0 domain:(unsigned short)a1;
- (id)anyEdgeTowardNode:(id)a0;
- (id)anyEdgeFromNode:(id)a0;
- (BOOL)isIdentifiedByProperties:(id)a0;
- (id)changingPropertiesWithProperties:(id)a0;
- (id)associatedNodesForRemoval;
- (unsigned long long)countOfEdgesWithLabel:(id)a0 domain:(unsigned short)a1;
- (void)enumerateEdgesWithLabel:(id)a0 domain:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (unsigned long long)outEdgesCount;
- (void)enumerateNeighborNodesThroughOutEdgesUsingBlock:(id /* block */)a0;
- (void)enumerateNeighborNodesThroughInEdgesUsingBlock:(id /* block */)a0;
- (unsigned long long)inEdgesCount;
- (id)edgesTowardNode:(id)a0;
- (id)edgesFromNode:(id)a0;
- (id)anyEdgeWithLabel:(id)a0 domain:(unsigned short)a1;
- (id)siblingNodesThroughEdgesWithLabel:(id)a0 domain:(unsigned short)a1;
- (void)enumerateSiblingNodesThroughEdgesWithLabel:(id)a0 domain:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (void)enumerateNeighborEdgesAndNodesThroughEdgesWithDomains:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateSiblingNodesThroughEdgesWithDomains:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateInEdgesUsingBlock:(id /* block */)a0;
- (id)anyNeighborNodeThroughEdgesWithLabel:(id)a0 domain:(unsigned short)a1;
- (id)neighborNodesThroughEdgesWithLabel:(id)a0 domain:(unsigned short)a1;
- (id)resolvedNode;
- (id)propertyForKey:(id)a0 kindOfClass:(Class)a1;
- (id)visualString;
- (id)neighborNodesWithLabel:(id)a0 domain:(unsigned short)a1;
- (BOOL)matchesNode:(id)a0 includingProperties:(BOOL)a1;
- (BOOL)hasEdgeWithNode:(id)a0;
- (id)visualStringWithName:(id)a0 andPropertyKeys:(id)a1;
- (id)edgesWithNode:(id)a0;
- (id)shortestPathToNode:(id)a0 directed:(BOOL)a1;
- (id)neighborNodes;
- (id)neighborNodesThroughOutEdges;
- (id)neighborNodesThroughInEdges;
- (void)enumerateEdgesOfType:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3;
- (void)resolveIdentifier:(unsigned long long)a0;
- (BOOL)hasEqualPropertiesToNode:(id)a0;
- (BOOL)isOrphan;
- (id)edgesOfType:(unsigned long long)a0 withNode:(id)a1;
- (id)anyEdgeOfType:(unsigned long long)a0 withNode:(id)a1;
- (id)anyEdgeWithNode:(id)a0;
- (void)enumerateEdgesOfType:(unsigned long long)a0 withLabel:(id)a1 domain:(unsigned short)a2 usingBlock:(id /* block */)a3;
- (id)edgesOfType:(unsigned long long)a0 withLabel:(id)a1 domain:(unsigned short)a2;
- (id)anyEdgeOfType:(unsigned long long)a0 withLabel:(id)a1 domain:(unsigned short)a2;
- (void)enumerateEdgesWithDomains:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateNeighborNodesWithLabel:(id)a0 domain:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (void)enumerateNeighborEdgesAndNodesUsingBlock:(id /* block */)a0;
- (void)enumerateNeighborEdgesAndNodesThroughEdgesOfType:(unsigned long long)a0 withLabel:(id)a1 inDomain:(unsigned short)a2 usingBlock:(id /* block */)a3;
- (void)enumerateNeighborNodesThroughEdgesOfType:(unsigned long long)a0 withLabel:(id)a1 inDomain:(unsigned short)a2 usingBlock:(id /* block */)a3;
- (void)enumerateEdgesInDomains:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateNeighborEdgesAndNodesThroughInEdgesUsingBlock:(id /* block */)a0;
- (BOOL)hasEdge:(id)a0 isIn:(BOOL *)a1;
- (id)neighborNodesThroughEdgesOfType:(unsigned long long)a0 withLabel:(id)a1 domain:(unsigned short)a2;
- (id)anyNeighborNodeThroughEdgesOfType:(unsigned long long)a0 withLabel:(id)a1 domain:(unsigned short)a2;
- (void)enumerateNeighborNodesThroughEdgesWithDomains:(id)a0 usingBlock:(id /* block */)a1;
- (void)setShouldStoreResolvedNode;
- (id)visualStringWithName:(id)a0;
- (BOOL)conformsToNodeSchema:(id)a0;

@end
