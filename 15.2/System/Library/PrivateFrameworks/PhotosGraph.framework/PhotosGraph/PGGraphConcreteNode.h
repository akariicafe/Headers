@class NSString, NSMutableDictionary;

@interface PGGraphConcreteNode : PGGraphNode {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    float _weight;
    NSString *_label;
}

- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (float)weight;
- (id)UUID;
- (unsigned long long)propertiesCount;
- (BOOL)hasProperties;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)name;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)propertyForKey:(id)a0;
- (id)propertyKeys;
- (id)_stringValueForPropertyWithKey:(id)a0;

@end
