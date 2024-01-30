@class NSString, NSMutableDictionary;

@interface MAConcreteEdge : MAEdge {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    float _weight;
    NSString *_label;
}

- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (void)removeAllProperties;
- (BOOL)hasProperties;
- (void)setWeight:(float)a0;
- (void).cxx_destruct;
- (id)propertyKeys;
- (id)propertyDictionary;
- (unsigned long long)memoryFootprint:(id)a0;
- (void)setLocalProperties:(id)a0;
- (void)removePropertyForKey:(id)a0;
- (unsigned long long)propertiesCount;
- (unsigned short)domain;
- (void)mergeProperties:(id)a0;
- (id)propertyForKey:(id)a0;
- (id)label;
- (float)weight;
- (void)setPropertyValue:(id)a0 forKey:(id)a1;

@end
