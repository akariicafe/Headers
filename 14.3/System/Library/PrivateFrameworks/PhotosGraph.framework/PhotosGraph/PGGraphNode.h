@class PGGraph, MANodeFilter, NSString;

@interface PGGraphNode : MANode <PGGraphElement>

@property (class, readonly, nonatomic) MANodeFilter *filter;

@property (readonly) PGGraph *graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setWeight:(float)a0;
- (id)UUID;
- (unsigned long long)propertiesCount;
- (id)propertyForKey:(id)a0;
- (id)name;
- (void)setPropertyValue:(id)a0 forKey:(id)a1;
- (id)keywordDescription;
- (id)firstDeepNeighborWithLabel:(id)a0 usingOutEdges:(BOOL)a1 inDomain:(unsigned short)a2;
- (unsigned long long)countOfDeepNeighborsWithLabel:(id)a0 usingOutEdges:(BOOL)a1 inDomain:(unsigned short)a2;
- (id)deepNeighborsWithLabel:(id)a0 usingOutEdges:(BOOL)a1 inDomain:(unsigned short)a2;
- (void)enumerateDeepNeighborsWithLabel:(id)a0 usingOutEdges:(BOOL)a1 inDomain:(unsigned short)a2 andBlock:(id /* block */)a3;
- (void)_enumerateDeepNeighborsWithLabel:(id)a0 domain:(unsigned short)a1 edgeType:(unsigned long long)a2 excluding:(id)a3 shouldStop:(BOOL *)a4 block:(id /* block */)a5;
- (void)_enumerateDeepNeighborsWithLabel:(id)a0 domain:(unsigned short)a1 edgeType:(unsigned long long)a2 shouldStop:(BOOL *)a3 block:(id /* block */)a4;
- (void)concreteNodeSuperAccess_setPropertyValue:(id)a0 forKey:(id)a1;

@end
