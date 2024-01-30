@class NSDictionary, NSMutableDictionary, NSString;

@interface SXJSONObject : NSObject

@property (readonly, nonatomic) NSMutableDictionary *objectStorage;
@property (readonly, nonatomic) NSDictionary *jsonDictionary;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } unfairLock;
@property (readonly, nonatomic) NSString *specificationVersion;

+ (void)initialize;
+ (void)unlock;
+ (void)lock;
+ (Class)classForProtocolProperty:(id)a0 withValue:(id)a1;
+ (id /* block */)valueClassBlockForPropertyWithName:(id)a0;
+ (id)jsonPropertyNameForObjCPropertyName:(id)a0;
+ (id /* block */)objectValueClassBlockForPropertyWithName:(id)a0;
+ (id /* block */)purgeClassBlockForPropertyWithName:(id)a0;
+ (Class)classOverrideAtInitialization:(Class)a0 type:(id)a1;
+ (id)propertyHashTable;
+ (id)propertyDefinitions;
+ (id)protocolPropertyDefinitions;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)jsonData;
- (id)JSONRepresentation;
- (id)initWithJSONObject:(id)a0 andVersion:(id)a1;
- (id)initWithJSONData:(id)a0 andVersion:(id)a1;
- (void)storeObject:(id)a0 forLookupKey:(id)a1;
- (void)storeValue:(id)a0 forLookupKey:(id)a1;
- (id)valueForLookupKey:(id)a0;

@end
