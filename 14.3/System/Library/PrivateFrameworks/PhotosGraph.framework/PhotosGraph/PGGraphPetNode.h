@class NSSet, NSString;

@interface PGGraphPetNode : PGGraphOptimizedNode {
    NSString *_uuid;
}

@property (readonly, nonatomic) NSSet *momentNodes;
@property (readonly, nonatomic) NSSet *ownerNodes;

- (void)enumerateMomentNodesUsingBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (unsigned short)domain;
- (id)description;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;
- (void)enumerateOwnerNodesUsingBlock:(id /* block */)a0;

@end
