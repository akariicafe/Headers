@interface TSSPropertySet : NSObject <NSCopying, NSMutableCopying> {
    id mIndexSet;
}

+ (id)propertySetWithProperties:(int)a0;
+ (id)propertySet;
+ (id)p_mutableIndexSetWithFirstProperty:(int)a0 argumentList:(char *)a1;
+ (id)propertySetWithProperty:(int)a0;

- (id)initWithProperties:(int)a0;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithIndexSet:(id)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)propertySetByIntersectingWithPropertySet:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)count;
- (BOOL)containsProperty:(int)a0;
- (id)propertySetByAddingPropertiesFromSet:(id)a0;
- (BOOL)containsProperties:(id)a0;
- (id)propertySetByRemovingPropertiesFromSet:(id)a0;
- (id)initWithFirstProperty:(int)a0 argumentList:(char *)a1;
- (id)initWithPropertySet:(id)a0;
- (BOOL)intersectsProperties:(id)a0;
- (id)propertySetByAddingProperties:(int)a0;
- (id)propertySetByAddingProperty:(int)a0;
- (id)propertySetByRemovingProperty:(int)a0;
- (id)propertySetByRemovingProperties:(int)a0;
- (id)propertyStrings;

@end
