@class NSMutableDictionary;

@interface BSAbstractDefaultDomainClassMetadata : NSObject {
    Class _clazz;
    NSMutableDictionary *_propertyNameToPropertyMap;
    NSMutableDictionary *_selectorToPropertyMap;
}

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
