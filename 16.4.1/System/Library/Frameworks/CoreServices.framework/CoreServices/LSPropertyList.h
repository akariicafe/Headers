@class NSDictionary, NSString;

@interface LSPropertyList : NSObject <LSDetachable, NSCopying>

@property (readonly, nonatomic) NSDictionary *_expensiveDictionaryRepresentation;
@property (readonly) NSString *_applicationIdentifier;

+ (id)propertyListWithDictionary:(id)a0;
+ (id)propertyListWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (id)new;
+ (id)propertyListWithData:(id)a0;

- (id)objectsForKeys:(id)a0;
- (void)detach;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)objectForKey:(id)a0 ofClass:(Class)a1 valuesOfClass:(Class)a2;
- (id)init;
- (id)description;
- (id)objectForKey:(id)a0 ofClass:(Class)a1;

@end
