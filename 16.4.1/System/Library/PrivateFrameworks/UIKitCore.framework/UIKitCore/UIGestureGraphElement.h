@class NSString, NSMutableDictionary;

@interface UIGestureGraphElement : NSObject {
    NSMutableDictionary *_properties;
}

@property (readonly, copy, nonatomic) NSString *label;

- (void)removeAllProperties;
- (BOOL)hasProperties:(id)a0;
- (id)initWithLabel:(id)a0;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (void)setProperties:(id)a0;
- (id)propertyForKey:(id)a0;
- (void)removePropertyForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (void)setProperty:(id)a0 forKey:(id)a1;

@end
