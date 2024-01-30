@class NSDictionary, NSString;

@interface LSPropertyList : NSObject <LSDetachable, NSCopying>

@property (readonly, nonatomic) NSDictionary *_expensiveDictionaryRepresentation;
@property (readonly) NSString *_applicationIdentifier;

+ (id)propertyListWithData:(id)a0;
+ (id)propertyListWithDictionary:(id)a0;
+ (id)new;
+ (id)propertyListWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

- (void)detach;
- (id)init;
- (id)objectsForKeys:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0 ofClass:(Class)a1 valuesOfClass:(Class)a2;
- (id)description;
- (id)_init;
- (id)debugDescription;
- (id)objectForKey:(id)a0 ofClass:(Class)a1;

@end
