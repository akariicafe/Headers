@class NSMutableDictionary;

@interface BSAbstractDefaultDomainClassMetadata : NSObject {
    Class _clazz;
    NSMutableDictionary *_propertyNameToPropertyMap;
    NSMutableDictionary *_selectorToPropertyMap;
}

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
