@class NSArray;

@interface NSCompositeAttributeDescription : NSAttributeDescription {
    NSArray *_elements;
}

@property (copy) NSArray *elements;

+ (BOOL)supportsSecureCoding;

- (BOOL)isTransient;
- (void)setTransient:(BOOL)a0;
- (void)setDefaultValue:(id)a0;
- (id)init;
- (void)dealloc;
- (id)_initWithName:(id)a0 type:(unsigned long long)a1 withClassName:(id)a2;
- (id)_initWithType:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1;
- (id)_initWithName:(id)a0;
- (unsigned long long)_propertyType;
- (id)description;
- (unsigned long long)attributeType;
- (void)_createCachesAndOptimizeState;
- (id)_initWithName:(id)a0 type:(unsigned long long)a1;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 entitiesSlots:(id)a5 fetchRequests:(id)a6;
- (BOOL)isEqual:(id)a0;
- (void)setAttributeType:(unsigned long long)a0;
- (BOOL)_isSchemaEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_addElement:(id)a0;
- (id)_buildDefaultValue;
- (id)_flattenElements:(id)a0;
- (id)_flattenedElements;

@end
