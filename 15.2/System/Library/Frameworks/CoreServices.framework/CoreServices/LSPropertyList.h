@class NSDictionary, NSString;

@interface LSPropertyList : NSObject <LSDetachable, NSCopying>

@property (readonly, nonatomic) NSDictionary *_expensiveDictionaryRepresentation;
@property (readonly) NSString *_applicationIdentifier;

+ (id)new;
+ (id)propertyListWithDictionary:(id)a0;
+ (id)propertyListWithData:(id)a0;
+ (id)propertyListWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

- (void)detach;
- (id)description;
- (id)init;
- (id)_init;
- (id)objectForKey:(id)a0 ofClass:(Class)a1 valuesOfClass:(Class)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0 ofClass:(Class)a1;
- (id)objectsForKeys:(id)a0;
- (id)debugDescription;

@end
