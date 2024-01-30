@class NSString, NSMutableDictionary;

@interface PGGraphConcreteEdge : PGGraphEdge {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    float _weight;
    NSString *_label;
}

- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (float)weight;
- (unsigned long long)propertiesCount;
- (BOOL)hasProperties;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)propertyForKey:(id)a0;
- (id)propertyKeys;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;

@end
