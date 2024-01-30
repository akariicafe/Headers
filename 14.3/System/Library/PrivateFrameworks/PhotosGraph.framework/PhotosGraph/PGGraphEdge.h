@class MAEdgeFilter, PGGraph, NSString;

@interface PGGraphEdge : MAEdge <PGGraphElement>

@property (class, readonly, nonatomic) MAEdgeFilter *filter;

@property (readonly) PGGraph *graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setWeight:(float)a0;
- (unsigned long long)propertiesCount;
- (id)propertyForKey:(id)a0;
- (void)setPropertyValue:(id)a0 forKey:(id)a1;
- (id)keywordDescription;
- (void)concreteEdgeSuperAccess_setPropertyValue:(id)a0 forKey:(id)a1;

@end
