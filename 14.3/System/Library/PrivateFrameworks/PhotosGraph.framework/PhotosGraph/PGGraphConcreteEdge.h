@class NSString, NSMutableDictionary;

@interface PGGraphConcreteEdge : PGGraphEdge {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    NSString *_label;
}

@property (nonatomic) float weight;

- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (void)removeAllProperties;
- (BOOL)hasProperties;
- (void).cxx_destruct;
- (id)propertyKeys;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (void)removePropertyForKey:(id)a0;
- (unsigned long long)propertiesCount;
- (unsigned short)domain;
- (void)mergeProperties:(id)a0;
- (id)propertyForKey:(id)a0;
- (id)label;
- (void)setPropertyValue:(id)a0 forKey:(id)a1;

@end
