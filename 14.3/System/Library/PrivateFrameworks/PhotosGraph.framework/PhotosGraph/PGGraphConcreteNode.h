@class NSString, NSMutableDictionary;

@interface PGGraphConcreteNode : PGGraphNode {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    NSString *_label;
}

@property (nonatomic) float weight;

- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (void)removeAllProperties;
- (BOOL)hasProperties;
- (void).cxx_destruct;
- (id)propertyKeys;
- (id)propertyDictionary;
- (id)UUID;
- (void)setLocalProperties:(id)a0;
- (void)removePropertyForKey:(id)a0;
- (unsigned long long)propertiesCount;
- (unsigned short)domain;
- (void)mergeProperties:(id)a0;
- (id)propertyForKey:(id)a0;
- (id)label;
- (id)name;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;
- (void)setPropertyValue:(id)a0 forKey:(id)a1;
- (id)_stringValueForPropertyWithKey:(id)a0;

@end
