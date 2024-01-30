@class NSDictionary, NSMutableDictionary, NSString;

@interface SXJSONObject : NSObject

@property (readonly, nonatomic) NSMutableDictionary *objectStorage;
@property (readonly, nonatomic) NSDictionary *jsonDictionary;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } unfairLock;
@property (readonly, nonatomic) NSString *specificationVersion;

+ (void)initialize;
+ (void)unlock;
+ (void)lock;
+ (id /* block */)valueClassBlockForPropertyWithName:(id)a0;
+ (Class)classForProtocolProperty:(id)a0 withValue:(id)a1;
+ (id /* block */)objectValueClassBlockForPropertyWithName:(id)a0;
+ (id /* block */)purgeClassBlockForPropertyWithName:(id)a0;
+ (id)jsonPropertyNameForObjCPropertyName:(id)a0;
+ (Class)classOverrideAtInitialization:(Class)a0 type:(id)a1;
+ (id)propertyHashTable;
+ (id)propertyDefinitions;
+ (id)protocolPropertyDefinitions;

- (id)JSONRepresentation;
- (id)jsonData;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)initWithJSONObject:(id)a0 andVersion:(id)a1;
- (id)initWithJSONData:(id)a0 andVersion:(id)a1;
- (void)storeObject:(id)a0 forLookupKey:(id)a1;
- (void)storeValue:(id)a0 forLookupKey:(id)a1;
- (id)valueForLookupKey:(id)a0;

@end
