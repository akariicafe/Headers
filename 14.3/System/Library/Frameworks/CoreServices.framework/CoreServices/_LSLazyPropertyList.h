@class NSDictionary;

@interface _LSLazyPropertyList : LSPropertyList <NSCopying, NSSecureCoding, LSDetachable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDictionary *propertyList;

+ (id)lazyPropertyList;
+ (id)lazyPropertyListWithPropertyListURL:(id)a0;
+ (id)lazyPropertyListWithPropertyList:(id)a0;
+ (id)lazyPropertyListWithLazyPropertyLists:(id)a0;
+ (id)lazyPropertyListWithPropertyListData:(id)a0;
+ (id)lazyPropertyListWithPropertyListURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (id)lazyPropertyListWithContext:(struct LSContext { id x0; } *)a0 unit:(unsigned int)a1;

- (void)detach;
- (id)propertyList;
- (id)init;
- (id)objectsForKeys:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0 ofClass:(Class)a1 valuesOfClass:(Class)a2;
- (id)initWithCoder:(id)a0;
- (id)uncheckedObjectsForKeys:(id)a0;
- (id)objectForKey:(id)a0 ofClass:(Class)a1;
- (BOOL)_getPropertyList:(id *)a0;
- (BOOL)_getValue:(id *)a0 forPropertyListKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)_expensiveDictionaryRepresentation;

@end
