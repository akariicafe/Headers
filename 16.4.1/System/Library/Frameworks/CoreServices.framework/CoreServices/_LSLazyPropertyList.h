@interface _LSLazyPropertyList : LSPropertyList <NSCopying, NSSecureCoding, LSDetachable>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)lazyPropertyListWithContext:(struct LSContext { id x0; } *)a0 unit:(unsigned int)a1;

- (void)prewarm;
- (id)objectsForKeys:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)uncheckedObjectsForKeys:(id)a0;
- (void)detach;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_getValue:(id *)a0 forPropertyListKey:(id)a1;
- (id)objectForKey:(id)a0 ofClass:(Class)a1 valuesOfClass:(Class)a2;
- (BOOL)_getPropertyList:(id *)a0;
- (id)init;
- (id)_expensiveDictionaryRepresentation;
- (id)objectForKey:(id)a0 ofClass:(Class)a1;

@end
