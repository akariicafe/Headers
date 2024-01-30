@class NSString;

@interface TSSPropertyMap : NSObject <NSCopying, TSSPropertySource> {
    struct TSSPropertyStore { } *mStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyMap;
+ (id)propertyMapWithPropertiesAndValues:(int)a0;
+ (id)propertyMapWithPropertyMap:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForProperty:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)setObject:(id)a0 forProperty:(int)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)allProperties;
- (id)init;
- (id)allKeys;
- (id)diff:(id)a0;
- (BOOL)containsProperty:(int)a0;
- (float)floatValueForProperty:(int)a0;
- (id)initWithPropertiesAndValues:(int)a0;
- (void)setBoolValue:(BOOL)a0 forProperty:(int)a1;
- (void)setBoxedObject:(id)a0 forProperty:(int)a1;
- (void)setDoubleValue:(double)a0 forProperty:(int)a1;
- (void)setFloatValue:(float)a0 forProperty:(int)a1;
- (void)setIntValue:(int)a0 forProperty:(int)a1;
- (double)CGFloatValueForProperty:(int)a0;
- (id)old_description;
- (void)pSetArrayOfObjects:(id[9])a0 forProperty:(int)a1;
- (void)addValuesFromPropertyMap:(id)a0;
- (id)boxedObjectForProperty:(int)a0;
- (BOOL)containsAnyPropertyInProperties:(id)a0;
- (BOOL)definesProperty:(int)a0;
- (id)diffOnlyDifferences:(id)a0;
- (id)diffPropertyNames:(id)a0;
- (double)doubleValueForProperty:(int)a0;
- (void)enumeratePropertiesAndObjectsUsingBlock:(id /* block */)a0;
- (void)filterWithProperties:(id)a0;
- (id)initWithFirstKey:(int)a0 andArgumentList:(char *)a1;
- (id)initWithPropertyMap:(id)a0;
- (int)intValueForProperty:(int)a0;
- (void)minusPropertyMap:(id)a0;
- (void)pSetArrayOfFloats:(double[9])a0 forProperty:(int)a1;
- (void)p_getAllKeys:(int *)a0;
- (id)propertyMapByAddingValuesFromPropertyMap:(id)a0;
- (id)propertyMapByRemovingValuesForProperties:(id)a0;
- (id)propertyMapByRemovingValuesFromPropertyMap:(id)a0;
- (id)propertyMapWithProperties:(id)a0;
- (void)removeAllPropertyValues;
- (void)removeValueForProperty:(int)a0;
- (void)removeValuesForProperties:(id)a0;
- (void)removeValuesFromPropertyMap:(id)a0;
- (void)setCGFloatValue:(double)a0 forProperty:(int)a1;

@end
